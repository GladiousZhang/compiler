/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 45 of your 30 day trial period.
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
* Date: 05/28/23
* Time: 16:27:30
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

Date: 2023Äê5ÔÂ19ÈÕ
****************************************************************************/

#include "mylexer.h"
#include "stdlib.h"
#include "string.h"
#include "define.h"

#line 54 "myparser.c"
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
#line 52 ".\\myparser.y"
return 0;
#line 180 "myparser.c"
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
#line 53 ".\\myparser.y"
return 0;
#line 193 "myparser.c"
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
#line 55 ".\\myparser.y"

				//printf("Table name:%s Table field1:%s\n",$1->table,$1->fdef->field);
				int isSuccess = 0;
				isSuccess = createTable(yyattribute(1 - 1).cs_var->table,yyattribute(1 - 1).cs_var->fdef);
				if(isSuccess == 1){
					printf("Table Created\n");
				}else{
					printf("Fail to Create Table\n");
				}
			 
#line 215 "myparser.c"
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
#line 65 ".\\myparser.y"
printf("SELECT\n");
#line 228 "myparser.c"
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
#line 66 ".\\myparser.y"
printf("INSERT\n");
#line 241 "myparser.c"
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
#line 67 ".\\myparser.y"
printf("DELETE\n");
#line 254 "myparser.c"
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
#line 68 ".\\myparser.y"
printf("UPDATE\n");
#line 267 "myparser.c"
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
#line 69 ".\\myparser.y"
printf("SHOW TABLE\n");
#line 280 "myparser.c"
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
#line 70 ".\\myparser.y"
printf("SHOW DATABASES\n");
#line 293 "myparser.c"
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
#line 71 ".\\myparser.y"
printf("DROP TABLE\n");
#line 306 "myparser.c"
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
#line 72 ".\\myparser.y"
printf("DROP DATABASE\n");
#line 319 "myparser.c"
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
#line 73 ".\\myparser.y"
printf("USE\n");
#line 332 "myparser.c"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 74 ".\\myparser.y"
printf("CREATE DATABASE\n");
#line 345 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 77 ".\\myparser.y"

						yyval.cs_var = (struct Createstruct *)malloc(sizeof(struct Createstruct));
						memset(yyval.cs_var,0,sizeof(struct Createstruct));
						yyval.cs_var->table=yyattribute(3 - 7).yych;
						yyval.cs_var->fdef=yyattribute(5 - 7).cfdef_var;
				  
#line 363 "myparser.c"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 83 ".\\myparser.y"

		yyval.yych=yyattribute(1 - 1).yych;
	
#line 378 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 86 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						yyval.cfdef_var = yyattribute(1 - 3).cfdef_var;
						struct Createfieldsdef *p=yyval.cfdef_var;
						while(p->next_fdef!=NULL){
							p=p->next_fdef;
						}
						p->next_fdef=yyattribute(3 - 3).cfdef_var;
					
#line 399 "myparser.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 95 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						
						yyval.cfdef_var=yyattribute(1 - 1).cfdef_var;
					
#line 416 "myparser.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 101 ".\\myparser.y"

		yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
		memset(yyval.cfdef_var,0,sizeof(struct Createfieldsdef));
		yyval.cfdef_var->field = yyattribute(1 - 2).yych;
		yyval.cfdef_var->type = yyattribute(2 - 2).c_type->col_type;
		yyval.cfdef_var->length = yyattribute(2 - 2).c_type->len;
		yyval.cfdef_var->next_fdef=NULL;
	
#line 436 "myparser.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 109 ".\\myparser.y"

		yyval.yych = yyattribute(1 - 1).yych;
	
#line 451 "myparser.c"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 112 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_CHAR;
			yyval.c_type->len = yyattribute(3 - 4).int_num;
		
#line 468 "myparser.c"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 117 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_INT;
			yyval.c_type->len = 0;
		
#line 485 "myparser.c"
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
	{ "INTEGER", 259 },
	{ "CREATE", 260 },
	{ "DATABASE", 261 },
	{ "FLOAT", 262 },
	{ "STRING", 263 },
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
	"statement: createdatabase",
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
	"insert_value: FLOAT",
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
	"createdatabase: CREATE DATABASE basename \';\'",
	"dropdatabasesql: DROP DATABASE basename \';\'"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 2, 0 },
	{ 1, 1, 1 },
	{ 2, 1, 2 },
	{ 2, 1, 3 },
	{ 2, 1, 4 },
	{ 2, 1, 5 },
	{ 2, 1, 6 },
	{ 2, 1, 7 },
	{ 2, 1, 8 },
	{ 2, 1, 9 },
	{ 2, 1, 10 },
	{ 2, 1, 11 },
	{ 2, 1, 12 },
	{ 3, 7, 13 },
	{ 4, 1, 14 },
	{ 5, 3, 15 },
	{ 5, 1, 16 },
	{ 6, 2, 17 },
	{ 7, 1, 18 },
	{ 8, 4, 19 },
	{ 8, 1, 20 },
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
	{ 19, 11, -1 },
	{ 19, 8, -1 },
	{ 20, 3, -1 },
	{ 20, 1, -1 },
	{ 21, 3, -1 },
	{ 21, 1, -1 },
	{ 22, 1, -1 },
	{ 22, 1, -1 },
	{ 22, 1, -1 },
	{ 23, 6, -1 },
	{ 24, 7, -1 },
	{ 25, 5, -1 },
	{ 25, 3, -1 },
	{ 26, 1, -1 },
	{ 27, 3, -1 },
	{ 28, 3, -1 },
	{ 29, 4, -1 },
	{ 30, 3, -1 },
	{ 31, 1, -1 },
	{ 32, 4, -1 },
	{ 33, 4, -1 }
};

int YYNEAR YYDCDECL yytokenaction_size = 279;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 10, YYAT_ACCEPT, 0 },
	{ 64, YYAT_SHIFT, 75 },
	{ 49, YYAT_SHIFT, 59 },
	{ 109, YYAT_SHIFT, 127 },
	{ 68, YYAT_SHIFT, 84 },
	{ 100, YYAT_SHIFT, 118 },
	{ 70, YYAT_SHIFT, 88 },
	{ 3, YYAT_SHIFT, 26 },
	{ 1, YYAT_SHIFT, 22 },
	{ 129, YYAT_SHIFT, 93 },
	{ 135, YYAT_SHIFT, 136 },
	{ 128, YYAT_SHIFT, 133 },
	{ 129, YYAT_SHIFT, 94 },
	{ 129, YYAT_SHIFT, 95 },
	{ 3, YYAT_SHIFT, 27 },
	{ 1, YYAT_SHIFT, 23 },
	{ 64, YYAT_SHIFT, 76 },
	{ 70, YYAT_SHIFT, 89 },
	{ 102, YYAT_SHIFT, 119 },
	{ 2, YYAT_SHIFT, 24 },
	{ 115, YYAT_SHIFT, 130 },
	{ 102, YYAT_SHIFT, 120 },
	{ 102, YYAT_SHIFT, 121 },
	{ 100, YYAT_ERROR, 0 },
	{ 2, YYAT_SHIFT, 25 },
	{ 134, YYAT_SHIFT, 135 },
	{ 73, YYAT_SHIFT, 91 },
	{ 69, YYAT_SHIFT, 86 },
	{ 134, YYAT_SHIFT, 116 },
	{ 73, YYAT_SHIFT, 92 },
	{ 69, YYAT_SHIFT, 87 },
	{ 113, YYAT_SHIFT, 129 },
	{ 112, YYAT_SHIFT, 128 },
	{ 108, YYAT_SHIFT, 126 },
	{ 105, YYAT_SHIFT, 78 },
	{ 99, YYAT_SHIFT, 117 },
	{ 97, YYAT_SHIFT, 115 },
	{ 92, YYAT_SHIFT, 61 },
	{ 91, YYAT_SHIFT, 113 },
	{ 88, YYAT_SHIFT, 112 },
	{ 86, YYAT_SHIFT, 110 },
	{ 82, YYAT_SHIFT, 103 },
	{ 81, YYAT_SHIFT, 101 },
	{ 75, YYAT_SHIFT, 39 },
	{ 67, YYAT_SHIFT, 83 },
	{ 60, YYAT_SHIFT, 74 },
	{ 53, YYAT_SHIFT, 66 },
	{ 52, YYAT_SHIFT, 32 },
	{ 47, YYAT_SHIFT, 58 },
	{ 46, YYAT_SHIFT, 57 },
	{ 43, YYAT_SHIFT, 56 },
	{ 42, YYAT_SHIFT, 55 },
	{ 40, YYAT_SHIFT, 54 },
	{ 37, YYAT_SHIFT, 52 },
	{ 36, YYAT_SHIFT, 51 },
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
	{ 109, YYAT_SHIFT, 104 },
	{ 109, YYAT_SHIFT, 105 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 64, YYAT_SHIFT, 77 },
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
	{ 10, YYAT_SHIFT, 1 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 10, YYAT_SHIFT, 2 },
	{ -1, YYAT_ERROR, 0 },
	{ 10, YYAT_SHIFT, 3 },
	{ 10, YYAT_SHIFT, 4 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 10, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 10, YYAT_SHIFT, 6 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 10, YYAT_SHIFT, 7 },
	{ 10, YYAT_SHIFT, 8 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 64, 1, YYAT_DEFAULT, 10 },
	{ -253, 1, YYAT_ERROR, 0 },
	{ -246, 1, YYAT_ERROR, 0 },
	{ -254, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 26 },
	{ -209, 1, YYAT_ERROR, 0 },
	{ 20, 1, YYAT_DEFAULT, 52 },
	{ -214, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_DEFAULT, 26 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 1, 1, YYAT_ERROR, 0 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ -199, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 61 },
	{ -2, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ 10, 1, YYAT_REDUCE, 19 },
	{ 9, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ 9, 1, YYAT_REDUCE, 24 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ -227, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ -8, 1, YYAT_ERROR, 0 },
	{ 10, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 58 },
	{ 0, 0, YYAT_REDUCE, 57 },
	{ -10, 1, YYAT_ERROR, 0 },
	{ -11, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 60 },
	{ -38, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ -210, 1, YYAT_ERROR, 0 },
	{ -230, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_REDUCE, 62 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_REDUCE, 63 },
	{ 0, 0, YYAT_REDUCE, 59 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 5, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ -43, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ 0, 0, YYAT_DEFAULT, 105 },
	{ -236, 1, YYAT_ERROR, 0 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ -14, 1, YYAT_ERROR, 0 },
	{ -252, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ -15, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 129 },
	{ -214, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_DEFAULT, 105 },
	{ 0, 0, YYAT_DEFAULT, 105 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ -238, 1, YYAT_ERROR, 0 },
	{ -18, 1, YYAT_DEFAULT, 109 },
	{ 0, 0, YYAT_DEFAULT, 129 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_DEFAULT, 105 },
	{ -19, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ -235, 1, YYAT_ERROR, 0 },
	{ -220, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ -5, 1, YYAT_DEFAULT, 134 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -24, 1, YYAT_DEFAULT, 109 },
	{ -36, 1, YYAT_DEFAULT, 109 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ -241, 1, YYAT_DEFAULT, 52 },
	{ 0, 0, YYAT_REDUCE, 52 },
	{ 0, 0, YYAT_DEFAULT, 105 },
	{ -6, 1, YYAT_DEFAULT, 52 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 56 },
	{ -247, 1, YYAT_ERROR, 0 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -227, 1, YYAT_ERROR, 0 },
	{ -9, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 45 },
	{ -39, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 129 },
	{ 0, 0, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_DEFAULT, 129 },
	{ 0, 0, YYAT_REDUCE, 53 },
	{ -30, 1, YYAT_ERROR, 0 },
	{ -250, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 44 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ -16, 1, YYAT_ERROR, 0 },
	{ -49, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 43 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 63;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 10, 41 },
	{ 10, 9 },
	{ 102, 33 },
	{ 59, 72 },
	{ 126, 107 },
	{ 102, 34 },
	{ 54, 67 },
	{ 10, 18 },
	{ 126, 132 },
	{ 105, 79 },
	{ 102, 122 },
	{ 105, 125 },
	{ 105, 80 },
	{ 105, 81 },
	{ 51, 63 },
	{ 102, 123 },
	{ 59, 73 },
	{ 10, 20 },
	{ 6, 36 },
	{ 6, 37 },
	{ 6, 35 },
	{ 10, 14 },
	{ 10, 15 },
	{ 51, 64 },
	{ 54, 68 },
	{ 10, 17 },
	{ 10, 16 },
	{ 10, 21 },
	{ 10, 11 },
	{ 52, 65 },
	{ 10, 13 },
	{ 10, 12 },
	{ 129, 134 },
	{ 129, 96 },
	{ 52, -1 },
	{ 87, 111 },
	{ 87, 70 },
	{ 56, 69 },
	{ 56, 71 },
	{ 0, 10 },
	{ 0, 19 },
	{ 116, 131 },
	{ 104, 124 },
	{ 92, 114 },
	{ 85, 109 },
	{ 84, 108 },
	{ 83, 106 },
	{ 81, 102 },
	{ 78, 100 },
	{ 77, 99 },
	{ 75, 98 },
	{ 74, 97 },
	{ 70, 90 },
	{ 66, 82 },
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
	{ 38, 10 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 31, -1 },
	{ 0, -1 },
	{ 8, 52 },
	{ 0, -1 },
	{ 57, -1 },
	{ 0, -1 },
	{ -2, -1 },
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
	{ 10, -1 },
	{ 17, 102 },
	{ 0, -1 },
	{ -1, -1 },
	{ 0, -1 },
	{ 32, 87 },
	{ 0, -1 },
	{ 0, -1 },
	{ -4, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 39, 105 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 44, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 30, 129 },
	{ 46, -1 },
	{ 0, -1 },
	{ 35, 105 },
	{ 34, 105 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 20, 126 },
	{ 38, -1 },
	{ 30, 105 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
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
	{ 0, -1 },
	{ -2, -1 },
	{ 0, -1 },
	{ 28, 105 },
	{ -3, 52 },
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
#line 189 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}

