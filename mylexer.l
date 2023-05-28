%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2023年5月23日
****************************************************************************/
#include "myparser.h"
#include "string.h"
#include "stdlib.h"
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section
//辅助定义正规式
char	[a-zA-Z_]
digit	[0-9]
digits	{digit}+
optional_fraction	("."{digits})?
optional_exponent	(E[+-]?{digits})?

// place any declarations here

%%

/////////////////////////////////////////////////////////////////////////////
// rules section
//词法规则正规式
"(" |
")" |
"," |
"+" |
"-" |
"*" |
"/" |
"." |
";" {return yytext[0];}
"=" |
">" |
"<" |
"!=" |
">=" |
"<=" {return OPERATOR;}
CREATE	{
	//printf("识别CREATE\n");
	return CREATE;
	}
DATABASE	{
	//printf("识别DATABASE\n");
	return DATABASE;
	}
SHOW	{
	//printf("识别SHOW");
	return SHOW;
	}
DATABASES	{
	//printf("识别DATABASES\n");
	return DATABASES;
	}
DROP	{
	//printf("识别DROP\n");
	return DROP;
	}
USE	{
	//printf("识别USE\n");
	return USE;
	}
TABLE	{
	//printf("识别TABLE\n");
	return TABLE;
	}
CHAR	{
	//printf("识别CHAR\n");
	return CHAR;
		}
INT	{
	//printf("识别INT\n");
	return INT;
}
TABLES	{
	//printf("识别TABLES\n");
	return TABLES;
}
INSERT	{
	//printf("识别INSERT\n");
	return INSERT;
}
INTO	{
	//printf("识别INTO\n");
	return INTO;
}
VALUES	{
	//printf("识别VALUES\n");
	return VALUES;
}
SELECT	{
	//printf("识别SELECT\n");
	return SELECT;
}
FROM	{
	//printf("识别FROM\n");
	return FROM;
}
WHERE	{
	//printf("识别WHERE\n");
	return WHERE;
}
AND	{
	//printf("识别AND\n");
	return AND;
}
OR	{
	//printf("识别OR\n");
	return OR;
}
DELETE	{
	//printf("识别DELETE\n");
	return DELETE;
}
UPDATE	{
	//printf("识别UPDATE\n");
	return UPDATE;
}
SET	{
	//printf("识别SET\n");
	return SET;
}
{digits} {
	//printf("识别INTEGER\n");
	 yylval.int_num = atoi(yytext);
     return INTEGER;}
     
{digits}{optional_fraction}{optional_exponent} {
	//printf("识别FLOAT\n");
     return FLOAT;}
     
{char}({char}|{digit}|_)*	{ 
//printf("识别ID\n");
	yylval.yych = _strdup(yytext);
    return ID;
}

\"[^\"]*\" {
//printf("识别STRING\n");
    return STRING;
}
\'[^\']*\' {
//printf("识别STRING\n");
    return STRING;
}
//"+"|"-"|"*"|"/"|sqrt	{
//	printf("识别OPERATION\n");
//	return OPERATION;
//}

//{digits}{optional_fraction}{optional_exponent}	
//									{
//										printf("识别数字%s：长度为%d\n", yytext, yyleng);
//										return NUMBER;
//									}



// place your Lex rules here
%%

/////////////////////////////////////////////////////////////////////////////
// programs section
/*int main(void)
{
	printf("词法分析成功，返回记号类别为%s\n", yylex());
	system("pause");
	return 0;
}*/
