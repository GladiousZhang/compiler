
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

char * type_to_string(enum Type type);

int createTable(char * table,struct Createfieldsdef * cfdef_var);