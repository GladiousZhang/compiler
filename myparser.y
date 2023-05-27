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

}
%nonterm <yych> table field
%nonterm <c_type> type
%nonterm <cfdef_var> fieldsdefinition field_type
%nonterm <cs_var> createtablesql
%term <yych> ID CHAR
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
				isSuccess = createTable($1->table,$1->fdef);
				if(isSuccess == 1){
					printf("Table Created\n");
				}else{
					printf("Fail to Create Table\n");
				}
			 }
			 |selectsql{printf("SELECT\n");}
			 |insertsql{printf("INSERT\n");}
			 |deletesql{printf("DELETE\n");}
			 |updatesql{printf("UPDATE\n");}
			 |showtablesql{printf("SHOW TABLE\n");}
			 |showdatabasessql{printf("SHOW DATABASES\n");}
			 |droptablesql{printf("DROP TABLE\n");}
			 |dropdatabasesql{printf("DROP DATABASE\n");}
			 |usesql{printf("USE\n");}
			 |createdatabase{printf("CREATE DATABASE\n");}
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
						$$=$1;
						$$->next_fdef=$3;
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
	insertsql:INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
			 |INSERT INTO table VALUES '(' insert_values ')'';'
			 ;
			 
	insert_fields:insert_fields ',' field
				 |field
				 ;
	insert_values:insert_values ',' insert_value
				 |insert_value
				 ;
	insert_value: STRING
				|INTEGER
				|FLOAT
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
	usesql:USE basename ';';
	basename:ID;
	//CREATEDATABASE
	createdatabase:CREATE DATABASE basename ';';
	//DROPDATABASE
	dropdatabasesql:DROP DATABASE basename ';';
%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}
