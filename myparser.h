/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 53 of your 30 day trial period.
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
* Date: 06/05/23
* Time: 11:22:31
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yypars.h>

#ifndef YYSTYPE
union tagYYSTYPE {
#line 19 ".\\myparser.y"

	char * yych; //������
	int int_num; //�洢����ֵ
	float f_num; //�Ƚϸ�����
	struct Col_type *c_type;//�洢type���ͼ�����
	struct Createfieldsdef *cfdef_var; //table�ֶζ���
	struct Createstruct *cs_var; //����create���
	struct Insertvalues *isrt_vals;//��������
	struct Field *fld;//���������
	struct Value *val;//�����ֵ
	struct Column * col; //ѡ�������
	struct Condition * con; //ѡ�������
	struct Table * tab;//�����������

#line 50 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

extern YYSTYPE YYNEAR yylval;

#define ID 257
#define CHAR 258
#define STRING 259
#define AND 260
#define OR 261
#define OPERATOR 262
#define INTEGER 263
#define FLOAT 264
#define CREATE 265
#define DATABASE 266
#define SHOW 267
#define DATABASES 268
#define DROP 269
#define USE 270
#define TABLE 271
#define INT 272
#define TABLES 273
#define INSERT 274
#define INTO 275
#define VALUES 276
#define SELECT 277
#define FROM 278
#define WHERE 279
#define DELETE 280
#define UPDATE 281
#define SET 282
#line 52 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE int
#endif

#line 90 "myparser.h"
#endif
