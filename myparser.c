/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 56 of your 30 day trial period.
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
* Date: 06/08/23
* Time: 10:45:22
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
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 72 ".\\myparser.y"

				//printf("Table name:%s Table field1:%s\n",$1->table,$1->fdef->field);
				int isSuccess = 0;
				isSuccess = createTable(yyattribute(1 - 1).cs_var->table,yyattribute(1 - 1).cs_var->fdef,dbname);
				if(isSuccess == 1){
					printf("\rTable Created\n");
				}else{
					printf("\rFail to Create Table\n");
				}
				
			 
#line 191 "myparser.c"
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
#line 87 ".\\myparser.y"

			 int isSuccess=showTB(dbname);
				if(!isSuccess){
					printf("Unable to Show Database\n");
				}
			 
#line 209 "myparser.c"
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
#line 93 ".\\myparser.y"

				int isSuccess=showDB();
				if(!isSuccess){
					printf("Unable to Show Database\n");
				}
			 
#line 227 "myparser.c"
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
#line 99 ".\\myparser.y"

			 int isSuccess=dropTB(dbname,yyattribute(1 - 1).yych);
				if(isSuccess){
					printf("\r%s Dropped\n",yyattribute(1 - 1).yych);
				}
				else
					printf("\rFail to Drop %s\n",yyattribute(1 - 1).yych);
			 
#line 247 "myparser.c"
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
#line 107 ".\\myparser.y"

			 int isSuccess=dropDB(yyattribute(1 - 1).yych);
				if(isSuccess){
					printf("\r%s Dropped\n",yyattribute(1 - 1).yych);
				}
				else
					printf("\rFail to Drop %s\n",yyattribute(1 - 1).yych);
			 
#line 267 "myparser.c"
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
#line 115 ".\\myparser.y"

				int isSuccess=isDB(yyattribute(1 - 1).yych);
				if(isSuccess){
					printf("\rUsing %s\n",yyattribute(1 - 1).yych);
					dbname = yyattribute(1 - 1).yych;
				}
				else
					printf("\rFail to Use %s\n",yyattribute(1 - 1).yych);
			 
#line 288 "myparser.c"
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
#line 124 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = createDatabase(yyattribute(1 - 1).yych);
				if(isSuccess)
					printf("\rDatabase Created\n");
				else
					printf("\rFail to Create Database\n");
			 
#line 308 "myparser.c"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 134 ".\\myparser.y"

						yyval.cs_var = (struct Createstruct *)malloc(sizeof(struct Createstruct));
						memset(yyval.cs_var,0,sizeof(struct Createstruct));
						toLowerCase(yyattribute(3 - 7).yych);
						yyval.cs_var->table=yyattribute(3 - 7).yych;
						yyval.cs_var->fdef=yyattribute(5 - 7).cfdef_var;
				  
#line 327 "myparser.c"
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
#line 141 ".\\myparser.y"

	toLowerCase(yyattribute(1 - 1).yych);
		yyval.yych=yyattribute(1 - 1).yych;
	
#line 343 "myparser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 145 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						yyval.cfdef_var = yyattribute(1 - 3).cfdef_var;
						struct Createfieldsdef *p=yyval.cfdef_var;
						while(p->next_fdef!=NULL){
							p=p->next_fdef;
						}
						p->next_fdef=yyattribute(3 - 3).cfdef_var;
					
#line 364 "myparser.c"
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
#line 154 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						
						yyval.cfdef_var=yyattribute(1 - 1).cfdef_var;
					
#line 381 "myparser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 160 ".\\myparser.y"

		yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
		memset(yyval.cfdef_var,0,sizeof(struct Createfieldsdef));
		toLowerCase(yyattribute(1 - 2).yych);
		yyval.cfdef_var->field = yyattribute(1 - 2).yych;
		yyval.cfdef_var->type = yyattribute(2 - 2).c_type->col_type;
		yyval.cfdef_var->length = yyattribute(2 - 2).c_type->len;
		yyval.cfdef_var->next_fdef=NULL;
	
#line 402 "myparser.c"
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
#line 169 ".\\myparser.y"

	toLowerCase(yyattribute(1 - 1).yych);
		yyval.yych = yyattribute(1 - 1).yych;
	
#line 418 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 173 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_CHAR;
			yyval.c_type->len = yyattribute(3 - 4).int_num;
		
#line 435 "myparser.c"
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
#line 178 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_INT;
			yyval.c_type->len = 0;
		
#line 452 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 185 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = selectRow(dbname,yyattribute(4 - 5).tab,yyattribute(2 - 5).col,NULL);
				if(!isSuccess)
					printf("\rFail to Select\n");
			 
#line 470 "myparser.c"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 191 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = selectRow(dbname,yyattribute(4 - 7).tab,yyattribute(2 - 7).col,yyattribute(6 - 7).con);
				if(!isSuccess)
					printf("\rFail to Select\n");
			 
#line 488 "myparser.c"
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
#line 198 ".\\myparser.y"

					yyval.col =yyattribute(1 - 1).col;
			   
#line 503 "myparser.c"
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
#line 201 ".\\myparser.y"

				yyval.col = (struct Column *)malloc (sizeof(struct Column));
				yyval.col->table = NULL;
				yyval.col->name ="*";
				yyval.col->next = NULL;
			   
#line 521 "myparser.c"
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
#line 208 ".\\myparser.y"

	yyval.col = (struct Column *)malloc (sizeof(struct Column));
					yyval.col = yyattribute(1 - 1).col;
				
#line 537 "myparser.c"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 212 ".\\myparser.y"

				yyval.col = (struct Column *)malloc (sizeof(struct Column));
						yyval.col = yyattribute(1 - 3).col;
						struct Column *p=yyval.col;
						while(p->next!=NULL){
							p=p->next;
						}
						p->next=yyattribute(3 - 3).col;
				
#line 558 "myparser.c"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 222 ".\\myparser.y"

					yyval.col = (struct Column *)malloc (sizeof(struct Column));
					yyval.col->table = NULL;
					yyval.col->name = yyattribute(1 - 1).yych;
					yyval.col->next = NULL;
			   
#line 576 "myparser.c"
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
#line 228 ".\\myparser.y"

			   yyval.col = (struct Column *)malloc (sizeof(struct Column));
					yyval.col->table = yyattribute(1 - 3).yych;
					yyval.col->name = yyattribute(3 - 3).yych;
					yyval.col->next = NULL;
			   
#line 594 "myparser.c"
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
#line 235 ".\\myparser.y"

			yyval.tab = (struct Table *)malloc(sizeof(struct Table));
			yyval.tab->table = yyattribute(1 - 1).yych;
			yyval.tab->next = NULL;
		  
#line 611 "myparser.c"
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
#line 240 ".\\myparser.y"

		  yyval.tab = (struct Table *)malloc(sizeof(struct Table));
			yyval.tab = yyattribute(1 - 3).tab;
						struct Table *p=yyval.tab;
						while(p->next!=NULL){
							p=p->next;
						}
						struct Table *q= (struct Table *)malloc(sizeof(struct Table));
						q->table =yyattribute(3 - 3).yych;
						q->next=NULL;
						p->next=q;
		  
#line 635 "myparser.c"
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
#line 253 ".\\myparser.y"

	yyval.con =yyattribute(1 - 1).con;
	
#line 650 "myparser.c"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 256 ".\\myparser.y"

				yyval.con=yyattribute(2 - 3).con;
			  
#line 665 "myparser.c"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 259 ".\\myparser.y"

			  yyval.con=yyattribute(1 - 3).con;
			  struct Condition *p=yyval.con;
			  while(p->next!=NULL){
				p=p->next;
			  }
			
			  p->next = yyattribute(3 - 3).con;
			  yyattribute(3 - 3).con->rlt_to_last = "and";
			  
#line 687 "myparser.c"
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
#line 269 ".\\myparser.y"

			  yyval.con=yyattribute(1 - 3).con;
			  struct Condition *p=yyval.con;
			  while(p->next!=NULL){
				p=p->next;
			  }
			  p->next = yyattribute(3 - 3).con;
			  yyattribute(3 - 3).con->rlt_to_last = "or";
#line 707 "myparser.c"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 278 ".\\myparser.y"

		yyval.con = (struct Condition *)malloc(sizeof(struct Condition));
		yyval.con->table_left = yyattribute(1 - 3).col->table;
		yyval.con->left = yyattribute(1 - 3).col->name;
		yyval.con->oper = yyattribute(2 - 3).yych;
		yyval.con->table_right = yyattribute(3 - 3).col->table;
		yyval.con->right = yyattribute(3 - 3).col->name;
		yyval.con->rlt_to_last="or";
		yyval.con->next=NULL;
	
#line 729 "myparser.c"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 288 ".\\myparser.y"

		yyval.col=yyattribute(1 - 1).col;
	
#line 744 "myparser.c"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 291 ".\\myparser.y"

		yyval.col=yyattribute(1 - 1).col;
	
#line 759 "myparser.c"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 294 ".\\myparser.y"

			  yyval.col=(struct Column *)malloc(sizeof(struct Column));
			  yyval.col->table =NULL;
			  int cnt=0;
			  int tmp = yyattribute(1 - 1).int_num;
					while(tmp/=10!=0){
						tmp/=10;
						cnt++;
					}
					yyval.col->name=(char *)malloc(cnt+1);
					sprintf(yyval.col->name,"%d",yyattribute(1 - 1).int_num);
			  
#line 783 "myparser.c"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 306 ".\\myparser.y"

			  yyval.col=(struct Column *)malloc(sizeof(struct Column));
			  yyval.col->table =NULL;
			  		yyval.col->name=(char *)malloc(10);
					sprintf(yyval.col->name,"%f",yyattribute(1 - 1).f_num);
			  
			  
#line 802 "myparser.c"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 313 ".\\myparser.y"

				yyval.col=(struct Column *)malloc(sizeof(struct Column));
			  yyval.col->table =NULL;
			  delQuote(yyattribute(1 - 1).yych);
			  toLowerCase(yyattribute(1 - 1).yych);
			  yyval.col->name=yyattribute(1 - 1).yych;
			  
#line 821 "myparser.c"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 321 ".\\myparser.y"

	yyval.yych=yyattribute(1 - 1).yych;
	
#line 836 "myparser.c"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[12];
			yyinitdebug(yya, 12);
#endif
			{
#line 326 ".\\myparser.y"

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
				
			 
#line 861 "myparser.c"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[9];
			yyinitdebug(yya, 9);
#endif
			{
#line 339 ".\\myparser.y"

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
			 
#line 886 "myparser.c"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 354 ".\\myparser.y"

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
				 
#line 911 "myparser.c"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 367 ".\\myparser.y"

					yyval.fld=(struct Field *)malloc(sizeof(struct Field));
					yyval.fld->field = yyattribute(1 - 1).yych;
					yyval.fld->next_field = NULL;
					//printf("识别field\n");
				 
#line 929 "myparser.c"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 374 ".\\myparser.y"

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
				 
#line 954 "myparser.c"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 387 ".\\myparser.y"

					yyval.val=(struct Value *)malloc(sizeof(struct Value));
					yyval.val->value = yyattribute(1 - 1).yych;
					yyval.val->next_value = NULL;
					
										//printf("识别insert_value\n");
				 
#line 973 "myparser.c"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 395 ".\\myparser.y"

	toLowerCase(yyattribute(1 - 1).yych);
	delQuote(yyattribute(1 - 1).yych);
					yyval.yych = yyattribute(1 - 1).yych;
										//printf("\r识别STRING\n");
				
#line 991 "myparser.c"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 401 ".\\myparser.y"

					int cnt = 1;
					int tmp = yyattribute(1 - 1).int_num;
					while(tmp/=10!=0){
						tmp/=10;
						cnt++;
					}
					yyval.yych=(char *)malloc(cnt+1);
					sprintf(yyval.yych,"%d",yyattribute(1 - 1).int_num);
					//printf("识别INTERGER：%s\n",$$);
				
#line 1014 "myparser.c"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 414 ".\\myparser.y"

		toLowerCase(yyattribute(3 - 6).yych);
		int isSuccess=deleteTB(dbname,yyattribute(3 - 6).yych,yyattribute(5 - 6).con);
				if(isSuccess){
					printf("\rData Deleted\n");
				}
				else
					printf("\rFail to Delete\n");
	
#line 1035 "myparser.c"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 424 ".\\myparser.y"

		int isSuccess=updateTB(dbname,yyattribute(2 - 7).yych,yyattribute(4 - 7).sif,yyattribute(6 - 7).con);
				if(isSuccess){
					printf("\rTable Updated\n");
				}
				else
					printf("\rFail to Update\n");
	
#line 1055 "myparser.c"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 432 ".\\myparser.y"

	yyval.sif=yyattribute(1 - 5).sif;
			  struct SetInfo *p=yyval.sif;
			  while(p->next!=NULL){
				p=p->next;
			  }
			  struct SetInfo *q=(struct SetInfo *)malloc(sizeof(struct SetInfo));
			  p->next=q;
			  q->field = yyattribute(3 - 5).yych;
			  q->value = yyattribute(5 - 5).yych;
			  q->next = NULL;
			  
#line 1079 "myparser.c"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 444 ".\\myparser.y"

		   
		   yyval.sif=(struct SetInfo *)malloc(sizeof(struct SetInfo));
		   yyval.sif->field = yyattribute(1 - 3).yych;
		   yyval.sif -> value = yyattribute(3 - 3).yych;
		   yyval.sif->next=NULL;
		   
#line 1098 "myparser.c"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 452 ".\\myparser.y"

		yyval.yych=yyattribute(1 - 1).yych;
	
#line 1113 "myparser.c"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 460 ".\\myparser.y"

	toLowerCase(yyattribute(3 - 4).yych);
	yyval.yych=yyattribute(3 - 4).yych;
	
#line 1129 "myparser.c"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 465 ".\\myparser.y"

	toLowerCase(yyattribute(2 - 3).yych);
		yyval.yych= yyattribute(2 - 3).yych;
	
#line 1145 "myparser.c"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 469 ".\\myparser.y"

	toLowerCase(yyattribute(1 - 1).yych);
	yyval.yych=yyattribute(1 - 1).yych;
	
#line 1161 "myparser.c"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 474 ".\\myparser.y"

		yyval.yych = yyattribute(3 - 4).yych;
	
#line 1176 "myparser.c"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 478 ".\\myparser.y"

	toLowerCase(yyattribute(3 - 4).yych);
	yyval.yych=yyattribute(3 - 4).yych;
	if(dbname!=NULL&&strcmp(yyattribute(3 - 4).yych,dbname)==0)
		dbname = NULL;
	
#line 1194 "myparser.c"
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
	{ "STRING", 258 },
	{ "AND", 259 },
	{ "OR", 260 },
	{ "OPERATOR", 261 },
	{ "INTEGER", 262 },
	{ "FLOAT", 263 },
	{ "CREATE", 264 },
	{ "DATABASE", 265 },
	{ "SHOW", 266 },
	{ "DATABASES", 267 },
	{ "DROP", 268 },
	{ "USE", 269 },
	{ "TABLE", 270 },
	{ "CHAR", 271 },
	{ "INT", 272 },
	{ "TABLES", 273 },
	{ "INSERT", 274 },
	{ "INTO", 275 },
	{ "VALUES", 276 },
	{ "SELECT", 277 },
	{ "FROM", 278 },
	{ "WHERE", 279 },
	{ "DELETE", 280 },
	{ "UPDATE", 281 },
	{ "SET", 282 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: statements",
	"statements: statement",
	"statements: statements statement",
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
	{ 1, 1, -1 },
	{ 1, 2, -1 },
	{ 2, 1, 0 },
	{ 2, 1, -1 },
	{ 2, 1, -1 },
	{ 2, 1, -1 },
	{ 2, 1, -1 },
	{ 2, 1, 1 },
	{ 2, 1, 2 },
	{ 2, 1, 3 },
	{ 2, 1, 4 },
	{ 2, 1, 5 },
	{ 2, 1, 6 },
	{ 3, 7, 7 },
	{ 4, 1, 8 },
	{ 5, 3, 9 },
	{ 5, 1, 10 },
	{ 6, 2, 11 },
	{ 7, 1, 12 },
	{ 8, 4, 13 },
	{ 8, 1, 14 },
	{ 9, 5, 15 },
	{ 9, 7, 16 },
	{ 10, 1, 17 },
	{ 10, 1, 18 },
	{ 11, 1, 19 },
	{ 11, 3, 20 },
	{ 12, 1, 21 },
	{ 12, 3, 22 },
	{ 13, 1, 23 },
	{ 13, 3, 24 },
	{ 14, 1, 25 },
	{ 14, 3, 26 },
	{ 14, 3, 27 },
	{ 14, 3, 28 },
	{ 15, 3, 29 },
	{ 16, 1, 30 },
	{ 17, 1, 31 },
	{ 17, 1, 32 },
	{ 17, 1, 33 },
	{ 17, 1, 34 },
	{ 18, 1, 35 },
	{ 19, 11, 36 },
	{ 19, 8, 37 },
	{ 20, 3, 38 },
	{ 20, 1, 39 },
	{ 21, 3, 40 },
	{ 21, 1, 41 },
	{ 22, 1, 42 },
	{ 22, 1, 43 },
	{ 23, 6, 44 },
	{ 24, 7, 45 },
	{ 25, 5, 46 },
	{ 25, 3, 47 },
	{ 26, 1, 48 },
	{ 27, 3, -1 },
	{ 28, 3, -1 },
	{ 29, 4, 49 },
	{ 30, 3, 50 },
	{ 31, 1, 51 },
	{ 32, 4, 52 },
	{ 33, 4, 53 }
};

int YYNEAR YYDCDECL yytokenaction_size = 282;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 15, YYAT_ACCEPT, 0 },
	{ 64, YYAT_SHIFT, 75 },
	{ 49, YYAT_SHIFT, 59 },
	{ 108, YYAT_SHIFT, 126 },
	{ 68, YYAT_SHIFT, 84 },
	{ 99, YYAT_SHIFT, 117 },
	{ 104, YYAT_SHIFT, 120 },
	{ 2, YYAT_SHIFT, 24 },
	{ 134, YYAT_SHIFT, 135 },
	{ 3, YYAT_SHIFT, 26 },
	{ 104, YYAT_SHIFT, 121 },
	{ 104, YYAT_SHIFT, 122 },
	{ 1, YYAT_SHIFT, 22 },
	{ 2, YYAT_SHIFT, 25 },
	{ 3, YYAT_SHIFT, 27 },
	{ 128, YYAT_SHIFT, 93 },
	{ 64, YYAT_SHIFT, 76 },
	{ 1, YYAT_SHIFT, 23 },
	{ 133, YYAT_SHIFT, 134 },
	{ 128, YYAT_SHIFT, 94 },
	{ 127, YYAT_SHIFT, 132 },
	{ 133, YYAT_SHIFT, 115 },
	{ 73, YYAT_SHIFT, 91 },
	{ 99, YYAT_ERROR, 0 },
	{ 70, YYAT_SHIFT, 89 },
	{ 73, YYAT_SHIFT, 92 },
	{ 114, YYAT_SHIFT, 129 },
	{ 70, YYAT_SHIFT, 90 },
	{ 69, YYAT_SHIFT, 86 },
	{ 69, YYAT_SHIFT, 87 },
	{ 112, YYAT_SHIFT, 128 },
	{ 109, YYAT_SHIFT, 127 },
	{ 107, YYAT_SHIFT, 125 },
	{ 102, YYAT_SHIFT, 78 },
	{ 98, YYAT_SHIFT, 116 },
	{ 96, YYAT_SHIFT, 114 },
	{ 92, YYAT_SHIFT, 61 },
	{ 91, YYAT_SHIFT, 112 },
	{ 89, YYAT_SHIFT, 110 },
	{ 86, YYAT_SHIFT, 109 },
	{ 81, YYAT_SHIFT, 103 },
	{ 79, YYAT_SHIFT, 100 },
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
	{ 36, YYAT_SHIFT, 52 },
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
	{ 108, YYAT_SHIFT, 101 },
	{ 108, YYAT_SHIFT, 102 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
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
	{ -1, YYAT_ERROR, 0 },
	{ 15, YYAT_SHIFT, 1 },
	{ -1, YYAT_ERROR, 0 },
	{ 15, YYAT_SHIFT, 2 },
	{ -1, YYAT_ERROR, 0 },
	{ 15, YYAT_SHIFT, 3 },
	{ 15, YYAT_SHIFT, 4 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 15, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 15, YYAT_SHIFT, 6 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 15, YYAT_SHIFT, 7 },
	{ 15, YYAT_SHIFT, 8 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 63, 1, YYAT_DEFAULT, 15 },
	{ -253, 1, YYAT_ERROR, 0 },
	{ -260, 1, YYAT_ERROR, 0 },
	{ -256, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 26 },
	{ -213, 1, YYAT_ERROR, 0 },
	{ 19, 1, YYAT_DEFAULT, 52 },
	{ -218, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_REDUCE, 8 },
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
	{ -225, 1, YYAT_ERROR, 0 },
	{ 8, 1, YYAT_REDUCE, 24 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ -231, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ -9, 1, YYAT_ERROR, 0 },
	{ 9, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 56 },
	{ -11, 1, YYAT_ERROR, 0 },
	{ -12, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 59 },
	{ -38, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ -211, 1, YYAT_ERROR, 0 },
	{ -234, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_REDUCE, 61 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_REDUCE, 62 },
	{ 0, 0, YYAT_REDUCE, 58 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 4, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ -43, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ 0, 0, YYAT_DEFAULT, 102 },
	{ -218, 1, YYAT_ERROR, 0 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ -243, 1, YYAT_ERROR, 0 },
	{ -17, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ -19, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ -215, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_DEFAULT, 102 },
	{ 0, 0, YYAT_DEFAULT, 102 },
	{ -18, 1, YYAT_DEFAULT, 108 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_DEFAULT, 102 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ -21, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ -239, 1, YYAT_ERROR, 0 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ -6, 1, YYAT_DEFAULT, 133 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -25, 1, YYAT_DEFAULT, 108 },
	{ -36, 1, YYAT_DEFAULT, 108 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ 0, 0, YYAT_DEFAULT, 102 },
	{ -7, 1, YYAT_DEFAULT, 52 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ -252, 1, YYAT_DEFAULT, 52 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ -229, 1, YYAT_ERROR, 0 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ -231, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -10, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 45 },
	{ -33, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_REDUCE, 23 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ 0, 0, YYAT_REDUCE, 34 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ 0, 0, YYAT_REDUCE, 52 },
	{ -21, 1, YYAT_ERROR, 0 },
	{ -243, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 44 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_REDUCE, 53 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ -23, 1, YYAT_ERROR, 0 },
	{ -51, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 43 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 63;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 15, 41 },
	{ 15, 13 },
	{ 104, 33 },
	{ 59, 72 },
	{ 125, 105 },
	{ 104, 34 },
	{ 54, 67 },
	{ 15, 17 },
	{ 125, 131 },
	{ 102, 82 },
	{ 104, 123 },
	{ 102, 119 },
	{ 102, 80 },
	{ 102, 81 },
	{ 51, 63 },
	{ 104, 124 },
	{ 59, 73 },
	{ 15, 14 },
	{ 6, 35 },
	{ 6, 36 },
	{ 6, 37 },
	{ 15, 18 },
	{ 15, 19 },
	{ 51, 64 },
	{ 54, 68 },
	{ 15, 21 },
	{ 15, 20 },
	{ 15, 10 },
	{ 15, 12 },
	{ 52, 65 },
	{ 15, 11 },
	{ 15, 9 },
	{ 128, 133 },
	{ 128, 95 },
	{ 52, -1 },
	{ 90, 111 },
	{ 90, 69 },
	{ 56, 70 },
	{ 56, 71 },
	{ 0, 15 },
	{ 0, 16 },
	{ 115, 130 },
	{ 101, 118 },
	{ 92, 113 },
	{ 85, 108 },
	{ 84, 107 },
	{ 83, 106 },
	{ 81, 104 },
	{ 78, 99 },
	{ 77, 98 },
	{ 75, 97 },
	{ 74, 96 },
	{ 69, 88 },
	{ 66, 79 },
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
	{ 38, 15 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 31, -1 },
	{ 0, -1 },
	{ 8, 52 },
	{ 0, -1 },
	{ 57, -1 },
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
	{ 17, 104 },
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
	{ 39, 102 },
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
	{ 35, 102 },
	{ 34, 102 },
	{ 0, -1 },
	{ 0, -1 },
	{ 29, -1 },
	{ 0, -1 },
	{ 20, 125 },
	{ 38, -1 },
	{ 30, 102 },
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
	{ 28, 102 },
	{ -3, 52 },
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
#line 484 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}

