
#include "stdio.h"
#include "stdio.h"
#include "stdlib.h"

enum Type {enum_INT,enum_CHAR}; //字段可用类型

struct Createfieldsdef{ /*create语句中的字段定义*/
	char *field; //字段名称
	enum Type type; //字段类型
	int length; //字段长度
	struct Createfieldsdef *next_fdef; //下一字段
};

struct Createstruct{ /*create语法树根节点*/
	char *table; //基本表名称
	struct Createfieldsdef *fdef; //字段定义
};
struct Col_type{
	enum Type col_type;//类型
	int len;//如果是字符串，存储长度
};


//列名的链表
struct Field
{
	char * field;//列的名称
	struct Field * next_field;//指向下一个列
};

//值的链表
struct Value
{
	char * value;//值的内容
	struct Value * next_value;//指向下一个值
};

//汇总插入的数据列名和内容
struct Insertvalues
{
	struct Value * value;//列的名称
	struct Field * field;//插入的值
};

char * type_to_string(enum Type type);
int createTable(char *table, struct Createfieldsdef *cfdef_var, char *dbname);
int createDatabase(char *dbname);
int isDB(char *dbname);
int insertTable(char * table, struct Insertvalues *insert,char * dbname);