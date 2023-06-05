
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

//记录需要查询的列名
struct Column
{
	char * table;//可能会存在table.name的情况
	char * name;//列名，或者为*
	struct co * next;//下一个需要输出的列
};

//记录一串表格名称
struct Table{
	char * table;//表格名
	struct ta * next;//下一个表格名
};

//记录每一列的条件
typedef struct Condition{
	char * table_left;//可能会存在table.name的情况
	char * left;//条件的左边，一般是列名
	char * oper;//操作符，支持大于、等于、小于、大于等于、小于等于、不等于
	char * right;//条件的右边，通常是数字或者列
	char * table_right;//可能会存在table.name的情况
	char * rlt_to_last;//与上一字段的关系，可能为AND可能为OR
	struct con * next;
};

//定义一个表中所有需要信息的结构体
typedef struct inf{
	char * table;//表名
	char * col_name;//列名
	struct Value * value;//值
	struct inf * next;//下一项
}Inf;

char * type_to_string(enum Type type);
int createTable(char *table, struct Createfieldsdef *cfdef_var, char *dbname);
int createDatabase(char *dbname);
int isDB(char *dbname);
int insertTable(char * table, struct Insertvalues *insert,char * dbname);
int selectRow(char * dbname,struct Table *table, struct Column * col, struct Condition * con);