
#include "stdio.h"
#include "stdio.h"
#include "stdlib.h"

enum Type {enum_INT,enum_CHAR}; //�ֶο�������

struct Createfieldsdef{ /*create����е��ֶζ���*/
	char *field; //�ֶ�����
	enum Type type; //�ֶ�����
	int length; //�ֶγ���
	struct Createfieldsdef *next_fdef; //��һ�ֶ�
};

struct Createstruct{ /*create�﷨�����ڵ�*/
	char *table; //����������
	struct Createfieldsdef *fdef; //�ֶζ���
};
struct Col_type{
	enum Type col_type;//����
	int len;//������ַ������洢����
};


//����������
struct Field
{
	char * field;//�е�����
	struct Field * next_field;//ָ����һ����
};

//ֵ������
struct Value
{
	char * value;//ֵ������
	struct Value * next_value;//ָ����һ��ֵ
};

//���ܲ������������������
struct Insertvalues
{
	struct Value * value;//�е�����
	struct Field * field;//�����ֵ
};

//��¼��Ҫ��ѯ������
typedef struct co
{
	char * name;//����������Ϊ*
	struct co * next;//��һ����Ҫ�������
}Column;

//��¼ÿһ�е�����
typedef struct con{
	char * left;//��������ߣ�һ��������
	char * oper;//��������֧�ִ��ڡ����ڡ�С�ڡ����ڵ��ڡ�С�ڵ��ڡ�������
	char * right;//�������ұߣ�ͨ�������ֻ�����
	struct con * next;
}Condition;

char * type_to_string(enum Type type);
int createTable(char *table, struct Createfieldsdef *cfdef_var, char *dbname);
int createDatabase(char *dbname);
int isDB(char *dbname);
int insertTable(char * table, struct Insertvalues *insert,char * dbname);
int selectRow(char *table, Column * col, Condition * con);