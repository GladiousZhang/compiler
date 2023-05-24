/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 41 of your 30 day trial period.
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
* Date: 05/24/23
* Time: 09:18:59
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
#include <ctype.h>

#line 52 "myparser.c"
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
#line 39 ".\\myparser.y"
return 0;
#line 178 "myparser.c"
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
#line 40 ".\\myparser.y"
return 0;
#line 191 "myparser.c"
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
#line 42 ".\\myparser.y"
printf("CREATE TABLE\n");
#line 204 "myparser.c"
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
#line 43 ".\\myparser.y"
printf("SELECT\n");
#line 217 "myparser.c"
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
#line 44 ".\\myparser.y"
printf("INSERT\n");
#line 230 "myparser.c"
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
#line 45 ".\\myparser.y"
printf("DELETE\n");
#line 243 "myparser.c"
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
#line 46 ".\\myparser.y"
printf("UPDATE\n");
#line 256 "myparser.c"
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
#line 47 ".\\myparser.y"
printf("SHOWTABLE\n");
#line 269 "myparser.c"
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
#line 48 ".\\myparser.y"
printf("SHOWDATABASES\n");
#line 282 "myparser.c"
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
#line 49 ".\\myparser.y"
printf("DROPTABLE\n");
#line 295 "myparser.c"
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
#line 50 ".\\myparser.y"
printf("USE\n");
#line 308 "myparser.c"
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
#line 51 ".\\myparser.y"
printf("CREATE DATABASE\n");
#line 321 "myparser.c"
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
	{ "\'!\'", 33 },
	{ "\'(\'", 40 },
	{ "\')\'", 41 },
	{ "\'*\'", 42 },
	{ "\',\'", 44 },
	{ "\'.\'", 46 },
	{ "\';\'", 59 },
	{ "\'<\'", 60 },
	{ "\'=\'", 61 },
	{ "\'>\'", 62 },
	{ "error", 256 },
	{ "ID", 257 },
	{ "CREATE", 258 },
	{ "DATABASE", 259 },
	{ "INTEGER", 260 },
	{ "FLOAT", 261 },
	{ "STRING", 262 },
	{ "SHOW", 263 },
	{ "DATABASES", 264 },
	{ "DROP", 265 },
	{ "USE", 266 },
	{ "TABLE", 267 },
	{ "CHAR", 268 },
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
	{ "AND", 280 },
	{ "OR", 281 },
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
	"statement: dropsql",
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
	"comp_op: \'<\'",
	"comp_op: \'>\'",
	"comp_op: \'=\'",
	"comp_op: \'!\' \'=\'",
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
	"setinfo: setinfo \',\' field \'=\' value",
	"setinfo: field \'=\' value",
	"value: insert_value",
	"showtablesql: SHOW TABLES \';\'",
	"showdatabasessql: SHOW DATABASES \';\'",
	"dropsql: DROP TABLE table \';\'",
	"usesql: USE basename \';\'",
	"basename: ID",
	"createdatabase: CREATE DATABASE basename \';\'"
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
	{ 3, 7, -1 },
	{ 4, 1, -1 },
	{ 5, 3, -1 },
	{ 5, 1, -1 },
	{ 6, 2, -1 },
	{ 7, 1, -1 },
	{ 8, 4, -1 },
	{ 8, 1, -1 },
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
	{ 18, 1, -1 },
	{ 18, 1, -1 },
	{ 18, 1, -1 },
	{ 18, 2, -1 },
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
	{ 32, 4, -1 }
};

int YYNEAR YYDCDECL yytokenaction_size = 279;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 13, YYAT_ACCEPT, 0 },
	{ 60, YYAT_SHIFT, 71 },
	{ 46, YYAT_SHIFT, 55 },
	{ 106, YYAT_SHIFT, 126 },
	{ 63, YYAT_SHIFT, 79 },
	{ 76, YYAT_SHIFT, 97 },
	{ 96, YYAT_SHIFT, 117 },
	{ 1, YYAT_SHIFT, 21 },
	{ 2, YYAT_SHIFT, 23 },
	{ 128, YYAT_SHIFT, 89 },
	{ 128, YYAT_SHIFT, 90 },
	{ 128, YYAT_SHIFT, 91 },
	{ 101, YYAT_SHIFT, 119 },
	{ 101, YYAT_SHIFT, 120 },
	{ 2, YYAT_SHIFT, 24 },
	{ 1, YYAT_SHIFT, 22 },
	{ 60, YYAT_SHIFT, 72 },
	{ 133, YYAT_SHIFT, 134 },
	{ 68, YYAT_SHIFT, 87 },
	{ 65, YYAT_SHIFT, 82 },
	{ 133, YYAT_SHIFT, 115 },
	{ 68, YYAT_SHIFT, 88 },
	{ 65, YYAT_SHIFT, 83 },
	{ 134, YYAT_SHIFT, 135 },
	{ 96, YYAT_ERROR, 0 },
	{ 67, YYAT_SHIFT, 84 },
	{ 67, YYAT_SHIFT, 85 },
	{ 127, YYAT_SHIFT, 132 },
	{ 114, YYAT_SHIFT, 129 },
	{ 112, YYAT_SHIFT, 128 },
	{ 111, YYAT_SHIFT, 127 },
	{ 105, YYAT_SHIFT, 125 },
	{ 76, YYAT_SHIFT, 98 },
	{ 76, YYAT_SHIFT, 99 },
	{ 76, YYAT_SHIFT, 100 },
	{ 104, YYAT_SHIFT, 74 },
	{ 97, YYAT_SHIFT, 118 },
	{ 95, YYAT_SHIFT, 116 },
	{ 92, YYAT_SHIFT, 114 },
	{ 88, YYAT_SHIFT, 58 },
	{ 87, YYAT_SHIFT, 112 },
	{ 84, YYAT_SHIFT, 111 },
	{ 82, YYAT_SHIFT, 109 },
	{ 77, YYAT_SHIFT, 102 },
	{ 71, YYAT_SHIFT, 37 },
	{ 64, YYAT_SHIFT, 81 },
	{ 56, YYAT_SHIFT, 70 },
	{ 50, YYAT_SHIFT, 62 },
	{ 47, YYAT_SHIFT, 30 },
	{ 44, YYAT_SHIFT, 54 },
	{ 41, YYAT_SHIFT, 53 },
	{ 40, YYAT_SHIFT, 52 },
	{ 38, YYAT_SHIFT, 51 },
	{ 35, YYAT_SHIFT, 49 },
	{ 33, YYAT_SHIFT, 48 },
	{ 31, YYAT_SHIFT, 47 },
	{ 30, YYAT_REDUCE, 14 },
	{ 27, YYAT_SHIFT, 45 },
	{ 24, YYAT_SHIFT, 43 },
	{ 23, YYAT_SHIFT, 42 },
	{ 21, YYAT_SHIFT, 26 },
	{ 7, YYAT_SHIFT, 36 },
	{ 6, YYAT_SHIFT, 29 },
	{ 5, YYAT_SHIFT, 28 },
	{ 3, YYAT_SHIFT, 25 },
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
	{ 106, YYAT_SHIFT, 103 },
	{ 106, YYAT_SHIFT, 104 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 60, YYAT_SHIFT, 73 },
	{ -1, YYAT_ERROR, 0 },
	{ 46, YYAT_SHIFT, 56 },
	{ 63, YYAT_SHIFT, 80 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 1 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 2 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 3 },
	{ 13, YYAT_SHIFT, 4 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 6 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 13, YYAT_SHIFT, 7 },
	{ 13, YYAT_SHIFT, 8 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 65, 1, YYAT_DEFAULT, 13 },
	{ -252, 1, YYAT_ERROR, 0 },
	{ -256, 1, YYAT_ERROR, 0 },
	{ -203, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 21 },
	{ -209, 1, YYAT_ERROR, 0 },
	{ 20, 1, YYAT_DEFAULT, 47 },
	{ -214, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 71 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ -197, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 71 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 71 },
	{ 0, 0, YYAT_REDUCE, 62 },
	{ -2, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 71 },
	{ 0, 0, YYAT_REDUCE, 24 },
	{ 10, 1, YYAT_REDUCE, 18 },
	{ 11, 1, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ 8, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ -222, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 71 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ -227, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ -8, 1, YYAT_ERROR, 0 },
	{ 10, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 59 },
	{ 0, 0, YYAT_REDUCE, 58 },
	{ -10, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 61 },
	{ -38, 1, YYAT_ERROR, 0 },
	{ -209, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 88 },
	{ 0, 0, YYAT_DEFAULT, 71 },
	{ -229, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 88 },
	{ 0, 0, YYAT_REDUCE, 63 },
	{ 0, 0, YYAT_DEFAULT, 88 },
	{ 0, 0, YYAT_REDUCE, 60 },
	{ 0, 0, YYAT_DEFAULT, 88 },
	{ 6, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ 0, 0, YYAT_REDUCE, 28 },
	{ -43, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ -16, 1, YYAT_ERROR, 0 },
	{ -22, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -243, 1, YYAT_ERROR, 0 },
	{ -23, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ -213, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -28, 1, YYAT_ERROR, 0 },
	{ -16, 1, YYAT_DEFAULT, 106 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_DEFAULT, 88 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ -17, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 88 },
	{ 1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ -233, 1, YYAT_ERROR, 0 },
	{ -218, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ 0, 0, YYAT_REDUCE, 52 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ -3, 1, YYAT_DEFAULT, 133 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ -22, 1, YYAT_DEFAULT, 106 },
	{ -35, 1, YYAT_DEFAULT, 106 },
	{ -25, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ -248, 1, YYAT_DEFAULT, 47 },
	{ 0, 0, YYAT_REDUCE, 53 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -5, 1, YYAT_DEFAULT, 47 },
	{ -30, 1, YYAT_ERROR, 0 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 56 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ -230, 1, YYAT_ERROR, 0 },
	{ -11, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ -31, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ 0, 0, YYAT_REDUCE, 43 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ 0, 0, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ -14, 1, YYAT_ERROR, 0 },
	{ -251, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 45 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ -24, 1, YYAT_ERROR, 0 },
	{ -36, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 44 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 61;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 13, 39 },
	{ 13, 14 },
	{ 101, 33 },
	{ 55, 69 },
	{ 125, 107 },
	{ 101, 34 },
	{ 51, 64 },
	{ 13, 15 },
	{ 125, 131 },
	{ 104, 78 },
	{ 101, 121 },
	{ 104, 124 },
	{ 104, 75 },
	{ 104, 76 },
	{ 49, 61 },
	{ 101, 122 },
	{ 55, 68 },
	{ 13, 16 },
	{ 6, 35 },
	{ 6, 31 },
	{ 6, 32 },
	{ 13, 10 },
	{ 13, 9 },
	{ 49, 60 },
	{ 51, 63 },
	{ 13, 11 },
	{ 13, 17 },
	{ 13, 18 },
	{ 13, 19 },
	{ 47, 57 },
	{ 13, 20 },
	{ 128, 133 },
	{ 128, 93 },
	{ 115, 130 },
	{ 47, -1 },
	{ 83, 110 },
	{ 83, 67 },
	{ 53, 65 },
	{ 53, 66 },
	{ 0, 13 },
	{ 0, 12 },
	{ 103, 123 },
	{ 88, 113 },
	{ 81, 108 },
	{ 80, 106 },
	{ 79, 105 },
	{ 76, 101 },
	{ 74, 96 },
	{ 73, 95 },
	{ 71, 94 },
	{ 70, 92 },
	{ 67, 86 },
	{ 62, 77 },
	{ 48, 59 },
	{ 36, 50 },
	{ 28, 46 },
	{ 25, 44 },
	{ 22, 41 },
	{ 21, 40 },
	{ 8, 38 },
	{ 4, 27 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 38, 13 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 8, 47 },
	{ 0, -1 },
	{ 55, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -2, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 27, -1 },
	{ 53, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 52, -1 },
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
	{ 50, -1 },
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
	{ 17, 101 },
	{ 46, -1 },
	{ 10, -1 },
	{ 0, -1 },
	{ -1, -1 },
	{ 0, -1 },
	{ 32, 83 },
	{ 0, -1 },
	{ -4, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 38, 104 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 43, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, 128 },
	{ 45, -1 },
	{ 0, -1 },
	{ 34, 104 },
	{ 33, 104 },
	{ 0, -1 },
	{ 28, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 38, -1 },
	{ 30, 104 },
	{ 17, 125 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 35, -1 },
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
	{ 0, -1 },
	{ -2, -1 },
	{ 0, -1 },
	{ 27, 104 },
	{ -3, 47 },
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
	{ 11, -1 },
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
	{ 10, -1 },
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
#line 130 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}

