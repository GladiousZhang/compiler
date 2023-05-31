%{
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
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section
// attribute type
%union{
	char * yych; //字面量
	int int_num; //存储整数值
	struct Col_type *c_type;//存储type类型及长度
	struct Createfieldsdef *cfdef_var; //table字段定义
	struct Createstruct *cs_var; //整个create语句
	struct Insertvalues *isrt_vals;//插入内容
	struct Field *fld;//插入的列名
	struct Value *val;//插入的值

}
%nonterm <yych> table field createdatabasesql basename usesql insert_value 
%nonterm <c_type> type
%nonterm <cfdef_var> fieldsdefinition field_type
%nonterm <cs_var> createtablesql
%nonterm <isrt_vals> insertsql
%nonterm <val> insert_values
%nonterm <fld> insert_fields
%term <yych> ID CHAR STRING
%term <int_num>INTEGER
%token ID,CREATE,DATABASE,INTEGER,FLOAT,STRING
%token SHOW,DATABASES,DROP,USE,TABLE,CHAR
%token INT,TABLES,INSERT,INTO,VALUES,SELECT
%token FROM,WHERE,DELETE,UPDATE,SET,OPERATOR
%token ',',';','(',')','.'
%left AND,OR
%include {
#ifndef YYSTYPE
#define YYSTYPE int
#endif
}

// place any declarations here

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)
	statements:statements statement{return 0;}
			  |statement{return 0;}
			  ;
	statement:createtablesql{
				//printf("Table name:%s Table field1:%s\n",$1->table,$1->fdef->field);
				int isSuccess = 0;
				isSuccess = createTable($1->table,$1->fdef,dbname);
				if(isSuccess == 1){
					printf("\rTable Created\n");
				}else{
					printf("\rFail to Create Table\n");
				}
			 }
			 |selectsql{printf("\rSELECT\n");}
			 |insertsql
			 |deletesql{printf("\rDELETE\n");}
			 |updatesql{printf("\rUPDATE\n");}
			 |showtablesql{printf("\rSHOW TABLE\n");}
			 |showdatabasessql{printf("\rSHOW DATABASES\n");}
			 |droptablesql{printf("DROP TABLE\n");}
			 |dropdatabasesql{printf("\rDROP DATABASE\n");}
			 |usesql{
				int isSuccess=isDB($1);
				if(isSuccess){
					printf("\rUsing %s\n",$1);
					dbname = $1;
				}
				else
					printf("\rFail to Use %s\n",$1);
			 }
			 |createdatabasesql{
				int isSuccess = 0;
				isSuccess = createDatabase($1);
				if(isSuccess)
					printf("\rDatabase Created\n");
				else
					printf("\rFail to Create Database\n");
			 }
			 ;
	//CREATETABLE
	createtablesql:CREATE TABLE table '('fieldsdefinition')'';'{
						$$ = (struct Createstruct *)malloc(sizeof(struct Createstruct));
						memset($$,0,sizeof(struct Createstruct));
						$$->table=$3;
						$$->fdef=$5;
				  };
	table:ID{
		$$=$1;
	};
	fieldsdefinition:fieldsdefinition','field_type{
						$$ = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						$$ = $1;
						struct Createfieldsdef *p=$$;
						while(p->next_fdef!=NULL){
							p=p->next_fdef;
						}
						p->next_fdef=$3;
					}
					|field_type{
						$$ = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
						
						$$=$1;
					}
					;
	field_type:field type{
		$$ = (struct Createfieldsdef *)malloc(sizeof(struct Createfieldsdef));
		memset($$,0,sizeof(struct Createfieldsdef));
		$$->field = $1;
		$$->type = $2->col_type;
		$$->length = $2->len;
		$$->next_fdef=NULL;
	};
	field:ID{
		$$ = $1;
	};
	type:CHAR '('INTEGER')'{
			$$ = (struct Col_type *)malloc(sizeof(struct Col_type));
			$$->col_type = enum_CHAR;
			$$->len = $3;
		}
		|INT{
			$$ = (struct Col_type *)malloc(sizeof(struct Col_type));
			$$->col_type = enum_INT;
			$$->len = 0;
		}
		;
	//SELECT
	selectsql:SELECT fields_star FROM tables ';'
			 |SELECT fields_star FROM tables WHERE conditions ';'
			 ;
	fields_star:table_fields 
			   | '*'
			   ;
	table_fields:table_field 
				| table_fields ',' table_field
				;
	table_field: field 
			   | table'.'field
			   ;
	tables:table
		  |tables ',' table
		  ;
	conditions: condition 
			  | '('conditions')' 
			  | conditions AND conditions 
			  | conditions OR conditions
			  ;
	condition: comp_left comp_op comp_right;
	comp_left: table_field;
	comp_right:table_field 
			  |INTEGER
			  |FLOAT
			  |STRING
			  ;
	comp_op: OPERATOR
		   ;
	//INSERT
	insertsql:INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'{
				$$ = (struct Insertvalues *)malloc(sizeof(struct Insertvalues));
				$$->value = $9;
				$$->field = $5;
				int isSuccess = insertTable($3,$$,dbname);
				if(isSuccess){
					printf("\rValues Inserted\n");
				}
				else{
					printf("\rFail to Insert Value\n");
				}
				
			 }
			 |INSERT INTO table VALUES '(' insert_values ')'';'{
				$$ = (struct Insertvalues *)malloc(sizeof(struct Insertvalues));
				$$->value = $6;
				$$->field = NULL;
				int isSuccess = insertTable($3,$$,dbname);
				if(isSuccess){
					printf("\rValues Inserted\n");
				}
				else{
					printf("\rFail to Insert Value\n");
				}
				//printf("识别sql\n");
			 }
			 ;
			 
	insert_fields:insert_fields ',' field{
					$$ = (struct Field *)malloc(sizeof(struct Field));
					$$ = $1;
					struct Field *p=$$;
					while(p->next_field!=NULL){
						p=p->next_field;
					}
					struct Field *q=(struct Field *)malloc(sizeof(struct Field));
					q->field = $3;
					q->next_field = NULL;
					p->next_field=q;
					//printf("识别insert_fields,field\n");
				 }
				 |field{
					$$=(struct Field *)malloc(sizeof(struct Field));
					$$->field = $1;
					$$->next_field = NULL;
					//printf("识别field\n");
				 }
				 ;
	insert_values:insert_values ',' insert_value{
					$$ = $1;
					struct Value *p=$$;
					while(p->next_value!=NULL){
						p=p->next_value;
					}
										//printf("找到最后一个\n");
					struct Value *q=(struct Value *)malloc(sizeof(struct Value));
					q->value = $3;
					q->next_value = NULL;
					p->next_value=q;
					//printf("识别insert_values,insert_value");
				 }
				 |insert_value{
					$$=(struct Value *)malloc(sizeof(struct Value));
					$$->value = $1;
					$$->next_value = NULL;
					
										//printf("识别insert_value\n");
				 }
				 ;
	insert_value: STRING{
					$$ = $1;
										//printf("\r识别STRING\n");
				}
				|INTEGER{
					int cnt = 1;
					int tmp = $1;
					while(tmp/=10!=0){
						tmp/=10;
						cnt++;
					}
					$$=(char *)malloc(cnt+1);
					sprintf($$,"%d",$1);
					printf("识别INTERGER：%s\n",$$);
				}
				;
	//DELETE
	deletesql:DELETE FROM table WHERE conditions ';';
	//UPDATE
	updatesql:UPDATE table SET setinfo WHERE conditions ';';
	setinfo:setinfo ',' field OPERATOR value
		   |field OPERATOR value
		   ;
	value:insert_value;
	//SHOWTABLE
	showtablesql:SHOW TABLES';';
	//SHOWDATABASES
	showdatabasessql: SHOW DATABASES';';
	//DROPTABLE
	droptablesql: DROP TABLE table ';';
	//USE
	usesql:USE basename ';'{
		$$= $2;
	};
	basename:ID;
	//CREATEDATABASE
	createdatabasesql:CREATE DATABASE basename ';'{
		$$ = $3;
	};
	//DROPDATABASE
	dropdatabasesql:DROP DATABASE basename ';'{
		
		dbname = NULL;
	};
%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}
