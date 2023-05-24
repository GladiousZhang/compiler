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
* mylexer.c
* C source file generated from mylexer.l.
* 
* Date: 05/24/23
* Time: 09:18:59
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2023年5月23日
****************************************************************************/
#include "myparser.h"

#line 50 "mylexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\mylexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		{
#line 35 ".\\mylexer.l"
return yytext[0];
#line 179 "mylexer.c"
		}
		break;
	case 10:
		{
#line 36 ".\\mylexer.l"

	//printf("识别CREATE\n");
	return CREATE;
	
#line 189 "mylexer.c"
		}
		break;
	case 11:
		{
#line 40 ".\\mylexer.l"

	//printf("识别DATABASE\n");
	return DATABASE;
	
#line 199 "mylexer.c"
		}
		break;
	case 12:
		{
#line 44 ".\\mylexer.l"

	//printf("识别SHOW");
	return SHOW;
	
#line 209 "mylexer.c"
		}
		break;
	case 13:
		{
#line 48 ".\\mylexer.l"

	//printf("识别DATABASES\n");
	return DATABASES;
	
#line 219 "mylexer.c"
		}
		break;
	case 14:
		{
#line 52 ".\\mylexer.l"

	//printf("识别DROP\n");
	return DROP;
	
#line 229 "mylexer.c"
		}
		break;
	case 15:
		{
#line 56 ".\\mylexer.l"

	//printf("识别USE\n");
	return USE;
	
#line 239 "mylexer.c"
		}
		break;
	case 16:
		{
#line 60 ".\\mylexer.l"

	//printf("识别TABLE\n");
	return TABLE;
	
#line 249 "mylexer.c"
		}
		break;
	case 17:
		{
#line 64 ".\\mylexer.l"

	//printf("识别CHAR\n");
	return CHAR;
	
#line 259 "mylexer.c"
		}
		break;
	case 18:
		{
#line 68 ".\\mylexer.l"

	//printf("识别INT\n");
	return INT;

#line 269 "mylexer.c"
		}
		break;
	case 19:
		{
#line 72 ".\\mylexer.l"

	//printf("识别TABLES\n");
	return TABLES;

#line 279 "mylexer.c"
		}
		break;
	case 20:
		{
#line 76 ".\\mylexer.l"

	//printf("识别INSERT\n");
	return INSERT;

#line 289 "mylexer.c"
		}
		break;
	case 21:
		{
#line 80 ".\\mylexer.l"

	//printf("识别INTO\n");
	return INTO;

#line 299 "mylexer.c"
		}
		break;
	case 22:
		{
#line 84 ".\\mylexer.l"

	//printf("识别VALUES\n");
	return VALUES;

#line 309 "mylexer.c"
		}
		break;
	case 23:
		{
#line 88 ".\\mylexer.l"

	//printf("识别SELECT\n");
	return SELECT;

#line 319 "mylexer.c"
		}
		break;
	case 24:
		{
#line 92 ".\\mylexer.l"

	//printf("识别FROM\n");
	return FROM;

#line 329 "mylexer.c"
		}
		break;
	case 25:
		{
#line 96 ".\\mylexer.l"

	//printf("识别WHERE\n");
	return WHERE;

#line 339 "mylexer.c"
		}
		break;
	case 26:
		{
#line 100 ".\\mylexer.l"

	//printf("识别AND\n");
	return AND;

#line 349 "mylexer.c"
		}
		break;
	case 27:
		{
#line 104 ".\\mylexer.l"

	//printf("识别OR\n");
	return OR;

#line 359 "mylexer.c"
		}
		break;
	case 28:
		{
#line 108 ".\\mylexer.l"

	//printf("识别DELETE\n");
	return DELETE;

#line 369 "mylexer.c"
		}
		break;
	case 29:
		{
#line 112 ".\\mylexer.l"

	//printf("识别UPDATE\n");
	return UPDATE;

#line 379 "mylexer.c"
		}
		break;
	case 30:
		{
#line 116 ".\\mylexer.l"

	//printf("识别SET\n");
	return SET;

#line 389 "mylexer.c"
		}
		break;
	case 31:
		{
#line 120 ".\\mylexer.l"

	//printf("识别INTEGER\n");
     return INTEGER;
#line 398 "mylexer.c"
		}
		break;
#line 123 ".\\mylexer.l"
     
#line 403 "mylexer.c"
	case 32:
		{
#line 124 ".\\mylexer.l"

	//printf("识别FLOAT\n");
     return FLOAT;
#line 410 "mylexer.c"
		}
		break;
#line 127 ".\\mylexer.l"
     
#line 415 "mylexer.c"
	case 33:
		{
#line 128 ".\\mylexer.l"
 
//printf("识别ID\n");
    return ID;

#line 423 "mylexer.c"
		}
		break;
	case 34:
		{
#line 133 ".\\mylexer.l"

//printf("识别STRING\n");
    return STRING;

#line 433 "mylexer.c"
		}
		break;
	case 35:
		{
#line 137 ".\\mylexer.l"

//printf("识别STRING\n");
    return STRING;

#line 443 "mylexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 292;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 48, 30 },
	{ 27, 3 },
	{ 48, 30 },
	{ 28, 4 },
	{ 4, 1 },
	{ 5, 1 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 13, 1 },
	{ 34, 18 },
	{ 14, 1 },
	{ 43, 24 },
	{ 32, 17 },
	{ 35, 18 },
	{ 44, 24 },
	{ 59, 40 },
	{ 15, 1 },
	{ 40, 22 },
	{ 17, 1 },
	{ 18, 1 },
	{ 41, 22 },
	{ 19, 1 },
	{ 33, 17 },
	{ 60, 40 },
	{ 20, 1 },
	{ 37, 19 },
	{ 36, 18 },
	{ 57, 38 },
	{ 58, 38 },
	{ 45, 25 },
	{ 21, 1 },
	{ 46, 26 },
	{ 0, 29 },
	{ 50, 31 },
	{ 22, 1 },
	{ 23, 1 },
	{ 24, 1 },
	{ 25, 1 },
	{ 26, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 34, 18 },
	{ 0, 0 },
	{ 43, 24 },
	{ 32, 17 },
	{ 35, 18 },
	{ 44, 24 },
	{ 59, 40 },
	{ 15, 1 },
	{ 40, 22 },
	{ 17, 1 },
	{ 18, 1 },
	{ 41, 22 },
	{ 19, 1 },
	{ 33, 17 },
	{ 60, 40 },
	{ 20, 1 },
	{ 37, 19 },
	{ 36, 18 },
	{ 57, 38 },
	{ 58, 38 },
	{ 45, 25 },
	{ 21, 1 },
	{ 46, 26 },
	{ 0, 29 },
	{ 50, 31 },
	{ 22, 1 },
	{ 23, 1 },
	{ 24, 1 },
	{ 25, 1 },
	{ 26, 1 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 0, 0 },
	{ 51, 32 },
	{ 52, 33 },
	{ 53, 34 },
	{ 54, 35 },
	{ 0, 0 },
	{ 55, 36 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 51, 32 },
	{ 52, 33 },
	{ 53, 34 },
	{ 54, 35 },
	{ 16, 100 },
	{ 55, 36 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 16, 100 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 56, 37 },
	{ 38, 20 },
	{ 39, 21 },
	{ 61, 41 },
	{ 62, 42 },
	{ 63, 43 },
	{ 64, 44 },
	{ 65, 45 },
	{ 66, 46 },
	{ 31, 15 },
	{ 67, 51 },
	{ 30, 47 },
	{ 68, 52 },
	{ 69, 53 },
	{ 70, 54 },
	{ 71, 55 },
	{ 72, 56 },
	{ 73, 57 },
	{ 74, 58 },
	{ 75, 59 },
	{ 76, 61 },
	{ 77, 62 },
	{ 78, 63 },
	{ 79, 65 },
	{ 80, 66 },
	{ 81, 68 },
	{ 82, 69 },
	{ 83, 70 },
	{ 84, 73 },
	{ 85, 75 },
	{ 86, 77 },
	{ 87, 78 },
	{ 56, 37 },
	{ 38, 20 },
	{ 39, 21 },
	{ 61, 41 },
	{ 62, 42 },
	{ 63, 43 },
	{ 64, 44 },
	{ 65, 45 },
	{ 66, 46 },
	{ 31, 15 },
	{ 67, 51 },
	{ 30, 47 },
	{ 68, 52 },
	{ 69, 53 },
	{ 70, 54 },
	{ 71, 55 },
	{ 72, 56 },
	{ 73, 57 },
	{ 74, 58 },
	{ 75, 59 },
	{ 76, 61 },
	{ 77, 62 },
	{ 78, 63 },
	{ 79, 65 },
	{ 80, 66 },
	{ 81, 68 },
	{ 82, 69 },
	{ 83, 70 },
	{ 84, 73 },
	{ 85, 75 },
	{ 86, 77 },
	{ 87, 78 },
	{ 88, 79 },
	{ 89, 80 },
	{ 90, 81 },
	{ 91, 82 },
	{ 92, 83 },
	{ 93, 84 },
	{ 94, 85 },
	{ 95, 86 },
	{ 96, 87 },
	{ 97, 88 },
	{ 98, 91 },
	{ 99, 98 },
	{ 100, 99 },
	{ 42, 23 },
	{ 29, 13 },
	{ 0, 0 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 13, 13 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 88, 79 },
	{ 89, 80 },
	{ 90, 81 },
	{ 91, 82 },
	{ 92, 83 },
	{ 93, 84 },
	{ 94, 85 },
	{ 95, 86 },
	{ 96, 87 },
	{ 97, 88 },
	{ 98, 91 },
	{ 99, 98 },
	{ 100, 99 },
	{ 42, 23 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 },
	{ 49, 49 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 100, -33, 0 },
	{ 1, 0, 0 },
	{ -3, -31, 0 },
	{ -4, -34, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 2 },
	{ 0, 0, 6 },
	{ 0, 0, 4 },
	{ 0, 0, 3 },
	{ 0, 0, 5 },
	{ 0, 0, 8 },
	{ 0, 0, 7 },
	{ 47, 204, 31 },
	{ 0, 0, 9 },
	{ 100, 103, 33 },
	{ 100, 0, 33 },
	{ 100, -44, 33 },
	{ 100, -40, 33 },
	{ 100, -41, 33 },
	{ 100, 95, 33 },
	{ 100, 92, 33 },
	{ 100, -36, 33 },
	{ 100, 184, 33 },
	{ 100, -53, 33 },
	{ 100, -20, 33 },
	{ 100, -25, 33 },
	{ 0, 0, 34 },
	{ 0, 0, 35 },
	{ 47, -21, 0 },
	{ 49, -41, 0 },
	{ 100, -19, 33 },
	{ 100, 33, 33 },
	{ 100, 30, 33 },
	{ 100, 16, 33 },
	{ 100, 25, 33 },
	{ 100, 24, 33 },
	{ 100, 93, 33 },
	{ 100, -40, 33 },
	{ 100, 0, 27 },
	{ 100, -45, 33 },
	{ 100, 96, 33 },
	{ 100, 110, 33 },
	{ 100, 109, 33 },
	{ 100, 109, 33 },
	{ 100, 103, 33 },
	{ 100, 111, 33 },
	{ 0, 114, 32 },
	{ 49, 0, 0 },
	{ 0, 234, 32 },
	{ 100, 0, 26 },
	{ 100, 100, 33 },
	{ 100, 119, 33 },
	{ 100, 120, 33 },
	{ 100, 117, 33 },
	{ 100, 107, 33 },
	{ 100, 111, 33 },
	{ 100, 120, 33 },
	{ 100, 111, 18 },
	{ 100, 122, 33 },
	{ 100, 0, 30 },
	{ 100, 105, 33 },
	{ 100, 117, 33 },
	{ 100, 129, 33 },
	{ 100, 0, 15 },
	{ 100, 110, 33 },
	{ 100, 114, 33 },
	{ 100, 0, 17 },
	{ 100, 113, 33 },
	{ 100, 132, 33 },
	{ 100, 115, 33 },
	{ 100, 0, 14 },
	{ 100, 0, 24 },
	{ 100, 118, 33 },
	{ 100, 0, 21 },
	{ 100, 134, 33 },
	{ 100, 0, 12 },
	{ 100, 133, 33 },
	{ 100, 119, 33 },
	{ 100, 167, 33 },
	{ 100, 168, 33 },
	{ 100, 169, 33 },
	{ 100, 174, 33 },
	{ 100, 171, 33 },
	{ 100, 157, 33 },
	{ 100, 158, 33 },
	{ 100, 160, 16 },
	{ 100, 175, 33 },
	{ 100, 162, 33 },
	{ 100, 0, 25 },
	{ 100, 0, 10 },
	{ 100, 163, 33 },
	{ 100, 0, 28 },
	{ 100, 0, 20 },
	{ 100, 0, 23 },
	{ 100, 0, 19 },
	{ 100, 0, 29 },
	{ 100, 0, 22 },
	{ 100, 178, 33 },
	{ 100, 165, 11 },
	{ 0, 39, 13 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 155 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section
/*int main(void)
{
	printf("词法分析成功，返回记号类别为%s\n", yylex());
	system("pause");
	return 0;
}*/

