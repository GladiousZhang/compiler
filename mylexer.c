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
* mylexer.c
* C source file generated from mylexer.l.
* 
* Date: 05/30/23
* Time: 18:56:20
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
#include "string.h"
#include "stdlib.h"

#line 52 "mylexer.c"
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
#line 37 ".\\mylexer.l"
return yytext[0];
#line 181 "mylexer.c"
		}
		break;
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		{
#line 43 ".\\mylexer.l"
return OPERATOR;
#line 193 "mylexer.c"
		}
		break;
	case 16:
		{
#line 44 ".\\mylexer.l"

	//printf("识别CREATE\n");
	return CREATE;
	
#line 203 "mylexer.c"
		}
		break;
	case 17:
		{
#line 48 ".\\mylexer.l"

	//printf("识别DATABASE\n");
	return DATABASE;
	
#line 213 "mylexer.c"
		}
		break;
	case 18:
		{
#line 52 ".\\mylexer.l"

	//printf("识别SHOW");
	return SHOW;
	
#line 223 "mylexer.c"
		}
		break;
	case 19:
		{
#line 56 ".\\mylexer.l"

	//printf("识别DATABASES\n");
	return DATABASES;
	
#line 233 "mylexer.c"
		}
		break;
	case 20:
		{
#line 60 ".\\mylexer.l"

	//printf("识别DROP\n");
	return DROP;
	
#line 243 "mylexer.c"
		}
		break;
	case 21:
		{
#line 64 ".\\mylexer.l"

	//printf("识别USE\n");
	return USE;
	
#line 253 "mylexer.c"
		}
		break;
	case 22:
		{
#line 68 ".\\mylexer.l"

	//printf("识别TABLE\n");
	return TABLE;
	
#line 263 "mylexer.c"
		}
		break;
	case 23:
		{
#line 72 ".\\mylexer.l"

	//printf("识别CHAR\n");
	return CHAR;
		
#line 273 "mylexer.c"
		}
		break;
	case 24:
		{
#line 76 ".\\mylexer.l"

	//printf("识别INT\n");
	return INT;

#line 283 "mylexer.c"
		}
		break;
	case 25:
		{
#line 80 ".\\mylexer.l"

	//printf("识别TABLES\n");
	return TABLES;

#line 293 "mylexer.c"
		}
		break;
	case 26:
		{
#line 84 ".\\mylexer.l"

	//printf("识别INSERT\n");
	return INSERT;

#line 303 "mylexer.c"
		}
		break;
	case 27:
		{
#line 88 ".\\mylexer.l"

	//printf("识别INTO\n");
	return INTO;

#line 313 "mylexer.c"
		}
		break;
	case 28:
		{
#line 92 ".\\mylexer.l"

	//printf("识别VALUES\n");
	return VALUES;

#line 323 "mylexer.c"
		}
		break;
	case 29:
		{
#line 96 ".\\mylexer.l"

	//printf("识别SELECT\n");
	return SELECT;

#line 333 "mylexer.c"
		}
		break;
	case 30:
		{
#line 100 ".\\mylexer.l"

	//printf("识别FROM\n");
	return FROM;

#line 343 "mylexer.c"
		}
		break;
	case 31:
		{
#line 104 ".\\mylexer.l"

	//printf("识别WHERE\n");
	return WHERE;

#line 353 "mylexer.c"
		}
		break;
	case 32:
		{
#line 108 ".\\mylexer.l"

	//printf("识别AND\n");
	return AND;

#line 363 "mylexer.c"
		}
		break;
	case 33:
		{
#line 112 ".\\mylexer.l"

	//printf("识别OR\n");
	return OR;

#line 373 "mylexer.c"
		}
		break;
	case 34:
		{
#line 116 ".\\mylexer.l"

	//printf("识别DELETE\n");
	return DELETE;

#line 383 "mylexer.c"
		}
		break;
	case 35:
		{
#line 120 ".\\mylexer.l"

	//printf("识别UPDATE\n");
	return UPDATE;

#line 393 "mylexer.c"
		}
		break;
	case 36:
		{
#line 124 ".\\mylexer.l"

	//printf("识别SET\n");
	return SET;

#line 403 "mylexer.c"
		}
		break;
	case 37:
		{
#line 128 ".\\mylexer.l"

	//printf("识别INTEGER\n");
	 yylval.int_num = atoi(yytext);
     return INTEGER;
#line 413 "mylexer.c"
		}
		break;
#line 132 ".\\mylexer.l"
     
#line 418 "mylexer.c"
	case 38:
		{
#line 133 ".\\mylexer.l"

	//printf("识别FLOAT\n");
     return FLOAT;
#line 425 "mylexer.c"
		}
		break;
#line 136 ".\\mylexer.l"
     
#line 430 "mylexer.c"
	case 39:
		{
#line 137 ".\\mylexer.l"
 
//printf("识别ID\n");
	yylval.yych = _strdup(yytext);
    return ID;

#line 439 "mylexer.c"
		}
		break;
	case 40:
		{
#line 143 ".\\mylexer.l"

//printf("识别STRING\n");
	yylval.yych = _strdup(yytext);
    return STRING;

#line 450 "mylexer.c"
		}
		break;
	case 41:
		{
#line 148 ".\\mylexer.l"

//printf("识别STRING\n");
	yylval.yych = _strdup(yytext);
    return STRING;

#line 461 "mylexer.c"
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

int YYNEAR YYDCDECL yytransitionmax = 296;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 4, 1 },
	{ 55, 35 },
	{ 32, 4 },
	{ 55, 35 },
	{ 33, 5 },
	{ 5, 1 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 14, 1 },
	{ 66, 47 },
	{ 15, 1 },
	{ 16, 1 },
	{ 17, 1 },
	{ 18, 1 },
	{ 44, 23 },
	{ 39, 21 },
	{ 19, 1 },
	{ 67, 47 },
	{ 21, 1 },
	{ 22, 1 },
	{ 50, 28 },
	{ 23, 1 },
	{ 52, 29 },
	{ 51, 28 },
	{ 24, 1 },
	{ 40, 21 },
	{ 47, 26 },
	{ 64, 45 },
	{ 65, 45 },
	{ 48, 26 },
	{ 25, 1 },
	{ 53, 30 },
	{ 0, 34 },
	{ 57, 38 },
	{ 26, 1 },
	{ 27, 1 },
	{ 28, 1 },
	{ 29, 1 },
	{ 30, 1 },
	{ 31, 3 },
	{ 36, 16 },
	{ 66, 47 },
	{ 37, 18 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 44, 23 },
	{ 39, 21 },
	{ 19, 1 },
	{ 67, 47 },
	{ 21, 1 },
	{ 22, 1 },
	{ 50, 28 },
	{ 23, 1 },
	{ 52, 29 },
	{ 51, 28 },
	{ 24, 1 },
	{ 40, 21 },
	{ 47, 26 },
	{ 64, 45 },
	{ 65, 45 },
	{ 48, 26 },
	{ 25, 1 },
	{ 53, 30 },
	{ 0, 34 },
	{ 57, 38 },
	{ 26, 1 },
	{ 27, 1 },
	{ 28, 1 },
	{ 29, 1 },
	{ 30, 1 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 0, 0 },
	{ 58, 39 },
	{ 59, 40 },
	{ 60, 41 },
	{ 61, 42 },
	{ 0, 0 },
	{ 62, 43 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 58, 39 },
	{ 59, 40 },
	{ 60, 41 },
	{ 61, 42 },
	{ 20, 107 },
	{ 62, 43 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 20, 107 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 54, 54 },
	{ 41, 22 },
	{ 63, 44 },
	{ 45, 24 },
	{ 46, 25 },
	{ 42, 22 },
	{ 68, 48 },
	{ 69, 49 },
	{ 70, 50 },
	{ 71, 51 },
	{ 72, 52 },
	{ 73, 53 },
	{ 35, 54 },
	{ 38, 19 },
	{ 74, 58 },
	{ 75, 59 },
	{ 76, 60 },
	{ 77, 61 },
	{ 43, 22 },
	{ 78, 62 },
	{ 79, 63 },
	{ 80, 64 },
	{ 81, 65 },
	{ 82, 66 },
	{ 83, 68 },
	{ 84, 69 },
	{ 85, 70 },
	{ 86, 72 },
	{ 87, 73 },
	{ 88, 75 },
	{ 89, 76 },
	{ 90, 77 },
	{ 91, 80 },
	{ 41, 22 },
	{ 63, 44 },
	{ 45, 24 },
	{ 46, 25 },
	{ 42, 22 },
	{ 68, 48 },
	{ 69, 49 },
	{ 70, 50 },
	{ 71, 51 },
	{ 72, 52 },
	{ 73, 53 },
	{ 35, 54 },
	{ 38, 19 },
	{ 74, 58 },
	{ 75, 59 },
	{ 76, 60 },
	{ 77, 61 },
	{ 43, 22 },
	{ 78, 62 },
	{ 79, 63 },
	{ 80, 64 },
	{ 81, 65 },
	{ 82, 66 },
	{ 83, 68 },
	{ 84, 69 },
	{ 85, 70 },
	{ 86, 72 },
	{ 87, 73 },
	{ 88, 75 },
	{ 89, 76 },
	{ 90, 77 },
	{ 91, 80 },
	{ 92, 82 },
	{ 93, 84 },
	{ 94, 85 },
	{ 95, 86 },
	{ 96, 87 },
	{ 97, 88 },
	{ 98, 89 },
	{ 99, 90 },
	{ 100, 91 },
	{ 101, 92 },
	{ 102, 93 },
	{ 103, 94 },
	{ 104, 95 },
	{ 105, 98 },
	{ 106, 105 },
	{ 107, 106 },
	{ 49, 27 },
	{ 34, 14 },
	{ 0, 0 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 14, 14 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 92, 82 },
	{ 93, 84 },
	{ 94, 85 },
	{ 95, 86 },
	{ 96, 87 },
	{ 97, 88 },
	{ 98, 89 },
	{ 99, 90 },
	{ 100, 91 },
	{ 101, 92 },
	{ 102, 93 },
	{ 103, 94 },
	{ 104, 95 },
	{ 105, 98 },
	{ 106, 105 },
	{ 107, 106 },
	{ 49, 27 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 },
	{ 56, 56 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 107, -32, 0 },
	{ 1, 0, 0 },
	{ 0, -5, 0 },
	{ -4, -30, 0 },
	{ -5, -33, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 2 },
	{ 0, 0, 6 },
	{ 0, 0, 4 },
	{ 0, 0, 3 },
	{ 0, 0, 5 },
	{ 0, 0, 8 },
	{ 0, 0, 7 },
	{ 54, 208, 37 },
	{ 0, 0, 9 },
	{ 0, -4, 12 },
	{ 0, 0, 10 },
	{ 0, -2, 11 },
	{ 107, 107, 39 },
	{ 107, 0, 39 },
	{ 107, -40, 39 },
	{ 107, 108, 39 },
	{ 107, -51, 39 },
	{ 107, 97, 39 },
	{ 107, 94, 39 },
	{ 107, -26, 39 },
	{ 107, 188, 39 },
	{ 107, -43, 39 },
	{ 107, -26, 39 },
	{ 107, -24, 39 },
	{ 0, 0, 13 },
	{ 0, 0, 40 },
	{ 0, 0, 41 },
	{ 54, -20, 0 },
	{ 56, -40, 0 },
	{ 0, 0, 15 },
	{ 0, 0, 14 },
	{ 107, -18, 39 },
	{ 107, 34, 39 },
	{ 107, 31, 39 },
	{ 107, 17, 39 },
	{ 107, 26, 39 },
	{ 107, 25, 39 },
	{ 107, 95, 39 },
	{ 107, -39, 39 },
	{ 107, 0, 33 },
	{ 107, -50, 39 },
	{ 107, 99, 39 },
	{ 107, 113, 39 },
	{ 107, 112, 39 },
	{ 107, 112, 39 },
	{ 107, 106, 39 },
	{ 107, 114, 39 },
	{ 0, 115, 38 },
	{ 56, 0, 0 },
	{ 0, 238, 38 },
	{ 107, 0, 32 },
	{ 107, 104, 39 },
	{ 107, 122, 39 },
	{ 107, 123, 39 },
	{ 107, 120, 39 },
	{ 107, 111, 39 },
	{ 107, 115, 39 },
	{ 107, 124, 39 },
	{ 107, 115, 24 },
	{ 107, 126, 39 },
	{ 107, 0, 36 },
	{ 107, 109, 39 },
	{ 107, 121, 39 },
	{ 107, 133, 39 },
	{ 107, 0, 21 },
	{ 107, 114, 39 },
	{ 107, 118, 39 },
	{ 107, 0, 23 },
	{ 107, 117, 39 },
	{ 107, 136, 39 },
	{ 107, 119, 39 },
	{ 107, 0, 20 },
	{ 107, 0, 30 },
	{ 107, 122, 39 },
	{ 107, 0, 27 },
	{ 107, 170, 39 },
	{ 107, 0, 18 },
	{ 107, 169, 39 },
	{ 107, 155, 39 },
	{ 107, 171, 39 },
	{ 107, 172, 39 },
	{ 107, 173, 39 },
	{ 107, 178, 39 },
	{ 107, 175, 39 },
	{ 107, 161, 39 },
	{ 107, 162, 39 },
	{ 107, 164, 22 },
	{ 107, 179, 39 },
	{ 107, 166, 39 },
	{ 107, 0, 31 },
	{ 107, 0, 16 },
	{ 107, 167, 39 },
	{ 107, 0, 34 },
	{ 107, 0, 26 },
	{ 107, 0, 29 },
	{ 107, 0, 25 },
	{ 107, 0, 35 },
	{ 107, 0, 28 },
	{ 107, 182, 39 },
	{ 107, 169, 17 },
	{ 0, 40, 19 }
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
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 167 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section
/*int main(void)
{
	printf("词法分析成功，返回记号类别为%s\n", yylex());
	system("pause");
	return 0;
}*/

