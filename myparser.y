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
	float f_num; //比较浮点数
	struct Col_type *c_type;//存储type类型及长度
	struct Createfieldsdef *cfdef_var; //table字段定义
	struct Createstruct *cs_var; //整个create语句
	struct Insertvalues *isrt_vals;//插入内容
	struct Field *fld;//插入的列名
	struct Value *val;//插入的值
	struct Column * col; //选择的列名
	struct Condition * con; //选择的条件
	struct Table * tab;//表格名称序列
}
%nonterm <yych> table field createdatabasesql basename usesql insert_value comp_op dropdatabasesql
%nonterm <yych> droptablesql
%nonterm <c_type> type
%nonterm <cfdef_var> fieldsdefinition field_type
%nonterm <cs_var> createtablesql
%nonterm <isrt_vals> insertsql
%nonterm <val> insert_values
%nonterm <fld> insert_fields
%nonterm <col> fields_star table_fields table_field comp_left comp_right
%nonterm <con> condition conditions
%nonterm <tab> tables
%term <yych> ID STRING AND OR OPERATOR
%term <int_num>INTEGER
%term <f_num> FLOAT
%token ID,CREATE,DATABASE,INTEGER,FLOAT
%token SHOW,DATABASES,DROP,USE,TABLE,CHAR
%token INT,TABLES,INSERT,INTO,VALUES,SELECT
%token FROM,WHERE,DELETE,UPDATE,SET
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
	statements:statement
	|statements statement
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
			 |selectsql
			 |insertsql
			 |deletesql{printf("\rDELETE\n");}
			 |updatesql{printf("\rUPDATE\n");}
			 |showtablesql{
			 int isSuccess=showTB(dbname);
				if(!isSuccess){
					printf("Unable to Show Database\n");
				}
			 }
			 |showdatabasessql{
				int isSuccess=showDB();
				if(!isSuccess){
					printf("Unable to Show Database\n");
				}
			 }
			 |droptablesql{
			 int isSuccess=dropTB(dbname,$1);
				if(isSuccess){
					printf("\r%s Dropped\n",$1);
				}
				else
					printf("\rFail to Drop %s\n",$1);
			 }
			 |dropdatabasesql{
			 int isSuccess=dropDB($1);
				if(isSuccess){
					printf("\r%s Dropped\n",$1);
				}
				else
					printf("\rFail to Drop %s\n",$1);
			 }
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
						toLowerCase($3);
						$$->table=$3;
						$$->fdef=$5;
				  };
	table:ID{
	toLowerCase($1);
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
		toLowerCase($1);
		$$->field = $1;
		$$->type = $2->col_type;
		$$->length = $2->len;
		$$->next_fdef=NULL;
	};
	field:ID{
	toLowerCase($1);
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
	selectsql:SELECT fields_star FROM tables ';'{
				int isSuccess = 0;
				isSuccess = selectRow(dbname,$4,$2,NULL);
				if(!isSuccess)
					printf("\rFail to Select\n");
			 }
			 |SELECT fields_star FROM tables WHERE conditions ';'{
				int isSuccess = 0;
				isSuccess = selectRow(dbname,$4,$2,$6);
				if(!isSuccess)
					printf("\rFail to Select\n");
			 }
			 ;
	fields_star:table_fields {
					$$ =$1;
			   }
			   | '*'{
				$$ = (struct Column *)malloc (sizeof(struct Column));
				$$->table = NULL;
				$$->name ="*";
				$$->next = NULL;
			   }
			   ;
	table_fields:table_field {
	$$ = (struct Column *)malloc (sizeof(struct Column));
					$$ = $1;
				}
				| table_fields ',' table_field{
				$$ = (struct Column *)malloc (sizeof(struct Column));
						$$ = $1;
						struct Column *p=$$;
						while(p->next!=NULL){
							p=p->next;
						}
						p->next=$3;
				}
				;
	table_field: field {
					$$ = (struct Column *)malloc (sizeof(struct Column));
					$$->table = NULL;
					$$->name = $1;
					$$->next = NULL;
			   }
			   | table'.'field{
			   $$ = (struct Column *)malloc (sizeof(struct Column));
					$$->table = $1;
					$$->name = $3;
					$$->next = NULL;
			   }
			   ;
	tables:table{
			$$ = (struct Table *)malloc(sizeof(struct Table));
			$$->table = $1;
			$$->next = NULL;
		  }
		  |tables ',' table{
		  $$ = (struct Table *)malloc(sizeof(struct Table));
			$$ = $1;
						struct Table *p=$$;
						while(p->next!=NULL){
							p=p->next;
						}
						struct Table *q= (struct Table *)malloc(sizeof(struct Table));
						q->table =$3;
						q->next=NULL;
						p->next=q;
		  }
		  ;
	conditions: condition{
	$$ =$1;
	} 
			  | '('conditions')' {
				$$=$2;
			  }
			  | conditions AND conditions {
			  $$=$1;
			  struct Condition *p=$$;
			  while(p->next!=NULL){
				p=p->next;
			  }
			
			  p->next = $3;
			  $3->rlt_to_last = "and";
			  }
			  | conditions OR conditions{
			  $$=$1;
			  struct Condition *p=$$;
			  while(p->next!=NULL){
				p=p->next;
			  }
			  p->next = $3;
			  $3->rlt_to_last = "or";}
			  ;
	condition: comp_left comp_op comp_right{
		$$ = (struct Condition *)malloc(sizeof(struct Condition));
		$$->table_left = $1->table;
		$$->left = $1->name;
		$$->oper = $2;
		$$->table_right = $3->table;
		$$->right = $3->name;
		$$->rlt_to_last="or";
		$$->next=NULL;
	};
	comp_left: table_field{
		$$=$1;
	};
	comp_right:table_field {
		$$=$1;
	}
			  |INTEGER{
			  $$=(struct Column *)malloc(sizeof(struct Column));
			  $$->table =NULL;
			  int cnt=0;
			  int tmp = $1;
					while(tmp/=10!=0){
						tmp/=10;
						cnt++;
					}
					$$->name=(char *)malloc(cnt+1);
					sprintf($$->name,"%d",$1);
			  }
			  |FLOAT{
			  $$=(struct Column *)malloc(sizeof(struct Column));
			  $$->table =NULL;
			  		$$->name=(char *)malloc(10);
					sprintf($$->name,"%f",$1);
			  
			  }
			  |STRING{
				$$=(struct Column *)malloc(sizeof(struct Column));
			  $$->table =NULL;
			  delQuote($1);
			  toLowerCase($1);
			  $$->name=$1;
			  }
			  ;
	comp_op: OPERATOR{
	$$=$1;
	}
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
	toLowerCase($1);
	delQuote($1);
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
					//printf("识别INTERGER：%s\n",$$);
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
	droptablesql: DROP TABLE table ';'{
	toLowerCase($3);
	$$=$3;
	};
	//USE
	usesql:USE basename ';'{
	toLowerCase($2);
		$$= $2;
	};
	basename:ID{
	toLowerCase($1);
	$$=$1;
	};
	//CREATEDATABASE
	createdatabasesql:CREATE DATABASE basename ';'{
		$$ = $3;
	};
	//DROPDATABASE
	dropdatabasesql:DROP DATABASE basename ';'{
	toLowerCase($3);
	$$=$3;
	if(dbname!=NULL&&strcmp($3,dbname)==0)
		dbname = NULL;
	};
%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}
