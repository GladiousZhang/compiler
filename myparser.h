/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 46 of your 30 day trial period.
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
* myparser.h
* C header file generated from myparser.y.
* 
* Date: 05/28/23
* Time: 20:24:26
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yypars.h>

#ifndef YYSTYPE
union tagYYSTYPE {
#line 19 ".\\myparser.y"

	char * yych; //字面量
	int int_num; //存储整数值
	struct Col_type *c_type;//存储type类型及长度
	struct Createfieldsdef *cfdef_var; //table字段定义
	struct Createstruct *cs_var; //整个create语句


#line 44 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

extern YYSTYPE YYNEAR yylval;

#define ID 257
#define CHAR 258
#define INTEGER 259
#define CREATE 260
#define DATABASE 261
#define FLOAT 262
#define STRING 263
#define SHOW 264
#define DATABASES 265
#define DROP 266
#define USE 267
#define TABLE 268
#define INT 269
#define TABLES 270
#define INSERT 271
#define INTO 272
#define VALUES 273
#define SELECT 274
#define FROM 275
#define WHERE 276
#define DELETE 277
#define UPDATE 278
#define SET 279
#define OPERATOR 280
#define AND 281
#define OR 282
#line 39 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

#line 84 "myparser.h"
#endif
