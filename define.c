#include <stdio.h>
#include "string.h"
#include <sys/stat.h>
#include "define.h"
#include <ctype.h>

//将枚举类型对应到字符串类型
char *type_names[] = {"int","char"};

//输入字符转小写
void toLowerCase(char *str) {
	int i = 0;
	while (str[i]) {
		str[i] = tolower(str[i]);
		i++;
	}
}

//删除插入时的引号
void *delQuote(char * str){
	int i = 0;
	int j = 0;
	for (; str[i] != '\0'; i++){
		if (str[i] != '\''&&str[i] != '\"')
		{
			str[j++] = str[i];
		}
	}

	str[j] = '\0';//字符串结束
}

//删除换行符
void delNewLine(char * str){
	int i = 0;
	int j = 0;
	for (; str[i] != '\0'; i++){
		if (str[i] != '\n')
		{
			str[j++] = str[i];
		}
	}

	str[j] = '\0';//字符串结束
}

//创建place文件，在其中写入str的内容并换行
int creatFile(char *str,char * place){
    char* buffer=(char *)malloc(100); //用于读取文件内容的缓冲区
    char temp[] = "\n";
    char *fil_place = place;
	FILE *fp=fopen(fil_place, "ab+"); //以二进制读写模式打开文件
    //为每个表名加上分隔符，实现单独一行
    char * str_temp = (char *)malloc(strlen(str)+strlen(temp)+1);
    strcpy(str_temp,str);
    strcat(str_temp,temp);
	
    if (fp == NULL) {
		printf("\rUnable to Open File\n");
        return 0;
    }
    
    fputs(str_temp,fp); //写入文件
    fclose(fp); // 关闭文件
    return 1;
}

//实现枚举转字符串
char * type_to_string(enum Type type){
    if (type < enum_INT || type > enum_CHAR){
        return "error";
    }
	return type_names[type];
}

//创建表，成功则返回1，失败返回0
int createTable(char *table, struct Createfieldsdef *cfdef_var,char *dbname){  
    
     
    if (dbname == NULL){
        printf("\rDatabasename Undefined\n");
        return 0;
    }else{

        //createTable需要实现编写database下的一个dat文件

        char * route = "./data/";
        char * prePath = (char *)malloc(strlen(route)+strlen(dbname)+1);
        char * datPath = (char *)malloc(strlen(prePath)+strlen("/sys.dat")+1);
        int flag = 0;
        struct Createfieldsdef *p = cfdef_var;
		int row_no = 1;
		char num[10];
        //./data/dbname
        strcpy(prePath,route);
		strcat(prePath,dbname);
        //./data/dbname/sys.dat
		strcpy(datPath,prePath);
		strcat(datPath, "/sys.dat");
		
		char * table_col =
			(char *)malloc(strlen(table) + strlen(cfdef_var->field) +
			strlen("INT") + 10);
		sprintf(num, "%d", row_no);
		row_no++;
		strcpy(table_col, table);
		strcat(table_col, " ");
		strcat(table_col, num);
		strcat(table_col, " ");
		strcat(table_col, p->field);
		strcat(table_col, " ");
		char * type_str = type_to_string(cfdef_var->type);
		if (strcmp(type_str, "int") == 0){
			strcat(table_col, "int");
		}
		else{
			strcat(table_col, "char");
			strcat(table_col, " ");
			sprintf(num, "%d", p->length);
			strcat(table_col, num);
		}
		char line[100];
		FILE *fp = fopen(datPath, "r");
		if (fp!=NULL)
		{
			while (fgets(line, 100, fp) != NULL){
				char * str_cmp = strtok(line, " ");
				if (strcmp(str_cmp, table) == 0){
					printf("\rTable Existed\n");
					return 0;
				}
			}
			fclose(fp);
		}
		flag = creatFile(table_col, datPath);
		if (!flag){
			return 0;
		}
		while (p->next_fdef != NULL){
			struct Createfieldsdef *q = p->next_fdef;
			p = q;
			sprintf(num, "%d", row_no);
			row_no++;
			strcpy(table_col, table);
			strcat(table_col, " ");
			strcat(table_col, num);
			strcat(table_col, " ");
			strcat(table_col, p->field);
			strcat(table_col, " ");
			type_str = type_to_string(p->type);
			if (strcmp(type_str, "INT") == 0){
				strcat(table_col, "INT");
			}
			else{
				strcat(table_col, "CHAR");
				strcat(table_col, " ");
				sprintf(num, "%d", p->length);
				strcat(table_col, num);
			}
			flag = creatFile(table_col, datPath);
			if (flag!=1){
				return 0;
			}
		}
        
        
        free(prePath);
        free(datPath);
		free(p);
        return 1;
    }
}

//建立数据库，成功返回1，失败返回0
int createDatabase(char *dbname){
	char * sysPath = "./data/sys.dat";
	char * dirPath = (char *)malloc(strlen("./data/") + strlen(dbname));
	strcpy(dirPath, "./data/");
	strcat(dirPath, dbname);
	char line[100];
	FILE *fp = fopen(sysPath, "r");
	if (fp != NULL)
	{
		while (fgets(line, 100, fp) != NULL){
			if (strcmp(line,dbname) == 0){
				printf("\rDatabase Existed\n");
				return 0;
			}
		}
		fclose(fp);
	}
	int flag = creatFile(dbname,sysPath);
	
	if (!flag)
	{
		return 0;
	}
	//以下创建文件夹
	 flag = mkdir(dirPath);
	 if (-1==flag)
	 {
	     printf("\r%s\n",strerror(errno));
	     return 0;
	 }
	return 1;
}

//判断是否属于已存在的数据库
int isDB(char *dbname){
	char *path = "./data/sys.dat";
	FILE *fp = fopen(path, "r");
	char word[100];
	if (fp!=NULL)
	{
		while (fscanf(fp, "%s", word) != EOF){
			if (strcmp(dbname, word) == 0){
				return 1;
			}
		}
		fclose(fp);
	}
	
	printf("\rDatabase not Exist\n");
	return 0;
}

//插入表格，成功返回1，失败返回0
int insertTable(char * table, struct Insertvalues * insert,char * dbname){
	if (dbname == NULL)
	{
		printf("\rDatabase Undefined\n");
		return 0;
	}
	char *prePath = "./data/";
	char *sysPath = (char *)malloc(strlen("/sys.dat") + strlen(prePath) + strlen(dbname)+1);
	strcpy(sysPath, prePath);
	strcat(sysPath, dbname);
	strcat(sysPath, "/sys.dat");
	typedef struct attr_val
	{
		char * field;
		char * value;
		struct attr_val * next;
	}attr_value;
	FILE *fp = fopen(sysPath, "r");
	free(sysPath);
	attr_value * head = (attr_value *)malloc(sizeof(attr_value));
	head->field = NULL;
	head->value = NULL;
	head->next = NULL;
	attr_value * p = head;
	if (fp==NULL)
	{
		printf("\rTable Not Exist\n");
		return 0;
	}
	int col_len=0;
	char *line=(char *)malloc(20);
	if (fp != NULL)
	{
		while (fgets(line, 20, fp) != NULL){
			char * str_cmp = strtok(line, " ");
			if (strcmp(str_cmp, table) == 0){
				str_cmp = strtok(NULL, " ");
				str_cmp = strtok(NULL, " ");
				attr_value * q = (attr_value *)malloc(sizeof(attr_value));
				q->field = (char *)malloc(sizeof(str_cmp));
				strcpy(q->field, str_cmp);
				q->value = NULL;
				q->next = NULL;
				p->next = q;
				p = q;
				col_len++;
			}
		}
		fclose(fp);
	}
	free(line);
	struct Value * value = insert->value;
	if (!col_len)
	{
		printf("\rTable not Exist\n");
		return 0;
	}
	if (insert->field==NULL)
	{
		char * insert_value=value->value;
		while (value->next_value!=NULL)
		{
			value = value->next_value;
			char *temp_val = malloc(strlen(insert_value) + strlen(value->value) + 2);
			strcpy(temp_val, insert_value);
			strcat(temp_val, " ");
			strcat(temp_val, value->value);
			char *s = insert_value;
			insert_value = (char *)malloc(sizeof(temp_val));
			strcpy(insert_value, temp_val);
		}
		delQuote(insert_value);
		char *txtPath = (char *)malloc(strlen(".txt") + strlen(prePath) 
			+ strlen(dbname) +strlen(table)+ 2);
		strcpy(txtPath,prePath);
		strcat(txtPath, dbname);
		strcat(txtPath, "/");
		strcat(txtPath, table);
		strcat(txtPath, ".txt");
		int flag = creatFile(insert_value,txtPath);
		if (!flag)
		{
			return 0;
		}
	}
	else{
		struct Field * i_field = insert->field;
		attr_value * av = head;
		struct Field * f = i_field;
		struct Value * v = value;
		while (av->next != NULL){
			av = av->next;
			f = i_field;
			v = value;
			int place = 0;
			while (f!=NULL&&strcmp(av->field , f->field)!=0){
				f = f->next_field;
				place++;
			}
			if (f == NULL){
				continue;
			}
			for (int i = 0; i < place; i++){
				v = v->next_value;
			}
			av->value = (char *)malloc(strlen(v->value)+1);
			strcpy(av->value, v->value);
		}
		av = head->next;
		char * insert_value=av->value;
		while (av->next != NULL){
			av = av->next;
			if (av->value == NULL)
			{
				av->value = "NULL";
			}
			char *temp_val = malloc(strlen(insert_value) + strlen(av->value) + 2);
			strcpy(temp_val, insert_value);
			strcat(temp_val, " ");
			strcat(temp_val, av->value);
			insert_value = temp_val;
		}
		delQuote(insert_value);
		char *txtPath = (char *)malloc(strlen(".txt") + strlen(prePath)
			+ strlen(dbname) + strlen(table) + 2);
		strcpy(txtPath, prePath);
		strcat(txtPath, dbname);
		strcat(txtPath, "/");
		strcat(txtPath, table);
		strcat(txtPath, ".txt");
		int flag = creatFile(insert_value, txtPath);
		if (!flag)
		{
			return 0;
		}
	}
	return 1;

}

//输出表头
void printHead(struct Column * col){
	printf("\r");
	struct Column * p = col;
	while (p->next != NULL)
	{
		char *str;
		if (p->table == NULL)
		{
			str = (char *)malloc(strlen(p->name) + 1);
			strcpy(str, p->name);
		}
		else
		{
			str = (char*)malloc(strlen(p->name) + strlen(p->table) + 2);
			strcpy(str, p->table);
			strcat(str, ".");
			strcat(str, p->name);
		}
		p = p->next;
		printf("%s\t", str);
		free(str);
		
	}
	if (p->table == NULL)
	{
	printf("%s\n", p->name);
	}
	else
	{
	printf("%s.%s\n", p->table, p->name);
	}
}

//将所有需要的表格记录下来
void readInfo(Inf * info, struct Table *table,char * dbname){
	struct Table * p = table;
	//dirPath:./data/dbname
	char * dirPath = (char *)malloc(strlen(dbname) + strlen("./data/") + 1);
	strcpy(dirPath, "./data/");
	strcat(dirPath, dbname);
	//datPath:./data/dbname/sys.dat
	char *datPath = (char *)malloc(strlen(dirPath) + strlen("/sys.dat") + 1);
	strcpy(datPath, dirPath);
	strcat(datPath, "/sys.dat");
	Inf * q = info;
	while (p != NULL){
		FILE * tbfp = fopen(datPath, "r");
		char * line = malloc(30);
		fgets(line, 30, tbfp);
		char * cmp = strtok(line, " ");
		while (strcmp(p->table, cmp) != 0 && fgets(line, 30, tbfp) != EOF)
		{
			cmp = strtok(line, " ");
		}
		if (strcmp(p->table, cmp) != 0 && fgets(line, 30, tbfp) == EOF)
		{
			p = p->next;
			continue;
		}
		char * str = (char *)malloc(sizeof(cmp));
		strcpy(str, cmp);

		while (strcmp(p->table, str) == 0)
		{
			q->table = (char *)malloc(sizeof(cmp));
			strcpy(q->table, cmp);
			delNewLine(q->table);
			
			cmp=strtok(NULL, " ");
			cmp=strtok(NULL, " ");
			q->col_name = (char *)malloc(sizeof(cmp));
			strcpy(q->col_name, cmp);
			delNewLine(q->col_name);
			Inf *k = (Inf *)malloc(sizeof(Inf));
			k->next = NULL;
			q->next = k;
			q = k;
			if (fgets(line,30,tbfp)!=NULL)
			{
				cmp = strtok(line, " ");
				str = (char *)malloc(sizeof(cmp));
				strcpy(str, cmp);
			}
			else
			{
				break;
			}
		}
		p = p->next;
		fclose(tbfp);
	}
	Inf *k = info;
	while (k->next != q){
		k = k->next;
	}
	k->next = NULL;
	free(datPath);
	//以上读完dat文件，实现了读入表格的所有行和列
	//以下实现读入表格的所有值
	//tbPath:./data/dbname/table.txt
	q = info;
	char * str = q->table;
	int col_num = 0;
	while (q != NULL){
		if (strcmp(q->table, str) != 0){
			str = q->table;
			col_num = 0;
		}
		char * tbPath = (char *)malloc(strlen(dirPath) + 2 + strlen(q->table) + strlen(".txt"));
		strcpy(tbPath, dirPath);
		strcat(tbPath, "/");
		strcat(tbPath, q->table);
		strcat(tbPath, ".txt");
		FILE *dtfp = fopen(tbPath,"r");
		struct Value *val = (struct Value *)malloc(sizeof(struct Value));
		q->value=val;
		char *line = (char *)malloc(40);
		while (fgets(line, 40, dtfp)!=NULL){
			char * v = strtok(line, " ");
			for (int i = 0; i < col_num; i++){
				v = strtok(NULL, " ");
			}
			val->value = (char *)malloc(sizeof(v));
			strcpy(val->value, v);
			delNewLine(val->value);
			struct Value *v_temp = (struct Value *)malloc(sizeof(struct Value));
			v_temp->value = NULL;
			v_temp->next_value = NULL;
			val->next_value = v_temp;
			val = v_temp;
		}
		fclose(dtfp);
		free(tbPath);
		free(line);
		struct Value *v_temp = q->value;
		while (v_temp->next_value!=val)
		{
			v_temp = v_temp->next_value;
		}
		v_temp->next_value = NULL;
		q = q->next;
		col_num++;
	}
	
	free(dirPath);
	
}

//按行显示表格内容
void print(Inf * info,int * rec,int time){
	Inf *disp;
	
	int flag = 0;
	for (int row = 0; row < time&&flag==0; row++){
		if (rec[row]==0)
		{
			continue;
		}
		else{

			disp = info;
			struct Value *p = disp->value;
			printf("\r");
			while (disp != NULL){
				p = disp->value;
				for (int j = 0; j < row; j++){
					p = p->next_value;
				}
				printf("%s\t\t", p->value);
				disp = disp->next;
			}
			printf("\n");
			if (disp == NULL&&p->next_value == NULL){
				flag = 1;
			}
		}
	}
}

//查询表格
int selectRow(char * dbname,struct Table *table, struct Column * col, struct Condition * con){
	if (dbname == NULL)
	{
		printf("\rDatabase Undefined\n");
		return 0;
	}
	 

	Inf * info = (Inf *)malloc(sizeof(Inf));
	readInfo(info, table,dbname);

	Inf * out = (Inf *)malloc(sizeof(Inf));
	if (strcmp(col->name,"*")==0)
	{	
		Inf *p = info;
		struct Column * q = col;
		
		while (p != NULL){
			q->table = p->table;
			q->name = p->col_name;
			struct Column * k = (struct Column *)malloc(sizeof(struct Column));
			k->name = NULL;
			k->table = NULL;
			k->next = NULL;
			q->next = k;
			q = k;
			p = p->next;
		}
		struct Column * k = col;
		while (k->next != q){
			k = k->next;
		}
		k->next = NULL;
		out = info;
	}
	else
	{
		Inf * q = info;
		struct Column * colu = col;
		while (q!=NULL&&((col->table!=NULL&&(strcmp(q->table, colu->table) != 0 
			|| strcmp(q->col_name, colu->name) != 0)) || 
			(colu->table == NULL&&strcmp(q->col_name, colu->name) != 0)))
		{
			q = q->next;
		}
		colu = colu->next;
		out->col_name = (char *)malloc(sizeof(q->col_name));
		out->table = (char *)malloc(sizeof(q->table));
		strcpy(out->col_name, q->col_name);
		strcpy(out->table, q->table);
		out->value = q->value;
		q = q->next;
		Inf * l = (Inf *)malloc(sizeof(Inf));
		out->next = l;
		while (q != NULL&&colu!=NULL){
			if (((colu->table != NULL && (strcmp(q->table, colu->table) == 0
				&&strcmp(q->col_name, colu->name) == 0)) ||
				(colu->table == NULL&&strcmp(q->col_name, colu->name) ==0)))
			{
				l->col_name = (char *)malloc(sizeof(q->col_name));
				l->table = (char *)malloc(sizeof(q->table));
				strcpy(l->col_name, q->col_name);
				strcpy(l->table, q->table);
				l->value = q->value;
				Inf * j = (Inf *)malloc(sizeof(Inf));
				l->next = j;
				l = j;
				colu = colu->next;
			}
			q = q->next;
		}
		Inf * k = out;
		while (k->next != l){
			k = k->next;
		}
		k->next = NULL;
	}
	printHead(col);
	struct Condition * c = con;
	int rec[50];
	for (int i = 0; i < 50; i++){
		rec[i] = 0;
	}
	if (c == NULL){
		for (int i = 0; i < 50; i++){
			rec[i] = 1;
		}
	}
	else
	{

		//select SNAME from STUDENT where SAGE > 20 and SSEX = 1;
		while (c != NULL){
			Inf * p = info;
			//找到与条件表名列名相同的
			while (strcmp(p->col_name, c->left) != 0
				&& (((c->table_left != NULL&&strcmp(c->table_left, p->table) != 0))
				|| (c->table_left == NULL)))
			{
				p = p->next;
			}
			struct Value *pv = p->value;
			int cnt = 0;
			int rec_tp[50];
			for (int i = 0; i < 50; i++){
				rec_tp[i] = 0;
			}
			if (!strcmp(c->oper, ">")){
				while (pv != NULL)
				{

					if (atoi(pv->value) > atoi(c->right)){
						rec_tp[cnt] = 1;

					}
					pv = pv->next_value;
					cnt++;
				}
			}
			else if (!strcmp(c->oper, "<"))
			{
				while (pv != NULL)
				{
					if (atoi(pv->value) < atoi(c->right)){
						rec_tp[cnt] = 1;

					}
					cnt++;
					pv = pv->next_value;
				}
			}
			else if (!strcmp(c->oper, "=")){
				while (pv != NULL)
				{
					//select sname from student where sname = 'lisi';
					if (strcmp(pv->value, c->right) == 0){
						rec_tp[cnt] = 1;

					}
					cnt++;
					pv = pv->next_value;
				}
			}
			else if (!strcmp(c->oper, ">="))
			{
				while (pv != NULL)
				{
					if (atoi(pv->value) >= atoi(c->right)){
						rec_tp[cnt] = 1;

					}
					cnt++;
					pv = pv->next_value;
				}
			}
			else if (!strcmp(c->oper, "<=")){
				while (pv != NULL)
				{
					if (atoi(pv->value) <= atoi(c->right)){
						rec_tp[cnt] = 1;
					}
					cnt++;
					pv = pv->next_value;
				}
			}
			else if (!strcmp(c->oper, "!="))
			{
				while (pv != NULL)
				{
					if (strcmp(pv->value, c->right) != 0){
						rec_tp[cnt] = 1;
					}
					cnt++;
					pv = pv->next_value;
				}
			}
			if (strcmp(c->rlt_to_last, "or") == 0){
				for (int i = 0; i < 50; i++){
					rec[i] = rec[i] | rec_tp[i];
				}
			}
			else if (strcmp(c->rlt_to_last, "and") == 0)
			{
				for (int i = 0; i < 50; i++){
					rec[i] = rec[i] & rec_tp[i];
				}
			}
			c = c->next;
		}
	}
	print(out, rec, 50);
	free(table);
	free(col);
	free(con);
	return 1;
}

//删除数据库
int dropDB(char * dbname){
		FILE *file, *temp;
		char word[100], line[1000];
		int found = 0;
		file = fopen("./data/sys.dat", "r");
		if (file == NULL) {
			return 0;
		}
		temp = fopen("./data/temp.dat", "w");
		if (temp == NULL) {
			return 0;
		}
		while (fgets(line, sizeof(line), file)) {
			if (strstr(line, dbname) != NULL) {
				continue; // 跳过包含单词的行
				found++;
			}

			// 将不包含单词的行写入临时文件
			fputs(line, temp);
		}
		fclose(file);
		fclose(temp);
		if (found != 0){
			return 0;
		}
		// 删除原文件
		remove("./data/sys.dat");
		// 重命名临时文件为原文件名
		rename("./data/temp.dat", "./data/sys.dat");
		char * dirPath = (char *)malloc(strlen("./data/") + strlen(dbname) + 1);
		strcpy(dirPath, "./data/");
		strcat(dirPath, dbname);
		rmdir(dirPath);
		return 1;

}

//删除表格
int dropTB(char *dbname, char * table){
	if (dbname == NULL){
		printf("\rDatabase Undefined\n");
		return 0;
	}
	FILE *file, *temp;
	char word[100], line[1000];
	int found = 0;
	char * datPath = (char *)malloc(strlen("./data/") + strlen(dbname) +strlen("/sys.dat")+ 1);
	strcpy(datPath, "./data/");
	strcat(datPath, dbname);
	strcat(datPath, "/sys.dat");
	file = fopen(datPath, "r");
	if (file == NULL) {
		return 0;
	}
	char * tmpPath = (char *)malloc(strlen("./data/") + strlen(dbname) +strlen( "/tmp.dat" )+ 1);
	strcpy(tmpPath, "./data/");
	strcat(tmpPath, dbname);
	strcat(tmpPath, "/tmp.dat");
	temp = fopen(tmpPath, "w");
	if (temp == NULL) {
		return 0;
	}
	while (fgets(line, sizeof(line), file)) {
		if (strstr(line, table) != NULL) {
			continue; // 跳过包含单词的行
			found++;
		}

		// 将不包含单词的行写入临时文件
		fputs(line, temp);
	}
	fclose(file);
	fclose(temp);
	if (found != 0){
		return 0;
	}
	// 删除原文件
	remove(datPath);
	// 重命名临时文件为原文件名
	rename(tmpPath, datPath);
	//删除文件夹
	char * txtPath = (char *)malloc(strlen("./data/") + strlen(dbname) +strlen(table)
		+strlen(".txt")+ 2);
	strcpy(txtPath, "./data/");
	strcat(txtPath, dbname);
	strcat(txtPath, "/");
	strcat(txtPath, table);
	strcat(txtPath, ".txt");
	remove(txtPath);
	return 1;
}

//显示所有的数据库名称
int showDB(){
	FILE *fp;
	char buffer[1000];
	fp = fopen("./data/sys.dat", "r");
	if (fp == NULL) {
		return 0;
	}
	memset(buffer, 0, sizeof(buffer));
	// 读取文件全部内容并输出
	fread(buffer, sizeof(char), 1000, fp);
	printf("\r%s", buffer);
	fclose(fp);
	return 1;
}

//显示所有的表格名称
int showTB(char * dbname){
	if (dbname == NULL){
		printf("\rDatabase Undefined\n");
	}
	FILE *fp;
	char buffer[100][100]; // 存储文件内容
	char first_words[10][100]; // 存储每行第一个单词
	int num_lines = 0; // 文件行数
	int num_first_words = 0; // 不重复第一个单词个数
	char * datPath = (char *)malloc(strlen("./data/") + strlen(dbname) + strlen("/sys.dat") + 1);
	strcpy(datPath, "./data/");
	strcat(datPath, dbname);
	strcat(datPath, "/sys.dat");
	// 打开文件
	fp = fopen(datPath, "r");

	// 检查文件是否打开成功
	if (fp == NULL) {
		return 0;
	}
	while (num_lines < 100 && fgets(buffer[num_lines], 100, fp)) {
		char *word = strtok(buffer[num_lines], " ");
		if (word != NULL) {
			// 存储第一个单词
			strcpy(first_words[num_first_words], word);
			num_first_words++;
			// 判断是否重复
			for (int i = 0; i < num_first_words - 1; i++) {
				if (strcmp(first_words[i], word) == 0) {
					num_first_words--;
					break;
				}
			}
		}

		num_lines++;
	}

	// 输出不重复的第一个单词
	for (int i = 0; i < num_first_words; i++) {
		printf("\r%s\n", first_words[i]);
	}
	fclose(fp);

	return 1;
}

//删除表格中符合条件的行
int deleteTB(char * dbname, char * table, struct Condition * con){
	if (dbname == NULL){
		printf("\rDatabase Undefined\n");
		return 0;
	}
	Inf * info = (Inf *)malloc(sizeof(Inf));
	struct Table * tab = (struct Table *)malloc(sizeof(struct Table));
	tab->table = table;
	tab->next = NULL;
	readInfo(info, tab, dbname);
	int rec[50];
	struct Condition * p = con;
	for (int i = 0; i < 50; i++){
		rec[i] = 0;
	}
	while (p != NULL){
		Inf * in = info;
		while (strcmp(in->col_name,p->left)!=0)
		{
			in = in->next;
		}
		int cnt = 0;
		int rec_tp[50];
		for (int i = 0; i < 50; i++){
			rec_tp[i] = 0;
		}
		struct Value * v = in->value;
			if (!strcmp(p->oper, ">")){
				while (v != NULL)
				{

					if (atoi(v->value) > atoi(p->right)){
						rec_tp[cnt] = 1;

					}
					cnt++;
					v=v->next_value;
				}
			}
			else if (!strcmp(p->oper, "<"))
			{
				while (v != NULL)
				{
					if (atoi(v->value) < atoi(p->right)){
						rec_tp[cnt] = 1;

					}
					cnt++;
					v = v->next_value;
				}
			}
			else if (!strcmp(p->oper, "=")){
				while (v != NULL)
				{
					if (strcmp(v->value, p->right) == 0){
						rec_tp[cnt] = 1;

					}
					cnt++;
					v = v->next_value;
				}
			}
			else if (!strcmp(p->oper, ">="))
			{
				while (v != NULL)
				{
					if (atoi(v->value) >= atoi(p->right)){
						rec_tp[cnt] = 1;

					}
					cnt++;
					v = v->next_value;
				}
			}
			else if (!strcmp(p->oper, "<=")){
				while (v != NULL)
				{
					if (atoi(v->value) <= atoi(p->right)){
						rec_tp[cnt] = 1;
					}
					cnt++;
					v = v->next_value;
				}
			}
			else if (!strcmp(p->oper, "!="))
			{
				while (v != NULL)
				{
					if (strcmp(v->value, p->right) != 0){
						rec_tp[cnt] = 1;
					}
					cnt++;
					v = v->next_value;
				}
			}
			if (strcmp(p->rlt_to_last, "or") == 0){
				for (int i = 0; i < 50; i++){
					rec[i] = rec[i] | rec_tp[i];
				}
			}
			else if (strcmp(p->rlt_to_last, "and") == 0)
			{
				for (int i = 0; i < 50; i++){
					rec[i] = rec[i] & rec_tp[i];
				}
			}
		
		p = p->next;
	}
	struct Value * head = (struct Value*)malloc(sizeof(struct Value));
	head->next_value= info->value;

	struct Value * q = head;
	Inf * in = info;
	while (in != NULL){
		head->next_value = in->value;
		q = head;
		for (int i = 0; i < 50&&q!=NULL; i++){
			if (rec[i]==1)
			{
				if (q->next_value != NULL&&q->next_value->next_value!=NULL)
					q->next_value = q->next_value->next_value;
				else
					q->next_value = NULL;
				continue;
			}
			q = q->next_value;
		}
		in->value = head->next_value;
		in = in->next;
	}
	//以上筛选出所有保留下的数据
	//以下实现写入操作
	struct Value * wt = info->value;
	char * txtPath = (char *)malloc(strlen("./data/") + strlen(dbname) + strlen("/temp.txt")+1);
	strcpy(txtPath, "./data/");
	strcat(txtPath, dbname);
	strcat(txtPath, "/temp.txt");
	int cnt = 0;
	FILE * fp = fopen(txtPath, "w");
	while (wt != NULL){
		Inf * ip = info;
		while (ip!=NULL)
		{
			struct Value * vp = ip->value;
			for (int i = 0; i < cnt; i++)
			{
				vp=vp->next_value;
			}
			fputs(vp->value, fp);

			ip = ip->next;
			if (ip != NULL){
				fputc(' ', fp);
			}
			else
			{
				fputc('\n', fp);
			}
		}
		cnt++;
		wt = wt->next_value;
	}
	fclose(fp);
	char * init = (char *)malloc(strlen("./data/") + strlen(dbname) + strlen(".txt") + strlen(table) + 2);
	strcpy(init, "./data/");
	strcat(init, dbname);
	strcat(init, "/");
	strcat(init, table);
	strcat(init, ".txt");
	remove(init);
	rename(txtPath, init);
	return 1;
	
}

//修改表格中满足条件的行
int updateTB(char * dbname, char * table, struct SetInfo * setinfo, struct Condition * con){
	if (dbname == NULL){
		printf("\rDatabase Undefined\n");
		return 0;
	}
	Inf * info = (Inf *)malloc(sizeof(Inf));
	struct Table * tab = (struct Table *)malloc(sizeof(struct Table));
	tab->table = table;
	tab->next = NULL;
	readInfo(info, tab, dbname);
	int rec[50];
	struct Condition * p = con;
	for (int i = 0; i < 50; i++){
		rec[i] = 0;
	}
	while (p != NULL){
		Inf * in = info;
		while (strcmp(in->col_name, p->left) != 0)
		{
			in = in->next;
		}
		int cnt = 0;
		int rec_tp[50];
		for (int i = 0; i < 50; i++){
			rec_tp[i] = 0;
		}
		struct Value * v = in->value;
		if (!strcmp(p->oper, ">")){
			while (v != NULL)
			{

				if (atoi(v->value) > atoi(p->right)){
					rec_tp[cnt] = 1;

				}
				cnt++;
				v = v->next_value;
			}
		}
		else if (!strcmp(p->oper, "<"))
		{
			while (v != NULL)
			{
				if (atoi(v->value) < atoi(p->right)){
					rec_tp[cnt] = 1;

				}
				cnt++;
				v = v->next_value;
			}
		}
		else if (!strcmp(p->oper, "=")){
			while (v != NULL)
			{
				if (strcmp(v->value, p->right) == 0){
					rec_tp[cnt] = 1;

				}
				cnt++;
				v = v->next_value;
			}
		}
		else if (!strcmp(p->oper, ">="))
		{
			while (v != NULL)
			{
				if (atoi(v->value) >= atoi(p->right)){
					rec_tp[cnt] = 1;

				}
				cnt++;
				v = v->next_value;
			}
		}
		else if (!strcmp(p->oper, "<=")){
			while (v != NULL)
			{
				if (atoi(v->value) <= atoi(p->right)){
					rec_tp[cnt] = 1;
				}
				cnt++;
				v = v->next_value;
			}
		}
		else if (!strcmp(p->oper, "!="))
		{
			while (v != NULL)
			{
				if (strcmp(v->value, p->right) != 0){
					rec_tp[cnt] = 1;
				}
				cnt++;
				v = v->next_value;
			}
		}
		if (strcmp(p->rlt_to_last, "or") == 0){
			for (int i = 0; i < 50; i++){
				rec[i] = rec[i] | rec_tp[i];
			}
		}
		else if (strcmp(p->rlt_to_last, "and") == 0)
		{
			for (int i = 0; i < 50; i++){
				rec[i] = rec[i] & rec_tp[i];
			}
		}

		p = p->next;
	}
	//以上提取出所有符合conditions的行
	//以下模块对setinfo中的列进行操作
	struct SetInfo * sp = setinfo;
	while (sp != NULL){
		Inf * ip = info;
		while (strcmp(ip->col_name,sp->field)!=0)
		{
			ip = ip->next;
		}
		struct Value * vp = ip->value;
		for (int i = 0; i < 50 && vp != NULL; i++){
			if (rec[i] == 1){
				vp->value = sp->value;
			}
			vp = vp->next_value;
		}
		sp = sp->next;
	}

	//以下模块实现将结构体写入文件
	struct Value * wt = info->value;
	char * txtPath = (char *)malloc(strlen("./data/") + strlen(dbname) + strlen("/temp.txt") + 1);
	strcpy(txtPath, "./data/");
	strcat(txtPath, dbname);
	strcat(txtPath, "/temp.txt");
	int cnt = 0;
	FILE * fp = fopen(txtPath, "w");
	while (wt != NULL){
		Inf * ip = info;
		while (ip != NULL)
		{
			struct Value * vp = ip->value;
			for (int i = 0; i < cnt; i++)
			{
				vp = vp->next_value;
			}
			fputs(vp->value, fp);

			ip = ip->next;
			if (ip != NULL){
				fputc(' ', fp);
			}
			else
			{
				fputc('\n', fp);
			}
		}
		cnt++;
		wt = wt->next_value;
	}
	fclose(fp);
	char * init = (char *)malloc(strlen("./data/") + strlen(dbname) + strlen(".txt") + strlen(table) + 2);
	strcpy(init, "./data/");
	strcat(init, dbname);
	strcat(init, "/");
	strcat(init, table);
	strcat(init, ".txt");
	remove(init);
	rename(txtPath, init);
	return 1;
}
