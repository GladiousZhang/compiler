#include <stdio.h>
#include "string.h"
#include <sys/stat.h>

int creatDat(char *str,char * place){
    char* buffer=(char *)malloc(100); //用于读取文件内容的缓冲区
    char temp[] = "\n";
    char *fil_place = place;
    FILE *fp = fopen(fil_place, "ab+"); //以二进制读写模式打开文件
    char * str_temp = (char *)malloc(strlen(str)+strlen(temp)+1);
    strcpy(str_temp,str);
    strcat(str_temp,temp);

    if (fp == NULL) {
        return 0;
    }
    
    while (fscanf(fp, "%s", buffer) != EOF) { // 逐个读取单词
        if (strcmp(buffer, str) == 0) { // 比较单词是否相同
            fclose(fp);
            free(buffer);
            return 0;
        }
        memset(buffer,0,100);
    }
    free(buffer);
    fputs(str_temp,fp); //不存在相同的，写入文件
    fclose(fp); // 关闭文件
    return 1;
}

int createTable(char *table, struct Createfieldsdef *cfdef_var)
{   
    //以下模块实现最上层sys.dat的编写，记录表名，并生成表对应的文件夹
    int flag = creatDat(table,"./data/sys.dat");
    char * route = "./data/";
    char * path = (char *)malloc(strlen(route)+strlen(table)+1);
    // char * tmp = NULL;
    if(!flag){
        printf("Table Existed\n");
        return 0;
    }
    // if(tmp=strstr(table,"\n")){
    //     *tmp = '\0';
    // }
    strcpy(path,route);
    strcat(path,table);
    flag = mkdir(path);
    if (-1==flag)
    {
        printf("%s\n",strlen(route),strerror(errno));
        return 0;
    }
    

    return 1;
}
