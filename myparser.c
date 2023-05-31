/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 48 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* myparser.c
* C source file generated from myparser.y.
* 
* Date: 05/30/23
* Time: 18:56:20
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2023年5月19日
****************************************************************************/

#include "mylexer.h"
#include "stdlib.h"
#include "string.h"
#include "define.h"
char *dbname=NULL;

#line 55 "myparser.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\myparser.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 59 ".\\myparser.y"
return 0;
#line 181 "myparser.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 60 ".\\myparser.y"
return 0;
#line 194 "myparser.c"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 62 ".\\myparser.y"

				//printf("Table name:%s Table field1:%s\n",$1->table,$1->fdef->field);
				int isSuccess = 0;
				isSuccess = createTable(yyattribute(1 - 1).cs_var->table,yyattribute(1 - 1).cs_var->fdef,dbname);
				if(isSuccess == 1){
					printf("\rTable Created\n");
				}else{
					printf("\rFail to Create Table\n");
				}
			 
#line 216 "myparser.c"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 72 ".\\myparser.y"
printf("\rSELECT\n");
#line 229 "myparser.c"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 74 ".\\myparser.y"
printf("\rDELETE\n");
#line 242 "myparser.c"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 75 ".\\myparser.y"
printf("\rUPDATE\n");
#line 255 "myparser.c"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 76 ".\\myparser.y"
printf("\rSHOW TABLE\n");
#line 268 "myparser.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 77 ".\\myparser.y"
printf("\rSHOW DATABASES\n");
#line 281 "myparser.c"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 78 ".\\myparser.y"
printf("DROP TABLE\n");
#line 294 "myparser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 79 ".\\myparser.y"
printf("\rDROP DATABASE\n");
#line 307 "myparser.c"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 80 ".\\myparser.y"

				int isSuccess=isDB(yyattribute(1 - 1).yych);
				if(isSuccess){
					printf("\rUsing %s\n",yyattribute(1 - 1).yych);
					dbname = yyattribute(1 - 1).yych;
				}
				else
					printf("\rFail to Use %s\n",yyattribute(1 - 1).yych);
			 
#line 328 "myparser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 89 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = createDatabase(yyattribute(1 - 1).yych);
				if(isSuccess)
					printf("\rDatabase Created\n");
				else
					printf("\rFail to Create Database\n");
			 
#line 348 "myparser.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 99 ".\\myparser.y"

						yyval.cs_var = (struct Createstruct *)malloc(sizeof(struct Createstruct));
						memset(yyval.cs_var,0,sizeof(struct Createstruct));
						yyval.cs_var->table=yyattribute(3 - 7).yych;
						yyval.cs_var->fdef=yyattribute(5 - 7).cfdef_var;
				  
#line 366 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 105 ".\\myparser.y"

		yyval.yych=yyattribute(1 - 1).yych;
	
#line 381 "myparser.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 108 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						yyval.cfdef_var = yyattribute(1 - 3).cfdef_var;
						struct Createfieldsdef *p=yyval.cfdef_var;
						while(p->next_fdef!=NULL){
							p=p->next_fdef;
						}
						p->next_fdef=yyattribute(3 - 3).cfdef_var;
					
#line 402 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 117 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						
						yyval.cfdef_var=yyattribute(1 - 1).cfdef_var;
					
#line 419 "myparser.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 123 ".\\myparser.y"

		yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
		memset(yyval.cfdef_var,0,sizeof(struct Createfieldsdef));
		yyval.cfdef_var->field = yyattribute(1 - 2).yych;
		yyval.cfdef_var->type = yyattribute(2 - 2).c_type->col_type;
		yyval.cfdef_var->length = yyattribute(2 - 2).c_type->len;
		yyval.cfdef_var->next_fdef=NULL;
	
#line 439 "myparser.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 131 ".\\myparser.y"

		yyval.yych = yyattribute(1 - 1).yych;
	
#line 454 "myparser.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 134 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_CHAR;
			yyval.c_type->len = yyattribute(3 - 4).int_num;
		
#line 471 "myparser.c"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 139 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_INT;
			yyval.c_type->len = 0;
		
#line 488 "myparser.c"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[12];
			yyinitdebug(yya, 12);
#endif
			{
#line 176 ".\\myparser.y"

				yyval.isrt_vals = (struct Insertvalues *)malloc(sizeof(struct Insertvalues));
				yyval.isrt_vals->value = yyattribute(9 - 11).val;
				yyval.isrt_vals->field = yyattribute(5 - 11).fld;
				int isSuccess = insertTable(yyattribute(3 - 11).yych,yyval.isrt_vals,dbname);
				if(isSuccess){
					printf("\rValues Inserted\n");
				}
				else{
					printf("\rFail to Insert Value\n");
				}
				
			 
#line 513 "myparser.c"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[9];
			yyinitdebug(yya, 9);
#endif
			{
#line 189 ".\\myparser.y"

				yyval.isrt_vals = (struct Insertvalues *)malloc(sizeof(struct Insertvalues));
				yyval.isrt_vals->value = yyattribute(6 - 8).val;
				yyval.isrt_vals->field = NULL;
				int isSuccess = insertTable(yyattribute(3 - 8).yych,yyval.isrt_vals,dbname);
				if(isSuccess){
					printf("\rValues Inserted\n");
				}
				else{
					printf("\rFail to Insert Value\n");
				}
				//printf("识别sql\n");
			 
#line 538 "myparser.c"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 204 ".\\myparser.y"

					yyval.fld = (struct Field *)malloc(sizeof(struct Field));
					yyval.fld = yyattribute(1 - 3).fld;
					struct Field *p=yyval.fld;
					while(p->next_field!=NULL){
						p=p->next_field;
					}
					struct Field *q=(struct Field *)malloc(sizeof(struct Field));
					q->field = yyattribute(3 - 3).yych;
					q->next_field = NULL;
					p->next_field=q;
					//printf("识别insert_fields,field\n");
				 
#line 563 "myparser.c"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 217 ".\\myparser.y"

					yyval.fld=(struct Field *)malloc(sizeof(struct Field));
					yyval.fld->field = yyattribute(1 - 1).yych;
					yyval.fld->next_field = NULL;
					//printf("识别field\n");
				 
#line 581 "myparser.c"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 224 ".\\myparser.y"

					yyval.val = yyattribute(1 - 3).val;
					struct Value *p=yyval.val;
					while(p->next_value!=NULL){
						p=p->next_value;
					}
										//printf("找到最后一个\n");
					struct Value *q=(struct Value *)malloc(sizeof(struct Value));
					q->value = yyattribute(3 - 3).yych;
					q->next_value = NULL;
					p->next_value=q;
					//printf("识别insert_values,insert_value");
				 
#line 606 "myparser.c"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 237 ".\\myparser.y"

					yyval.val=(struct Value *)malloc(sizeof(struct Value));
					yyval.val->value = yyattribute(1 - 1).yych;
					yyval.val->next_value = NULL;
					
										//printf("识别insert_value\n");
				 
#line 625 "myparser.c"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 245 ".\\myparser.y"

					yyval.yych = yyattribute(1 - 1).yych;
										//printf("\r识别STRING\n");
				
#line 641 "myparser.c"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 249 ".\\myparser.y"

					int cnt = 1;
					int tmp = yyattribute(1 - 1).int_num;
					while(tmp/=10!=0){
						tmp/=10;
						cnt++;
					}
					yyval.yych=(char *)malloc(cnt+1);
					sprintf(yyval.yych,"%d",yyattribute(1 - 1).int_num);
					printf("识别INTERGER：%s\n",yyval.yych);
				
#line 664 "myparser.c"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 276 ".\\myparser.y"

		yyval.yych= yyattribute(2 - 3).yych;
	
#line 679 "myparser.c"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 281 ".\\myparser.y"

		yyval.yych = yyattribute(3 - 4).yych;
	
#line 694 "myparser.c"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 285 ".\\myparser.y"

		
		dbname = NULL;
	
#line 710 "myparser.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "\'(\'", 40 },
	{ "\')\'", 41 },
	{ "\'*\'", 42 },
	{ "\',\'", 44 },
	{ "\'.\'", 46 },
	{ "\';\'", 59 },
	{ "error", 256 },
	{ "ID", 257 },
	{ "CHAR", 258 },
	{ "STRING", 259 },
	{ "INTEGER", 260 },
	{ "CREATE", 261 },
	{ "DATABASE", 262 },
	{ "FLOAT", 263 },
	{ "SHOW", 264 },
	{ "DATABASES", 265 },
	{ "DROP", 266 },
	{ "USE", 267 },
	{ "TABLE", 268 },
	{ "INT", 269 },
	{ "TABLES", 270 },
	{ "INSERT", 271 },
	{ "INTO", 272 },
	{ "VALUES", 273 },
	{ "SELECT", 274 },
	{ "FROM", 275 },
	{ "WHERE", 276 },
	{ "DELETE", 277 },
	{ "UPDATE", 278 },
	{ "SET", 279 },
	{ "OPERATOR", 280 },
	{ "AND", 281 },
	{ "OR", 282 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: statements",
	"statements: statements statement",
	"statements: statement",
	"statement: createtablesql",
	"statement: selectsql",
	"statement: insertsql",
	"statement: deletesql",
	"statement: updatesql",
	"statement: showtablesql",
	"statement: showdatabasessql",
	"statement: droptablesql",
	"statement: dropdatabasesql",
	"statement: usesql",
	"statement: createdatabasesql",
	"createtablesql: CREATE TABLE table \'(\' fieldsdefinition \')\' \';\'",
	"table: ID",
	"fieldsdefinition: fieldsdefinition \',\' field_type",
	"fieldsdefinition: field_type",
	"field_type: field type",
	"field: ID",
	"type: CHAR \'(\' INTEGER \')\'",
	"type: INT",
	"selectsql: SELECT fields_star FROM tables \';\'",
	"selectsql: SELECT fields_star FROM tables WHERE conditions \';\'",
	"fields_star: table_fields",
	"fields_star: \'*\'",
	"table_fields: table_field",
	"table_fields: table_fields \',\' table_field",
	"table_field: field",
	"table_field: table \'.\' field",
	"tables: table",
	"tables: tables \',\' table",
	"conditions: condition",
	"conditions: \'(\' conditions \')\'",
	"conditions: conditions AND conditions",
	"conditions: conditions OR conditions",
	"condition: comp_left comp_op comp_right",
	"comp_left: table_field",
	"comp_right: table_field",
	"comp_right: INTEGER",
	"comp_right: FLOAT",
	"comp_right: STRING",
	"comp_op: OPERATOR",
	"insertsql: INSERT INTO table \'(\' insert_fields \')\' VALUES \'(\' insert_values \')\' \';\'",
	"insertsql: INSERT INTO table VALUES \'(\' insert_values \')\' \';\'",
	"insert_fields: insert_fields \',\' field",
	"insert_fields: field",
	"insert_values: insert_values \',\' insert_value",
	"insert_values: insert_value",
	"insert_value: STRING",
	"insert_value: INTEGER",
	"deletesql: DELETE FROM table WHERE conditions \';\'",
	"updatesql: UPDATE table SET setinfo WHERE conditions \';\'",
	"setinfo: setinfo \',\' field OPERATOR value",
	"setinfo: field OPERATOR value",
	"value: insert_value",
	"showtablesql: SHOW TABLES \';\'",
	"showdatabasessql: SHOW DATABASES \';\'",
	"droptablesql: DROP TABLE table \';\'",
	"usesql: USE basename \';\'",
	"basename: ID",
	"createdatabasesql: CREATE DATABASE basename \';\'",
	"dropdatabasesql: DROP DATABASE basename \';\'"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 2, 0 },
	{ 1, 1, 1 },
	{ 2, 1, 2 },
	{ 2, 1, 3 },
	{ 2, 1, -1 },
	{ 2, 1, 4 },
	{ 2, 1, 5 },
	{ 2, 1, 6 },
	{ 2, 1, 7 },
	{ 2, 1, 8 },
	{ 2, 1, 9 },
	{ 2, 1, 10 },
	{ 2, 1, 11 },
	{ 3, 7, 12 },
	{ 4, 1, 13 },
	{ 5, 3, 14 },
	{ 5, 1, 15 },
	{ 6, 2, 16 },
	{ 7, 1, 17 },
	{ 8, 4, 18 },
	{ 8, 1, 19 },
	{ 9, 5, -1 },
	{ 9, 7, -1 },
	{ 10, 1, -1 },
	{ 10, 1, -1 },
	{ 11, 1, -1 },
	{ 11, 3, -1 },
	{ 12, 1, -1 },
	{ 12, 3, -1 },
	{ 13, 1, -1 },
	{ 13, 3, -1 },
	{ 14, 1, -1 },
	{ 14, 3, -1 },
	{ 14, 3, -1 },
	{ 14, 3, -1 },
	{ 15, 3, -1 },
	{ 16, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 17, 1, -1 },
	{ 18, 1, -1 },
	{ 19, 11, 20 },
	{ 19, 8, 21 },
	{ 20, 3, 22 },
	{ 20, 1, 23 },
	{ 21, 3, 24 },
	{ 21, 1, 25 },
	{ 22, 1, 26 },
	{ 22, 1, 27 },
	{ 23, 6, -1 },
	{ 24, 7, -1 },
	{ 25, 5, -1 },
	{ 25, 3, -1 },
	{ 26, 1, -1 },
	{ 27, 3, -1 },
	{ 28, 3, -1 },
	{ 29, 4, -1 },
	{ 30, 3, 28 },
	{ 31, 1, -1 },
	{ 32, 4, 29 },
	{ 33, 4, 30 }
};

int YYNEAR YYDCDECL yytokenaction_size = 279;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 18, YYAT_ACCEPT, 0 },
	{ 65, YYAT_SHIFT, 75 },
	{ 49, YYAT_SHIFT, 59 },
	{ 108, YYAT_SHIFT, 126 },
	{ 68, YYAT_SHIFT, 84 },
	{ 99, YYAT_SHIFT, 117 },
	{ 69, YYAT_SHIFT, 86 },
	{ 101, YYAT_SHIFT, 118 },
	{ 101, YYAT_SHIFT, 119 },
	{ 3, YYAT_SHIFT, 26 },
	{ 133, YYAT_SHIFT, 134 },
	{ 101, YYAT_SHIFT, 120 },
	{ 1, YYAT_SHIFT, 22 },
	{ 133, YYAT_SHIFT, 115 },
	{ 2, YYAT_SHIFT, 24 },
	{ 3, YYAT_SHIFT, 27 },
	{ 65, YYAT_SHIFT, 76 },
	{ 69, YYAT_SHIFT, 87 },
	{ 1, YYAT_SHIFT, 23 },
	{ 2, YYAT_SHIFT, 25 },
	{ 134, YYAT_SHIFT, 135 },
	{ 73, YYAT_SHIFT, 91 },
	{ 70, YYAT_SHIFT, 89 },
	{ 99, YYAT_ERROR, 0 },
	{ 73, YYAT_SHIFT, 92 },
	{ 70, YYAT_SHIFT, 90 },
	{ 128, YYAT_SHIFT, 93 },
	{ 128, YYAT_SHIFT, 94 },
	{ 127, YYAT_SHIFT, 132 },
	{ 114, YYAT_SHIFT, 129 },
	{ 112, YYAT_SHIFT, 128 },
	{ 109, YYAT_SHIFT, 127 },
	{ 107, YYAT_SHIFT, 125 },
	{ 104, YYAT_SHIFT, 78 },
	{ 98, YYAT_SHIFT, 116 },
	{ 96, YYAT_SHIFT, 114 },
	{ 92, YYAT_SHIFT, 61 },
	{ 91, YYAT_SHIFT, 112 },
	{ 89, YYAT_SHIFT, 110 },
	{ 86, YYAT_SHIFT, 109 },
	{ 81, YYAT_SHIFT, 102 },
	{ 80, YYAT_SHIFT, 100 },
	{ 75, YYAT_SHIFT, 39 },
	{ 67, YYAT_SHIFT, 83 },
	{ 60, YYAT_SHIFT, 74 },
	{ 53, YYAT_SHIFT, 66 },
	{ 51, YYAT_SHIFT, 32 },
	{ 47, YYAT_SHIFT, 58 },
	{ 46, YYAT_SHIFT, 57 },
	{ 43, YYAT_SHIFT, 56 },
	{ 42, YYAT_SHIFT, 55 },
	{ 40, YYAT_SHIFT, 54 },
	{ 37, YYAT_SHIFT, 52 },
	{ 35, YYAT_SHIFT, 51 },
	{ 33, YYAT_SHIFT, 50 },
	{ 32, YYAT_REDUCE, 15 },
	{ 29, YYAT_SHIFT, 48 },
	{ 26, YYAT_SHIFT, 28 },
	{ 25, YYAT_SHIFT, 45 },
	{ 24, YYAT_SHIFT, 44 },
	{ 7, YYAT_SHIFT, 38 },
	{ 6, YYAT_SHIFT, 31 },
	{ 5, YYAT_SHIFT, 30 },
	{ 0, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 108, YYAT_SHIFT, 103 },
	{ 108, YYAT_SHIFT, 104 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 65, YYAT_SHIFT, 77 },
	{ -1, YYAT_ERROR, 0 },
	{ 49, YYAT_SHIFT, 60 },
	{ 68, YYAT_SHIFT, 85 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 1 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 2 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 3 },
	{ 18, YYAT_SHIFT, 4 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 6 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 18, YYAT_SHIFT, 7 },
	{ 18, YYAT_SHIFT, 8 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 63, 1, YYAT_DEFAULT, 18 },
	{ -250, 1, YYAT_ERROR, 0 },
	{ -251, 1, YYAT_ERROR, 0 },
	{ -253, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 26 },
	{ -210, 1, YYAT_ERROR, 0 },
	{ 19, 1, YYAT_DEFAULT, 51 },
	{ -215, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_DEFAULT, 26 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ -200, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 60 },
	{ -3, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ 9, 1, YYAT_REDUCE, 19 },
	{ 8, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 28 },
	{ 9, 1, YYAT_REDUCE, 24 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ -223, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ -228, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ -9, 1, YYAT_ERROR, 0 },
	{ 9, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 56 },
	{ -11, 1, YYAT_ERROR, 0 },
	{ -12, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 59 },
	{ -38, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ -211, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ -231, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_REDUCE, 61 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_REDUCE, 62 },
	{ 0, 0, YYAT_REDUCE, 58 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 4, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ -43, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -237, 1, YYAT_ERROR, 0 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ -252, 1, YYAT_ERROR, 0 },
	{ -19, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ -20, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ -215, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ -239, 1, YYAT_ERROR, 0 },
	{ -19, 1, YYAT_DEFAULT, 108 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ -21, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ -236, 1, YYAT_ERROR, 0 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ -6, 1, YYAT_DEFAULT, 133 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -25, 1, YYAT_DEFAULT, 108 },
	{ -36, 1, YYAT_DEFAULT, 108 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ -252, 1, YYAT_DEFAULT, 51 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -7, 1, YYAT_DEFAULT, 51 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ -248, 1, YYAT_ERROR, 0 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ -229, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -10, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 45 },
	{ -30, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ 0, 0, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_REDUCE, 52 },
	{ -13, 1, YYAT_ERROR, 0 },
	{ -233, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 44 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_REDUCE, 53 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ -31, 1, YYAT_ERROR, 0 },
	{ -39, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 43 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 63;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 18, 41 },
	{ 18, 20 },
	{ 101, 33 },
	{ 59, 72 },
	{ 125, 105 },
	{ 101, 34 },
	{ 54, 67 },
	{ 18, 12 },
	{ 125, 131 },
	{ 104, 82 },
	{ 101, 122 },
	{ 104, 124 },
	{ 104, 79 },
	{ 104, 80 },
	{ 52, 64 },
	{ 101, 121 },
	{ 59, 73 },
	{ 18, 19 },
	{ 6, 37 },
	{ 6, 35 },
	{ 6, 36 },
	{ 18, 14 },
	{ 18, 13 },
	{ 52, 65 },
	{ 54, 68 },
	{ 18, 15 },
	{ 18, 16 },
	{ 18, 17 },
	{ 18, 9 },
	{ 51, 63 },
	{ 18, 10 },
	{ 18, 21 },
	{ 128, 133 },
	{ 128, 95 },
	{ 51, -1 },
	{ 90, 111 },
	{ 90, 69 },
	{ 56, 70 },
	{ 56, 71 },
	{ 0, 18 },
	{ 0, 11 },
	{ 115, 130 },
	{ 103, 123 },
	{ 92, 113 },
	{ 85, 108 },
	{ 84, 107 },
	{ 83, 106 },
	{ 80, 101 },
	{ 78, 99 },
	{ 77, 98 },
	{ 75, 97 },
	{ 74, 96 },
	{ 69, 88 },
	{ 66, 81 },
	{ 50, 62 },
	{ 38, 53 },
	{ 30, 49 },
	{ 27, 47 },
	{ 26, 46 },
	{ 23, 43 },
	{ 22, 42 },
	{ 8, 40 },
	{ 4, 29 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 38, 18 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 31, -1 },
	{ 0, -1 },
	{ 8, 51 },
	{ 0, -1 },
	{ 57, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -2, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, -1 },
	{ 55, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 27, -1 },
	{ 53, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 52, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 51, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 47, -1 },
	{ 17, 101 },
	{ 10, -1 },
	{ 0, -1 },
	{ -1, -1 },
	{ 0, -1 },
	{ 32, 90 },
	{ 0, -1 },
	{ 0, -1 },
	{ -4, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 39, 104 },
	{ 0, -1 },
	{ 0, -1 },
	{ 44, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 30, 128 },
	{ 46, -1 },
	{ 0, -1 },
	{ 35, 104 },
	{ 34, 104 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 20, 125 },
	{ 38, -1 },
	{ 30, 104 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 36, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -2, -1 },
	{ 0, -1 },
	{ 28, 104 },
	{ -3, 51 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 19, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -18, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 11, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 289 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}

