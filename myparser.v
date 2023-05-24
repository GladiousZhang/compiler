#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 41 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 05/24/23
# Time: 09:18:59
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : statements $end

    1  statements : statements statement
    2             | statement

    3  statement : createtablesql
    4            | selectsql
    5            | insertsql
    6            | deletesql
    7            | updatesql
    8            | showtablesql
    9            | showdatabasessql
   10            | dropsql
   11            | usesql
   12            | createdatabase

   13  createtablesql : CREATE TABLE table '(' fieldsdefinition ')' ';'

   14  table : ID

   15  fieldsdefinition : fieldsdefinition ',' field_type
   16                   | field_type

   17  field_type : field type

   18  field : ID

   19  type : CHAR '(' INTEGER ')'
   20       | INT

   21  selectsql : SELECT fields_star FROM tables ';'
   22            | SELECT fields_star FROM tables WHERE conditions ';'

   23  fields_star : table_fields
   24              | '*'

   25  table_fields : table_field
   26               | table_fields ',' table_field

   27  table_field : field
   28              | table '.' field

   29  tables : table
   30         | tables ',' table

   31  conditions : condition
   32             | '(' conditions ')'
   33             | conditions AND conditions
   34             | conditions OR conditions

   35  condition : comp_left comp_op comp_right

   36  comp_left : table_field

   37  comp_right : table_field
   38             | INTEGER
   39             | FLOAT

   40  comp_op : '<'
   41          | '>'
   42          | '='
   43          | '!' '='

   44  insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
   45            | INSERT INTO table VALUES '(' insert_values ')' ';'

   46  insert_fields : insert_fields ',' field
   47                | field

   48  insert_values : insert_values ',' insert_value
   49                | insert_value

   50  insert_value : STRING
   51               | INTEGER
   52               | FLOAT

   53  deletesql : DELETE FROM table WHERE conditions ';'

   54  updatesql : UPDATE table SET setinfo WHERE conditions ';'

   55  setinfo : setinfo ',' field '=' value
   56          | field '=' value

   57  value : insert_value

   58  showtablesql : SHOW TABLES ';'

   59  showdatabasessql : SHOW DATABASES ';'

   60  dropsql : DROP TABLE table ';'

   61  usesql : USE basename ';'

   62  basename : ID

   63  createdatabase : CREATE DATABASE basename ';'


##############################################################################
# States
##############################################################################

state 0
	$accept : . statements $end

	CREATE  shift 1
	SHOW  shift 2
	DROP  shift 3
	USE  shift 4
	INSERT  shift 5
	SELECT  shift 6
	DELETE  shift 7
	UPDATE  shift 8

	updatesql  goto 9
	deletesql  goto 10
	showtablesql  goto 11
	statement  goto 12
	statements  goto 13
	createtablesql  goto 14
	selectsql  goto 15
	insertsql  goto 16
	showdatabasessql  goto 17
	dropsql  goto 18
	usesql  goto 19
	createdatabase  goto 20


state 1
	createdatabase : CREATE . DATABASE basename ';'
	createtablesql : CREATE . TABLE table '(' fieldsdefinition ')' ';'

	DATABASE  shift 21
	TABLE  shift 22


state 2
	showtablesql : SHOW . TABLES ';'
	showdatabasessql : SHOW . DATABASES ';'

	DATABASES  shift 23
	TABLES  shift 24


state 3
	dropsql : DROP . TABLE table ';'

	TABLE  shift 25


state 4
	usesql : USE . basename ';'

	ID  shift 26

	basename  goto 27


state 5
	insertsql : INSERT . INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
	insertsql : INSERT . INTO table VALUES '(' insert_values ')' ';'

	INTO  shift 28


state 6
	selectsql : SELECT . fields_star FROM tables WHERE conditions ';'
	selectsql : SELECT . fields_star FROM tables ';'

	'*'  shift 29
	ID  shift 30

	table_fields  goto 31
	table_field  goto 32
	table  goto 33
	field  goto 34
	fields_star  goto 35


state 7
	deletesql : DELETE . FROM table WHERE conditions ';'

	FROM  shift 36


state 8
	updatesql : UPDATE . table SET setinfo WHERE conditions ';'

	ID  shift 37

	table  goto 38


state 9
	statement : updatesql .  (7)

	.  reduce 7


state 10
	statement : deletesql .  (6)

	.  reduce 6


state 11
	statement : showtablesql .  (8)

	.  reduce 8


state 12
	statements : statement .  (2)

	.  reduce 2


state 13
	$accept : statements . $end  (0)
	statements : statements . statement

	$end  accept
	CREATE  shift 1
	SHOW  shift 2
	DROP  shift 3
	USE  shift 4
	INSERT  shift 5
	SELECT  shift 6
	DELETE  shift 7
	UPDATE  shift 8

	updatesql  goto 9
	deletesql  goto 10
	showtablesql  goto 11
	statement  goto 39
	createtablesql  goto 14
	selectsql  goto 15
	insertsql  goto 16
	showdatabasessql  goto 17
	dropsql  goto 18
	usesql  goto 19
	createdatabase  goto 20


state 14
	statement : createtablesql .  (3)

	.  reduce 3


state 15
	statement : selectsql .  (4)

	.  reduce 4


state 16
	statement : insertsql .  (5)

	.  reduce 5


state 17
	statement : showdatabasessql .  (9)

	.  reduce 9


state 18
	statement : dropsql .  (10)

	.  reduce 10


state 19
	statement : usesql .  (11)

	.  reduce 11


state 20
	statement : createdatabase .  (12)

	.  reduce 12


state 21
	createdatabase : CREATE DATABASE . basename ';'

	ID  shift 26

	basename  goto 40


state 22
	createtablesql : CREATE TABLE . table '(' fieldsdefinition ')' ';'

	ID  shift 37

	table  goto 41


state 23
	showdatabasessql : SHOW DATABASES . ';'

	';'  shift 42


state 24
	showtablesql : SHOW TABLES . ';'

	';'  shift 43


state 25
	dropsql : DROP TABLE . table ';'

	ID  shift 37

	table  goto 44


state 26
	basename : ID .  (62)

	.  reduce 62


state 27
	usesql : USE basename . ';'

	';'  shift 45


state 28
	insertsql : INSERT INTO . table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
	insertsql : INSERT INTO . table VALUES '(' insert_values ')' ';'

	ID  shift 37

	table  goto 46


state 29
	fields_star : '*' .  (24)

	.  reduce 24


state 30
	field : ID .  (18)
	table : ID .  (14)

	'.'  reduce 14
	.  reduce 18


state 31
	table_fields : table_fields . ',' table_field
	fields_star : table_fields .  (23)

	','  shift 47
	.  reduce 23


state 32
	table_fields : table_field .  (25)

	.  reduce 25


state 33
	table_field : table . '.' field

	'.'  shift 48


state 34
	table_field : field .  (27)

	.  reduce 27


state 35
	selectsql : SELECT fields_star . FROM tables WHERE conditions ';'
	selectsql : SELECT fields_star . FROM tables ';'

	FROM  shift 49


state 36
	deletesql : DELETE FROM . table WHERE conditions ';'

	ID  shift 37

	table  goto 50


state 37
	table : ID .  (14)

	.  reduce 14


state 38
	updatesql : UPDATE table . SET setinfo WHERE conditions ';'

	SET  shift 51


state 39
	statements : statements statement .  (1)

	.  reduce 1


state 40
	createdatabase : CREATE DATABASE basename . ';'

	';'  shift 52


state 41
	createtablesql : CREATE TABLE table . '(' fieldsdefinition ')' ';'

	'('  shift 53


state 42
	showdatabasessql : SHOW DATABASES ';' .  (59)

	.  reduce 59


state 43
	showtablesql : SHOW TABLES ';' .  (58)

	.  reduce 58


state 44
	dropsql : DROP TABLE table . ';'

	';'  shift 54


state 45
	usesql : USE basename ';' .  (61)

	.  reduce 61


state 46
	insertsql : INSERT INTO table . '(' insert_fields ')' VALUES '(' insert_values ')' ';'
	insertsql : INSERT INTO table . VALUES '(' insert_values ')' ';'

	'('  shift 55
	VALUES  shift 56


state 47
	table_fields : table_fields ',' . table_field

	ID  shift 30

	table_field  goto 57
	table  goto 33
	field  goto 34


state 48
	table_field : table '.' . field

	ID  shift 58

	field  goto 59


state 49
	selectsql : SELECT fields_star FROM . tables WHERE conditions ';'
	selectsql : SELECT fields_star FROM . tables ';'

	ID  shift 37

	tables  goto 60
	table  goto 61


state 50
	deletesql : DELETE FROM table . WHERE conditions ';'

	WHERE  shift 62


state 51
	updatesql : UPDATE table SET . setinfo WHERE conditions ';'

	ID  shift 58

	setinfo  goto 63
	field  goto 64


state 52
	createdatabase : CREATE DATABASE basename ';' .  (63)

	.  reduce 63


state 53
	createtablesql : CREATE TABLE table '(' . fieldsdefinition ')' ';'

	ID  shift 58

	fieldsdefinition  goto 65
	field_type  goto 66
	field  goto 67


state 54
	dropsql : DROP TABLE table ';' .  (60)

	.  reduce 60


state 55
	insertsql : INSERT INTO table '(' . insert_fields ')' VALUES '(' insert_values ')' ';'

	ID  shift 58

	insert_fields  goto 68
	field  goto 69


state 56
	insertsql : INSERT INTO table VALUES . '(' insert_values ')' ';'

	'('  shift 70


state 57
	table_fields : table_fields ',' table_field .  (26)

	.  reduce 26


state 58
	field : ID .  (18)

	.  reduce 18


state 59
	table_field : table '.' field .  (28)

	.  reduce 28


state 60
	selectsql : SELECT fields_star FROM tables . WHERE conditions ';'
	selectsql : SELECT fields_star FROM tables . ';'
	tables : tables . ',' table

	','  shift 71
	';'  shift 72
	WHERE  shift 73


state 61
	tables : table .  (29)

	.  reduce 29


state 62
	deletesql : DELETE FROM table WHERE . conditions ';'

	'('  shift 74
	ID  shift 30

	condition  goto 75
	comp_left  goto 76
	conditions  goto 77
	table_field  goto 78
	table  goto 33
	field  goto 34


state 63
	setinfo : setinfo . ',' field '=' value
	updatesql : UPDATE table SET setinfo . WHERE conditions ';'

	','  shift 79
	WHERE  shift 80


state 64
	setinfo : field . '=' value

	'='  shift 81


state 65
	createtablesql : CREATE TABLE table '(' fieldsdefinition . ')' ';'
	fieldsdefinition : fieldsdefinition . ',' field_type

	')'  shift 82
	','  shift 83


state 66
	fieldsdefinition : field_type .  (16)

	.  reduce 16


state 67
	field_type : field . type

	CHAR  shift 84
	INT  shift 85

	type  goto 86


state 68
	insertsql : INSERT INTO table '(' insert_fields . ')' VALUES '(' insert_values ')' ';'
	insert_fields : insert_fields . ',' field

	')'  shift 87
	','  shift 88


state 69
	insert_fields : field .  (47)

	.  reduce 47


state 70
	insertsql : INSERT INTO table VALUES '(' . insert_values ')' ';'

	INTEGER  shift 89
	FLOAT  shift 90
	STRING  shift 91

	insert_values  goto 92
	insert_value  goto 93


state 71
	tables : tables ',' . table

	ID  shift 37

	table  goto 94


state 72
	selectsql : SELECT fields_star FROM tables ';' .  (21)

	.  reduce 21


state 73
	selectsql : SELECT fields_star FROM tables WHERE . conditions ';'

	'('  shift 74
	ID  shift 30

	condition  goto 75
	comp_left  goto 76
	conditions  goto 95
	table_field  goto 78
	table  goto 33
	field  goto 34


state 74
	conditions : '(' . conditions ')'

	'('  shift 74
	ID  shift 30

	condition  goto 75
	comp_left  goto 76
	conditions  goto 96
	table_field  goto 78
	table  goto 33
	field  goto 34


state 75
	conditions : condition .  (31)

	.  reduce 31


state 76
	condition : comp_left . comp_op comp_right

	'!'  shift 97
	'<'  shift 98
	'='  shift 99
	'>'  shift 100

	comp_op  goto 101


state 77
	conditions : conditions . AND conditions
	deletesql : DELETE FROM table WHERE conditions . ';'
	conditions : conditions . OR conditions

	';'  shift 102
	AND  shift 103
	OR  shift 104


state 78
	comp_left : table_field .  (36)

	.  reduce 36


state 79
	setinfo : setinfo ',' . field '=' value

	ID  shift 58

	field  goto 105


state 80
	updatesql : UPDATE table SET setinfo WHERE . conditions ';'

	'('  shift 74
	ID  shift 30

	condition  goto 75
	comp_left  goto 76
	conditions  goto 106
	table_field  goto 78
	table  goto 33
	field  goto 34


state 81
	setinfo : field '=' . value

	INTEGER  shift 89
	FLOAT  shift 90
	STRING  shift 91

	insert_value  goto 107
	value  goto 108


state 82
	createtablesql : CREATE TABLE table '(' fieldsdefinition ')' . ';'

	';'  shift 109


state 83
	fieldsdefinition : fieldsdefinition ',' . field_type

	ID  shift 58

	field_type  goto 110
	field  goto 67


state 84
	type : CHAR . '(' INTEGER ')'

	'('  shift 111


state 85
	type : INT .  (20)

	.  reduce 20


state 86
	field_type : field type .  (17)

	.  reduce 17


state 87
	insertsql : INSERT INTO table '(' insert_fields ')' . VALUES '(' insert_values ')' ';'

	VALUES  shift 112


state 88
	insert_fields : insert_fields ',' . field

	ID  shift 58

	field  goto 113


state 89
	insert_value : INTEGER .  (51)

	.  reduce 51


state 90
	insert_value : FLOAT .  (52)

	.  reduce 52


state 91
	insert_value : STRING .  (50)

	.  reduce 50


state 92
	insertsql : INSERT INTO table VALUES '(' insert_values . ')' ';'
	insert_values : insert_values . ',' insert_value

	')'  shift 114
	','  shift 115


state 93
	insert_values : insert_value .  (49)

	.  reduce 49


state 94
	tables : tables ',' table .  (30)

	.  reduce 30


state 95
	conditions : conditions . AND conditions
	selectsql : SELECT fields_star FROM tables WHERE conditions . ';'
	conditions : conditions . OR conditions

	';'  shift 116
	AND  shift 103
	OR  shift 104


state 96
	conditions : '(' conditions . ')'
	conditions : conditions . AND conditions
	conditions : conditions . OR conditions

	')'  shift 117
	AND  shift 103
	OR  shift 104


state 97
	comp_op : '!' . '='

	'='  shift 118


state 98
	comp_op : '<' .  (40)

	.  reduce 40


state 99
	comp_op : '=' .  (42)

	.  reduce 42


state 100
	comp_op : '>' .  (41)

	.  reduce 41


state 101
	condition : comp_left comp_op . comp_right

	ID  shift 30
	INTEGER  shift 119
	FLOAT  shift 120

	table_field  goto 121
	comp_right  goto 122
	table  goto 33
	field  goto 34


state 102
	deletesql : DELETE FROM table WHERE conditions ';' .  (53)

	.  reduce 53


state 103
	conditions : conditions AND . conditions

	'('  shift 74
	ID  shift 30

	condition  goto 75
	comp_left  goto 76
	conditions  goto 123
	table_field  goto 78
	table  goto 33
	field  goto 34


state 104
	conditions : conditions OR . conditions

	'('  shift 74
	ID  shift 30

	condition  goto 75
	comp_left  goto 76
	conditions  goto 124
	table_field  goto 78
	table  goto 33
	field  goto 34


state 105
	setinfo : setinfo ',' field . '=' value

	'='  shift 125


state 106
	conditions : conditions . AND conditions
	updatesql : UPDATE table SET setinfo WHERE conditions . ';'
	conditions : conditions . OR conditions

	';'  shift 126
	AND  shift 103
	OR  shift 104


state 107
	value : insert_value .  (57)

	.  reduce 57


state 108
	setinfo : field '=' value .  (56)

	.  reduce 56


state 109
	createtablesql : CREATE TABLE table '(' fieldsdefinition ')' ';' .  (13)

	.  reduce 13


state 110
	fieldsdefinition : fieldsdefinition ',' field_type .  (15)

	.  reduce 15


state 111
	type : CHAR '(' . INTEGER ')'

	INTEGER  shift 127


state 112
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES . '(' insert_values ')' ';'

	'('  shift 128


state 113
	insert_fields : insert_fields ',' field .  (46)

	.  reduce 46


state 114
	insertsql : INSERT INTO table VALUES '(' insert_values ')' . ';'

	';'  shift 129


state 115
	insert_values : insert_values ',' . insert_value

	INTEGER  shift 89
	FLOAT  shift 90
	STRING  shift 91

	insert_value  goto 130


state 116
	selectsql : SELECT fields_star FROM tables WHERE conditions ';' .  (22)

	.  reduce 22


state 117
	conditions : '(' conditions ')' .  (32)

	.  reduce 32


state 118
	comp_op : '!' '=' .  (43)

	.  reduce 43


state 119
	comp_right : INTEGER .  (38)

	.  reduce 38


state 120
	comp_right : FLOAT .  (39)

	.  reduce 39


state 121
	comp_right : table_field .  (37)

	.  reduce 37


state 122
	condition : comp_left comp_op comp_right .  (35)

	.  reduce 35


state 123
	conditions : conditions AND conditions .  (33)
	conditions : conditions . AND conditions
	conditions : conditions . OR conditions

	.  reduce 33


state 124
	conditions : conditions . AND conditions
	conditions : conditions OR conditions .  (34)
	conditions : conditions . OR conditions

	.  reduce 34


state 125
	setinfo : setinfo ',' field '=' . value

	INTEGER  shift 89
	FLOAT  shift 90
	STRING  shift 91

	insert_value  goto 107
	value  goto 131


state 126
	updatesql : UPDATE table SET setinfo WHERE conditions ';' .  (54)

	.  reduce 54


state 127
	type : CHAR '(' INTEGER . ')'

	')'  shift 132


state 128
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' . insert_values ')' ';'

	INTEGER  shift 89
	FLOAT  shift 90
	STRING  shift 91

	insert_values  goto 133
	insert_value  goto 93


state 129
	insertsql : INSERT INTO table VALUES '(' insert_values ')' ';' .  (45)

	.  reduce 45


state 130
	insert_values : insert_values ',' insert_value .  (48)

	.  reduce 48


state 131
	setinfo : setinfo ',' field '=' value .  (55)

	.  reduce 55


state 132
	type : CHAR '(' INTEGER ')' .  (19)

	.  reduce 19


state 133
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values . ')' ';'
	insert_values : insert_values . ',' insert_value

	')'  shift 134
	','  shift 115


state 134
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' . ';'

	';'  shift 135


state 135
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';' .  (44)

	.  reduce 44


##############################################################################
# Summary
##############################################################################

37 token(s), 33 nonterminal(s)
64 grammar rule(s), 136 state(s)


##############################################################################
# End of File
##############################################################################
