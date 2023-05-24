%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2023Äê5ÔÂ19ÈÕ
****************************************************************************/

#include "mylexer.h"
#include <ctype.h>
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section
// attribute type
%token ID,CREATE,DATABASE,INTEGER,FLOAT,STRING
%token SHOW,DATABASES,DROP,USE,TABLE,CHAR
%token INT,TABLES,INSERT,INTO,VALUES,SELECT
%token FROM,WHERE,DELETE,UPDATE,SET
%token ',',';','(',')','.'
%token '='
%token '<','>'
%left AND,OR
%left '!'
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
	statement:createtablesql{printf("CREATE TABLE\n");}
			 |selectsql{printf("SELECT\n");}
			 |insertsql{printf("INSERT\n");}
			 |deletesql{printf("DELETE\n");}
			 |updatesql{printf("UPDATE\n");}
			 |showtablesql{printf("SHOWTABLE\n");}
			 |showdatabasessql{printf("SHOWDATABASES\n");}
			 |dropsql{printf("DROPTABLE\n");}
			 |usesql{printf("USE\n");}
			 |createdatabase{printf("CREATE DATABASE\n");}
			 ;
	//CREATETABLE
	createtablesql:CREATE TABLE table '('fieldsdefinition')'';';
	table:ID;
	fieldsdefinition:fieldsdefinition','field_type
					|field_type
					;
	field_type:field type;
	field:ID;
	type:CHAR '('INTEGER')'
		|INT
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
			  ;
	comp_op: '<' 
		   | '>' 
		   | '=' 
		   | '!' '='
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
	setinfo:setinfo ',' field '=' value
		   |field '=' value
		   ;
	value:insert_value;
	//SHOWTABLE
	showtablesql:SHOW TABLES';';
	//SHOWDATABASES
	showdatabasessql: SHOW DATABASES';';
	//DROP
	dropsql: DROP TABLE table ';';
	//USE
	usesql:USE basename ';';
	basename:ID;
	//CREATEDATABASE
	createdatabase:CREATE DATABASE basename ';';
%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	return yyparse();
}
