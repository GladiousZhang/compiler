#include <stdio.h>
#include "string.h"
#include <sys/stat.h>
#include "define.h"

//将枚举类型对应到字符串类型
char *type_names[] = {"INT","CHAR"};

//删除插入时的引号
void * delQuote(char * str){
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
    
    
    fputs(str_temp,fp); //不存在相同的，写入文件
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
		if (strcmp(type_str, "INT") == 0){
			strcat(table_col, "INT");
		}
		else{
			strcat(table_col, "CHAR");
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
			free(s);
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

//查询表格
int selectRow(char *table, Column * col, Condition * con){

}