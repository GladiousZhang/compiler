%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2023��5��23��
****************************************************************************/
#include "myparser.h"
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section
//������������ʽ
char	[a-zA-Z_]
digit	[0-9]
digits	{digit}+
optional_fraction	("."{digits})?
optional_exponent	(E[+-]?{digits})?

// place any declarations here

%%

/////////////////////////////////////////////////////////////////////////////
// rules section
//�ʷ���������ʽ
"(" |
")" |
"," |
"+" |
"-" |
"*" |
"/" |
"." |
";" {return yytext[0];}
CREATE	{
	//printf("ʶ��CREATE\n");
	return CREATE;
	}
DATABASE	{
	//printf("ʶ��DATABASE\n");
	return DATABASE;
	}
SHOW	{
	//printf("ʶ��SHOW");
	return SHOW;
	}
DATABASES	{
	//printf("ʶ��DATABASES\n");
	return DATABASES;
	}
DROP	{
	//printf("ʶ��DROP\n");
	return DROP;
	}
USE	{
	//printf("ʶ��USE\n");
	return USE;
	}
TABLE	{
	//printf("ʶ��TABLE\n");
	return TABLE;
	}
CHAR	{
	//printf("ʶ��CHAR\n");
	return CHAR;
	}
INT	{
	//printf("ʶ��INT\n");
	return INT;
}
TABLES	{
	//printf("ʶ��TABLES\n");
	return TABLES;
}
INSERT	{
	//printf("ʶ��INSERT\n");
	return INSERT;
}
INTO	{
	//printf("ʶ��INTO\n");
	return INTO;
}
VALUES	{
	//printf("ʶ��VALUES\n");
	return VALUES;
}
SELECT	{
	//printf("ʶ��SELECT\n");
	return SELECT;
}
FROM	{
	//printf("ʶ��FROM\n");
	return FROM;
}
WHERE	{
	//printf("ʶ��WHERE\n");
	return WHERE;
}
AND	{
	//printf("ʶ��AND\n");
	return AND;
}
OR	{
	//printf("ʶ��OR\n");
	return OR;
}
DELETE	{
	//printf("ʶ��DELETE\n");
	return DELETE;
}
UPDATE	{
	//printf("ʶ��UPDATE\n");
	return UPDATE;
}
SET	{
	//printf("ʶ��SET\n");
	return SET;
}
{digits} {
	//printf("ʶ��INTEGER\n");
     return INTEGER;}
     
{digits}{optional_fraction}{optional_exponent} {
	//printf("ʶ��FLOAT\n");
     return FLOAT;}
     
{char}({char}|{digit}|_)*	{ 
//printf("ʶ��ID\n");
    return ID;
}

\"[^\"]*\" {
//printf("ʶ��STRING\n");
    return STRING;
}
\'[^\']*\' {
//printf("ʶ��STRING\n");
    return STRING;
}
//"+"|"-"|"*"|"/"|sqrt	{
//	printf("ʶ��OPERATION\n");
//	return OPERATION;
//}

//{digits}{optional_fraction}{optional_exponent}	
//									{
//										printf("ʶ������%s������Ϊ%d\n", yytext, yyleng);
//										return NUMBER;
//									}



// place your Lex rules here
%%

/////////////////////////////////////////////////////////////////////////////
// programs section
/*int main(void)
{
	printf("�ʷ������ɹ������ؼǺ����Ϊ%s\n", yylex());
	system("pause");
	return 0;
}*/