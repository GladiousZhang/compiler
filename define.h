
#include "stdio.h"
#include "stdio.h"
#include "stdlib.h"

enum Type {enum_INT,enum_CHAR}; //�ֶο�������

struct Createfieldsdef{ /*create����е��ֶζ���*/
	char *field; //�ֶ�����
	enum TYPE type; //�ֶ�����
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