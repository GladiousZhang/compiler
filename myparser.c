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
* myparser.c
* C source file generated from myparser.y.
* 
* Date: 06/05/23
* Time: 11:22:31
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
#line 69 ".\\myparser.y"

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
#line 82 ".\\myparser.y"
printf("\rDELETE\n");
#line 204 "myparser.c"
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
#line 83 ".\\myparser.y"
printf("\rUPDATE\n");
#line 217 "myparser.c"
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
#line 84 ".\\myparser.y"
printf("\rSHOW TABLE\n");
#line 230 "myparser.c"
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
#line 85 ".\\myparser.y"
printf("\rSHOW DATABASES\n");
#line 243 "myparser.c"
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
#line 86 ".\\myparser.y"
printf("DROP TABLE\n");
#line 256 "myparser.c"
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
#line 87 ".\\myparser.y"
printf("\rDROP DATABASE\n");
#line 269 "myparser.c"
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
#line 88 ".\\myparser.y"

				int isSuccess=isDB(yyattribute(1 - 1).yych);
				if(isSuccess){
					printf("\rUsing %s\n",yyattribute(1 - 1).yych);
					dbname = yyattribute(1 - 1).yych;
				}
				else
					printf("\rFail to Use %s\n",yyattribute(1 - 1).yych);
			 
#line 290 "myparser.c"
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
#line 97 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = createDatabase(yyattribute(1 - 1).yych);
				if(isSuccess)
					printf("\rDatabase Created\n");
				else
					printf("\rFail to Create Database\n");
			 
#line 310 "myparser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 107 ".\\myparser.y"

						yyval.cs_var = (struct Createstruct *)malloc(sizeof(struct Createstruct));
						memset(yyval.cs_var,0,sizeof(struct Createstruct));
						yyval.cs_var->table=yyattribute(3 - 7).yych;
						yyval.cs_var->fdef=yyattribute(5 - 7).cfdef_var;
				  
#line 328 "myparser.c"
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
#line 113 ".\\myparser.y"

		yyval.yych=yyattribute(1 - 1).yych;
	
#line 343 "myparser.c"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 116 ".\\myparser.y"

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
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 125 ".\\myparser.y"

						yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						
						yyval.cfdef_var=yyattribute(1 - 1).cfdef_var;
					
#line 381 "myparser.c"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 131 ".\\myparser.y"

		yyval.cfdef_var = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
		memset(yyval.cfdef_var,0,sizeof(struct Createfieldsdef));
		yyval.cfdef_var->field = yyattribute(1 - 2).yych;
		yyval.cfdef_var->type = yyattribute(2 - 2).c_type->col_type;
		yyval.cfdef_var->length = yyattribute(2 - 2).c_type->len;
		yyval.cfdef_var->next_fdef=NULL;
	
#line 401 "myparser.c"
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
#line 139 ".\\myparser.y"

		yyval.yych = yyattribute(1 - 1).yych;
	
#line 416 "myparser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 142 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_CHAR;
			yyval.c_type->len = yyattribute(3 - 4).int_num;
		
#line 433 "myparser.c"
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
#line 147 ".\\myparser.y"

			yyval.c_type = (struct Col_type *)malloc(sizeof(struct Col_type));
			yyval.c_type->col_type = enum_INT;
			yyval.c_type->len = 0;
		
#line 450 "myparser.c"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[6];
			yyinitdebug(yya, 6);
#endif
			{
#line 154 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = selectRow(dbname,yyattribute(4 - 5).tab,yyattribute(2 - 5).col,NULL);
				if(!isSuccess)
					printf("\rFail to Select\n");
			 
#line 468 "myparser.c"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 160 ".\\myparser.y"

				int isSuccess = 0;
				isSuccess = selectRow(dbname,yyattribute(4 - 7).tab,yyattribute(2 - 7).col,yyattribute(6 - 7).con);
				if(!isSuccess)
					printf("\rFail to Select\n");
			 
#line 486 "myparser.c"
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
#line 167 ".\\myparser.y"

					yyval.col =yyattribute(1 - 1).col;
			   
#line 501 "myparser.c"
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
#line 170 ".\\myparser.y"

				yyval.col = (struct Column *)malloc (sizeof(struct Column));
				yyval.col->table = NULL;
				yyval.col->name ="*";
				yyval.col->next = NULL;
			   
#line 519 "myparser.c"
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
#line 177 ".\\myparser.y"

	yyval.col = (struct Column *)malloc (sizeof(struct Column));
					yyval.col = yyattribute(1 - 1).col;
				
#line 535 "myparser.c"
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
#line 181 ".\\myparser.y"

				yyval.col = (struct Column *)malloc (sizeof(struct Column));
						yyval.col = yyattribute(1 - 3).col;
						struct Column *p=yyval.col;
						while(p->next!=NULL){
							p=p->next;
						}
						p->next=yyattribute(3 - 3).col;
				
#line 556 "myparser.c"
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
#line 191 ".\\myparser.y"

					yyval.col = (struct Column *)malloc (sizeof(struct Column));
					yyval.col->table = NULL;
					yyval.col->name = yyattribute(1 - 1).yych;
					yyval.col->next = NULL;
			   
#line 574 "myparser.c"
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
#line 197 ".\\myparser.y"

			   yyval.col = (struct Column *)malloc (sizeof(struct Column));
					yyval.col->table = yyattribute(1 - 3).yych;
					yyval.col->name = yyattribute(3 - 3).yych;
					yyval.col->next = NULL;
			   
#line 592 "myparser.c"
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
#line 204 ".\\myparser.y"

			yyval.tab = (struct Table *)malloc(sizeof(struct Table));
			yyval.tab->table = yyattribute(1 - 1).yych;
			yyval.tab->next = NULL;
		  
#line 609 "myparser.c"
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
#line 209 ".\\myparser.y"

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
		  
#line 633 "myparser.c"
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
#line 222 ".\\myparser.y"

	yyval.con =yyattribute(1 - 1).con;
	
#line 648 "myparser.c"
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
#line 225 ".\\myparser.y"

				yyval.con=yyattribute(2 - 3).con;
			  
#line 663 "myparser.c"
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
#line 228 ".\\myparser.y"

			  yyval.con=yyattribute(1 - 3).con;
			  struct Condition *p=yyval.con;
			  while(p->next!=NULL){
				p=p->next;
			  }
			
			  p->next = yyattribute(3 - 3).con;
			  yyattribute(3 - 3).con->rlt_to_last = "AND";
			  
#line 685 "myparser.c"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 238 ".\\myparser.y"

			  yyval.con=yyattribute(1 - 3).con;
			  struct Condition *p=yyval.con;
			  while(p->next!=NULL){
				p=p->next;
			  }
			  p->next = yyattribute(3 - 3).con;
			  yyattribute(3 - 3).con->rlt_to_last = "OR";
#line 705 "myparser.c"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 247 ".\\myparser.y"

		yyval.con = (struct Condition *)malloc(sizeof(struct Condition));
		yyval.con->table_left = yyattribute(1 - 3).col->table;
		yyval.con->left = yyattribute(1 - 3).col->name;
		yyval.con->oper = yyattribute(2 - 3).yych;
		yyval.con->table_right = yyattribute(3 - 3).col->table;
		yyval.con->right = yyattribute(3 - 3).col->name;
		yyval.con->rlt_to_last="OR";
		yyval.con->next=NULL;
	
#line 727 "myparser.c"
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
#line 257 ".\\myparser.y"

		yyval.col=yyattribute(1 - 1).col;
	
#line 742 "myparser.c"
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
#line 260 ".\\myparser.y"

		yyval.col=yyattribute(1 - 1).col;
	
#line 757 "myparser.c"
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
#line 263 ".\\myparser.y"

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
			  
#line 781 "myparser.c"
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
#line 275 ".\\myparser.y"

			  yyval.col=(struct Column *)malloc(sizeof(struct Column));
			  yyval.col->table =NULL;
			  		yyval.col->name=(char *)malloc(10);
					sprintf(yyval.col->name,"%f",yyattribute(1 - 1).f_num);
			  
			  
#line 800 "myparser.c"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 282 ".\\myparser.y"

				yyval.col=(struct Column *)malloc(sizeof(struct Column));
			  yyval.col->table =NULL;
			  yyval.col->name=yyattribute(1 - 1).yych;
			  
#line 817 "myparser.c"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 288 ".\\myparser.y"

	yyval.yych=yyattribute(1 - 1).yych;
	
#line 832 "myparser.c"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[12];
			yyinitdebug(yya, 12);
#endif
			{
#line 293 ".\\myparser.y"

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
				
			 
#line 857 "myparser.c"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[9];
			yyinitdebug(yya, 9);
#endif
			{
#line 306 ".\\myparser.y"

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
			 
#line 882 "myparser.c"
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
#line 321 ".\\myparser.y"

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
				 
#line 907 "myparser.c"
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
#line 334 ".\\myparser.y"

					yyval.fld=(struct Field *)malloc(sizeof(struct Field));
					yyval.fld->field = yyattribute(1 - 1).yych;
					yyval.fld->next_field = NULL;
					//printf("识别field\n");
				 
#line 925 "myparser.c"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 341 ".\\myparser.y"

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
				 
#line 950 "myparser.c"
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
#line 354 ".\\myparser.y"

					yyval.val=(struct Value *)malloc(sizeof(struct Value));
					yyval.val->value = yyattribute(1 - 1).yych;
					yyval.val->next_value = NULL;
					
										//printf("识别insert_value\n");
				 
#line 969 "myparser.c"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 362 ".\\myparser.y"

					yyval.yych = yyattribute(1 - 1).yych;
										//printf("\r识别STRING\n");
				
#line 985 "myparser.c"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 366 ".\\myparser.y"

					int cnt = 1;
					int tmp = yyattribute(1 - 1).int_num;
					while(tmp/=10!=0){
						tmp/=10;
						cnt++;
					}
					yyval.yych=(char *)malloc(cnt+1);
					sprintf(yyval.yych,"%d",yyattribute(1 - 1).int_num);
					//printf("识别INTERGER：%s\n",$$);
				
#line 1008 "myparser.c"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 393 ".\\myparser.y"

		yyval.yych= yyattribute(2 - 3).yych;
	
#line 1023 "myparser.c"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 398 ".\\myparser.y"

		yyval.yych = yyattribute(3 - 4).yych;
	
#line 1038 "myparser.c"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[5];
			yyinitdebug(yya, 5);
#endif
			{
#line 402 ".\\myparser.y"

		
		dbname = NULL;
	
#line 1054 "myparser.c"
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
	{ "AND", 260 },
	{ "OR", 261 },
	{ "OPERATOR", 262 },
	{ "INTEGER", 263 },
	{ "FLOAT", 264 },
	{ "CREATE", 265 },
	{ "DATABASE", 266 },
	{ "SHOW", 267 },
	{ "DATABASES", 268 },
	{ "DROP", 269 },
	{ "USE", 270 },
	{ "TABLE", 271 },
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
	{ 2, 1, 1 },
	{ 2, 1, 2 },
	{ 2, 1, 3 },
	{ 2, 1, 4 },
	{ 2, 1, 5 },
	{ 2, 1, 6 },
	{ 2, 1, 7 },
	{ 2, 1, 8 },
	{ 3, 7, 9 },
	{ 4, 1, 10 },
	{ 5, 3, 11 },
	{ 5, 1, 12 },
	{ 6, 2, 13 },
	{ 7, 1, 14 },
	{ 8, 4, 15 },
	{ 8, 1, 16 },
	{ 9, 5, 17 },
	{ 9, 7, 18 },
	{ 10, 1, 19 },
	{ 10, 1, 20 },
	{ 11, 1, 21 },
	{ 11, 3, 22 },
	{ 12, 1, 23 },
	{ 12, 3, 24 },
	{ 13, 1, 25 },
	{ 13, 3, 26 },
	{ 14, 1, 27 },
	{ 14, 3, 28 },
	{ 14, 3, 29 },
	{ 14, 3, 30 },
	{ 15, 3, 31 },
	{ 16, 1, 32 },
	{ 17, 1, 33 },
	{ 17, 1, 34 },
	{ 17, 1, 35 },
	{ 17, 1, 36 },
	{ 18, 1, 37 },
	{ 19, 11, 38 },
	{ 19, 8, 39 },
	{ 20, 3, 40 },
	{ 20, 1, 41 },
	{ 21, 3, 42 },
	{ 21, 1, 43 },
	{ 22, 1, 44 },
	{ 22, 1, 45 },
	{ 23, 6, -1 },
	{ 24, 7, -1 },
	{ 25, 5, -1 },
	{ 25, 3, -1 },
	{ 26, 1, -1 },
	{ 27, 3, -1 },
	{ 28, 3, -1 },
	{ 29, 4, -1 },
	{ 30, 3, 46 },
	{ 31, 1, -1 },
	{ 32, 4, 47 },
	{ 33, 4, 48 }
};

int YYNEAR YYDCDECL yytokenaction_size = 282;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 12, YYAT_ACCEPT, 0 },
	{ 65, YYAT_SHIFT, 75 },
	{ 49, YYAT_SHIFT, 59 },
	{ 106, YYAT_SHIFT, 126 },
	{ 67, YYAT_SHIFT, 83 },
	{ 99, YYAT_SHIFT, 117 },
	{ 71, YYAT_SHIFT, 88 },
	{ 101, YYAT_SHIFT, 118 },
	{ 3, YYAT_SHIFT, 26 },
	{ 2, YYAT_SHIFT, 24 },
	{ 1, YYAT_SHIFT, 22 },
	{ 101, YYAT_SHIFT, 119 },
	{ 101, YYAT_SHIFT, 120 },
	{ 3, YYAT_SHIFT, 27 },
	{ 2, YYAT_SHIFT, 25 },
	{ 1, YYAT_SHIFT, 23 },
	{ 65, YYAT_SHIFT, 76 },
	{ 128, YYAT_SHIFT, 93 },
	{ 134, YYAT_SHIFT, 135 },
	{ 133, YYAT_SHIFT, 134 },
	{ 71, YYAT_SHIFT, 89 },
	{ 128, YYAT_SHIFT, 94 },
	{ 133, YYAT_SHIFT, 115 },
	{ 99, YYAT_ERROR, 0 },
	{ 73, YYAT_SHIFT, 91 },
	{ 69, YYAT_SHIFT, 86 },
	{ 127, YYAT_SHIFT, 132 },
	{ 73, YYAT_SHIFT, 92 },
	{ 69, YYAT_SHIFT, 87 },
	{ 114, YYAT_SHIFT, 129 },
	{ 112, YYAT_SHIFT, 128 },
	{ 111, YYAT_SHIFT, 127 },
	{ 105, YYAT_SHIFT, 125 },
	{ 104, YYAT_SHIFT, 78 },
	{ 98, YYAT_SHIFT, 116 },
	{ 96, YYAT_SHIFT, 114 },
	{ 92, YYAT_SHIFT, 61 },
	{ 91, YYAT_SHIFT, 112 },
	{ 88, YYAT_SHIFT, 111 },
	{ 86, YYAT_SHIFT, 109 },
	{ 82, YYAT_SHIFT, 102 },
	{ 79, YYAT_SHIFT, 100 },
	{ 75, YYAT_SHIFT, 39 },
	{ 68, YYAT_SHIFT, 85 },
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
	{ 34, YYAT_SHIFT, 50 },
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
	{ 106, YYAT_SHIFT, 103 },
	{ 106, YYAT_SHIFT, 104 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 65, YYAT_SHIFT, 77 },
	{ -1, YYAT_ERROR, 0 },
	{ 49, YYAT_SHIFT, 60 },
	{ 67, YYAT_SHIFT, 84 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 1 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 2 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 3 },
	{ 12, YYAT_SHIFT, 4 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 6 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 12, YYAT_SHIFT, 7 },
	{ 12, YYAT_SHIFT, 8 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ 63, 1, YYAT_DEFAULT, 12 },
	{ -256, 1, YYAT_ERROR, 0 },
	{ -259, 1, YYAT_ERROR, 0 },
	{ -258, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 26 },
	{ -213, 1, YYAT_ERROR, 0 },
	{ 19, 1, YYAT_DEFAULT, 51 },
	{ -218, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ 0, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ 0, 0, YYAT_REDUCE, 10 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 3 },
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
	{ 0, 0, YYAT_REDUCE, 28 },
	{ 8, 1, YYAT_ERROR, 0 },
	{ 9, 1, YYAT_REDUCE, 24 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ -226, 1, YYAT_ERROR, 0 },
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
	{ -211, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 75 },
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
	{ 0, 0, YYAT_REDUCE, 27 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ -43, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ -219, 1, YYAT_ERROR, 0 },
	{ -16, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ -252, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ -17, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ -215, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ -19, 1, YYAT_DEFAULT, 106 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ 0, 0, YYAT_DEFAULT, 128 },
	{ -20, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 92 },
	{ -2, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ -239, 1, YYAT_ERROR, 0 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ -6, 1, YYAT_DEFAULT, 133 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -25, 1, YYAT_DEFAULT, 106 },
	{ -36, 1, YYAT_DEFAULT, 106 },
	{ 0, 0, YYAT_REDUCE, 42 },
	{ -252, 1, YYAT_DEFAULT, 51 },
	{ 0, 0, YYAT_REDUCE, 51 },
	{ 0, 0, YYAT_DEFAULT, 104 },
	{ -7, 1, YYAT_DEFAULT, 51 },
	{ -230, 1, YYAT_ERROR, 0 },
	{ -56, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ -232, 1, YYAT_ERROR, 0 },
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
	{ -15, 1, YYAT_ERROR, 0 },
	{ -242, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 44 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_REDUCE, 53 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ -22, 1, YYAT_ERROR, 0 },
	{ -41, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 43 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 63;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 12, 41 },
	{ 12, 21 },
	{ 101, 34 },
	{ 59, 72 },
	{ 125, 108 },
	{ 101, 33 },
	{ 54, 68 },
	{ 12, 11 },
	{ 125, 131 },
	{ 104, 81 },
	{ 101, 122 },
	{ 104, 124 },
	{ 104, 80 },
	{ 104, 79 },
	{ 52, 64 },
	{ 101, 121 },
	{ 59, 73 },
	{ 12, 20 },
	{ 6, 37 },
	{ 6, 35 },
	{ 6, 36 },
	{ 12, 13 },
	{ 12, 9 },
	{ 52, 65 },
	{ 54, 67 },
	{ 12, 14 },
	{ 12, 15 },
	{ 12, 16 },
	{ 12, 19 },
	{ 51, 63 },
	{ 12, 18 },
	{ 12, 17 },
	{ 128, 133 },
	{ 128, 95 },
	{ 51, -1 },
	{ 87, 110 },
	{ 87, 71 },
	{ 56, 69 },
	{ 56, 70 },
	{ 0, 12 },
	{ 0, 10 },
	{ 115, 130 },
	{ 103, 123 },
	{ 92, 113 },
	{ 85, 107 },
	{ 84, 106 },
	{ 83, 105 },
	{ 79, 101 },
	{ 78, 99 },
	{ 77, 98 },
	{ 75, 97 },
	{ 74, 96 },
	{ 71, 90 },
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
	{ 38, 12 },
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
	{ 39, 104 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 44, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 30, 128 },
	{ 46, -1 },
	{ 0, -1 },
	{ 35, 104 },
	{ 34, 104 },
	{ 29, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 39, -1 },
	{ 31, 104 },
	{ 18, 125 },
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
#line 406 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}

