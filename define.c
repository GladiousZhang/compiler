#include <stdio.h>
#include "string.h"
#include <sys/stat.h>
#include "define.h"

//use database之后就记录数据库名称
char * dbname = "xixi";
//将枚举类型对应到字符串类型
char *type_names[] = {"INT","CHAR"};

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
		printf("Unable to Open File\n");
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

//创建表格，成功则返回1，失败返回0
int createTable(char *table, struct Createfieldsdef *cfdef_var){  
    
     
    if (dbname == NULL){
        printf("Databasename Undefined\n");
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
		while (fgets(line,100,fp)!=NULL){
			char * str_cmp = strtok(line, " ");
			if (strcmp(str_cmp, table) == 0){
				printf("Table Existed\n");
				return 0;
			}
		}
		fclose(fp);
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
        
        //以下其实是craetedatabase的需要的，对于createtable并不需要创建文件夹
        
        // flag = mkdir(path);
        // if (-1==flag)
        // {
        //     printf("%s\n",strlen(route),strerror(errno));
        //     return 0;
        // }
        //以下模块实现表txt文件的生成
        free(prePath);
        free(datPath);
		free(p);
        return 1;
    }
}
