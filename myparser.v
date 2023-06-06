#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 54 of your 30 day trial period.
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
# Date: 06/06/23
# Time: 13:54:53
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : statements $end

    1  statements : statement
    2             | statements statement

    3  statement : createtablesql
    4            | selectsql
    5            | insertsql
    6            | deletesql
    7            | updatesql
    8            | showtablesql
    9            | showdatabasessql
   10            | droptablesql
   11            | dropdatabasesql
   12            | usesql
   13            | createdatabasesql

   14  createtablesql : CREATE TABLE table '(' fieldsdefinition ')' ';'

   15  table : ID

   16  fieldsdefinition : fieldsdefinition ',' field_type
   17                   | field_type

   18  field_type : field type

   19  field : ID

   20  type : CHAR '(' INTEGER ')'
   21       | INT

   22  selectsql : SELECT fields_star FROM tables ';'
   23            | SELECT fields_star FROM tables WHERE conditions ';'

   24  fields_star : table_fields
   25              | '*'

   26  table_fields : table_field
   27               | table_fields ',' table_field

   28  table_field : field
   29              | table '.' field

   30  tables : table
   31         | tables ',' table

   32  conditions : condition
   33             | '(' conditions ')'
   34             | conditions AND conditions
   35             | conditions OR conditions

   36  condition : comp_left comp_op comp_right

   37  comp_left : table_field

   38  comp_right : table_field
   39             | INTEGER
   40             | FLOAT
   41             | STRING

   42  comp_op : OPERATOR

   43  insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
   44            | INSERT INTO table VALUES '(' insert_values ')' ';'

   45  insert_fields : insert_fields ',' field
   46                | field

   47  insert_values : insert_values ',' insert_value
   48                | insert_value

   49  insert_value : STRING
   50               | INTEGER

   51  deletesql : DELETE FROM table WHERE conditions ';'

   52  updatesql : UPDATE table SET setinfo WHERE conditions ';'

   53  setinfo : setinfo ',' field OPERATOR value
   54          | field OPERATOR value

   55  value : insert_value

   56  showtablesql : SHOW TABLES ';'

   57  showdatabasessql : SHOW DATABASES ';'

   58  droptablesql : DROP TABLE table ';'

   59  usesql : USE basename ';'

   60  basename : ID

   61  createdatabasesql : CREATE DATABASE basename ';'

   62  dropdatabasesql : DROP DATABASE basename ';'


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

	createdatabasesql  goto 9
	usesql  goto 10
	insertsql  goto 11
	createtablesql  goto 12
	showdatabasessql  goto 13
	selectsql  goto 14
	statements  goto 15
	deletesql  goto 16
	statement  goto 17
	showtablesql  goto 18
	droptablesql  goto 19
	updatesql  goto 20
	dropdatabasesql  goto 21


state 1
	createtablesql : CREATE . TABLE table '(' fieldsdefinition ')' ';'
	createdatabasesql : CREATE . DATABASE basename ';'

	DATABASE  shift 22
	TABLE  shift 23


state 2
	showtablesql : SHOW . TABLES ';'
	showdatabasessql : SHOW . DATABASES ';'

	DATABASES  shift 24
	TABLES  shift 25


state 3
	dropdatabasesql : DROP . DATABASE basename ';'
	droptablesql : DROP . TABLE table ';'

	DATABASE  shift 26
	TABLE  shift 27


state 4
	usesql : USE . basename ';'

	ID  shift 28

	basename  goto 29


state 5
	insertsql : INSERT . INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
	insertsql : INSERT . INTO table VALUES '(' insert_values ')' ';'

	INTO  shift 30


state 6
	selectsql : SELECT . fields_star FROM tables ';'
	selectsql : SELECT . fields_star FROM tables WHERE conditions ';'

	'*'  shift 31
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 35
	table_fields  goto 36
	fields_star  goto 37


state 7
	deletesql : DELETE . FROM table WHERE conditions ';'

	FROM  shift 38


state 8
	updatesql : UPDATE . table SET setinfo WHERE conditions ';'

	ID  shift 39

	table  goto 40


state 9
	statement : createdatabasesql .  (13)

	.  reduce 13


state 10
	statement : usesql .  (12)

	.  reduce 12


state 11
	statement : insertsql .  (5)

	.  reduce 5


state 12
	statement : createtablesql .  (3)

	.  reduce 3


state 13
	statement : showdatabasessql .  (9)

	.  reduce 9


state 14
	statement : selectsql .  (4)

	.  reduce 4


state 15
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

	createdatabasesql  goto 9
	usesql  goto 10
	insertsql  goto 11
	createtablesql  goto 12
	showdatabasessql  goto 13
	selectsql  goto 14
	deletesql  goto 16
	statement  goto 41
	showtablesql  goto 18
	droptablesql  goto 19
	updatesql  goto 20
	dropdatabasesql  goto 21


state 16
	statement : deletesql .  (6)

	.  reduce 6


state 17
	statements : statement .  (1)

	.  reduce 1


state 18
	statement : showtablesql .  (8)

	.  reduce 8


state 19
	statement : droptablesql .  (10)

	.  reduce 10


state 20
	statement : updatesql .  (7)

	.  reduce 7


state 21
	statement : dropdatabasesql .  (11)

	.  reduce 11


state 22
	createdatabasesql : CREATE DATABASE . basename ';'

	ID  shift 28

	basename  goto 42


state 23
	createtablesql : CREATE TABLE . table '(' fieldsdefinition ')' ';'

	ID  shift 39

	table  goto 43


state 24
	showdatabasessql : SHOW DATABASES . ';'

	';'  shift 44


state 25
	showtablesql : SHOW TABLES . ';'

	';'  shift 45


state 26
	dropdatabasesql : DROP DATABASE . basename ';'

	ID  shift 28

	basename  goto 46


state 27
	droptablesql : DROP TABLE . table ';'

	ID  shift 39

	table  goto 47


state 28
	basename : ID .  (60)

	.  reduce 60


state 29
	usesql : USE basename . ';'

	';'  shift 48


state 30
	insertsql : INSERT INTO . table '(' insert_fields ')' VALUES '(' insert_values ')' ';'
	insertsql : INSERT INTO . table VALUES '(' insert_values ')' ';'

	ID  shift 39

	table  goto 49


state 31
	fields_star : '*' .  (25)

	.  reduce 25


state 32
	table : ID .  (15)
	field : ID .  (19)

	'.'  reduce 15
	.  reduce 19


state 33
	table_field : table . '.' field

	'.'  shift 50


state 34
	table_field : field .  (28)

	.  reduce 28


state 35
	table_fields : table_field .  (26)

	.  reduce 26


state 36
	fields_star : table_fields .  (24)
	table_fields : table_fields . ',' table_field

	','  shift 51
	.  reduce 24


state 37
	selectsql : SELECT fields_star . FROM tables ';'
	selectsql : SELECT fields_star . FROM tables WHERE conditions ';'

	FROM  shift 52


state 38
	deletesql : DELETE FROM . table WHERE conditions ';'

	ID  shift 39

	table  goto 53


state 39
	table : ID .  (15)

	.  reduce 15


state 40
	updatesql : UPDATE table . SET setinfo WHERE conditions ';'

	SET  shift 54


state 41
	statements : statements statement .  (2)

	.  reduce 2


state 42
	createdatabasesql : CREATE DATABASE basename . ';'

	';'  shift 55


state 43
	createtablesql : CREATE TABLE table . '(' fieldsdefinition ')' ';'

	'('  shift 56


state 44
	showdatabasessql : SHOW DATABASES ';' .  (57)

	.  reduce 57


state 45
	showtablesql : SHOW TABLES ';' .  (56)

	.  reduce 56


state 46
	dropdatabasesql : DROP DATABASE basename . ';'

	';'  shift 57


state 47
	droptablesql : DROP TABLE table . ';'

	';'  shift 58


state 48
	usesql : USE basename ';' .  (59)

	.  reduce 59


state 49
	insertsql : INSERT INTO table . '(' insert_fields ')' VALUES '(' insert_values ')' ';'
	insertsql : INSERT INTO table . VALUES '(' insert_values ')' ';'

	'('  shift 59
	VALUES  shift 60


state 50
	table_field : table '.' . field

	ID  shift 61

	field  goto 62


state 51
	table_fields : table_fields ',' . table_field

	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 63


state 52
	selectsql : SELECT fields_star FROM . tables ';'
	selectsql : SELECT fields_star FROM . tables WHERE conditions ';'

	ID  shift 39

	table  goto 64
	tables  goto 65


state 53
	deletesql : DELETE FROM table . WHERE conditions ';'

	WHERE  shift 66


state 54
	updatesql : UPDATE table SET . setinfo WHERE conditions ';'

	ID  shift 61

	field  goto 67
	setinfo  goto 68


state 55
	createdatabasesql : CREATE DATABASE basename ';' .  (61)

	.  reduce 61


state 56
	createtablesql : CREATE TABLE table '(' . fieldsdefinition ')' ';'

	ID  shift 61

	fieldsdefinition  goto 69
	field_type  goto 70
	field  goto 71


state 57
	dropdatabasesql : DROP DATABASE basename ';' .  (62)

	.  reduce 62


state 58
	droptablesql : DROP TABLE table ';' .  (58)

	.  reduce 58


state 59
	insertsql : INSERT INTO table '(' . insert_fields ')' VALUES '(' insert_values ')' ';'

	ID  shift 61

	field  goto 72
	insert_fields  goto 73


state 60
	insertsql : INSERT INTO table VALUES . '(' insert_values ')' ';'

	'('  shift 74


state 61
	field : ID .  (19)

	.  reduce 19


state 62
	table_field : table '.' field .  (29)

	.  reduce 29


state 63
	table_fields : table_fields ',' table_field .  (27)

	.  reduce 27


state 64
	tables : table .  (30)

	.  reduce 30


state 65
	selectsql : SELECT fields_star FROM tables . ';'
	tables : tables . ',' table
	selectsql : SELECT fields_star FROM tables . WHERE conditions ';'

	','  shift 75
	';'  shift 76
	WHERE  shift 77


state 66
	deletesql : DELETE FROM table WHERE . conditions ';'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	condition  goto 80
	conditions  goto 81
	comp_left  goto 82


state 67
	setinfo : field . OPERATOR value

	OPERATOR  shift 83


state 68
	updatesql : UPDATE table SET setinfo . WHERE conditions ';'
	setinfo : setinfo . ',' field OPERATOR value

	','  shift 84
	WHERE  shift 85


state 69
	createtablesql : CREATE TABLE table '(' fieldsdefinition . ')' ';'
	fieldsdefinition : fieldsdefinition . ',' field_type

	')'  shift 86
	','  shift 87


state 70
	fieldsdefinition : field_type .  (17)

	.  reduce 17


state 71
	field_type : field . type

	CHAR  shift 88
	INT  shift 89

	type  goto 90


state 72
	insert_fields : field .  (46)

	.  reduce 46


state 73
	insert_fields : insert_fields . ',' field
	insertsql : INSERT INTO table '(' insert_fields . ')' VALUES '(' insert_values ')' ';'

	')'  shift 91
	','  shift 92


state 74
	insertsql : INSERT INTO table VALUES '(' . insert_values ')' ';'

	STRING  shift 93
	INTEGER  shift 94

	insert_value  goto 95
	insert_values  goto 96


state 75
	tables : tables ',' . table

	ID  shift 39

	table  goto 97


state 76
	selectsql : SELECT fields_star FROM tables ';' .  (22)

	.  reduce 22


state 77
	selectsql : SELECT fields_star FROM tables WHERE . conditions ';'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	condition  goto 80
	conditions  goto 98
	comp_left  goto 82


state 78
	conditions : '(' . conditions ')'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	condition  goto 80
	conditions  goto 99
	comp_left  goto 82


state 79
	comp_left : table_field .  (37)

	.  reduce 37


state 80
	conditions : condition .  (32)

	.  reduce 32


state 81
	conditions : conditions . AND conditions
	deletesql : DELETE FROM table WHERE conditions . ';'
	conditions : conditions . OR conditions

	';'  shift 100
	AND  shift 101
	OR  shift 102


state 82
	condition : comp_left . comp_op comp_right

	OPERATOR  shift 103

	comp_op  goto 104


state 83
	setinfo : field OPERATOR . value

	STRING  shift 93
	INTEGER  shift 94

	insert_value  goto 105
	value  goto 106


state 84
	setinfo : setinfo ',' . field OPERATOR value

	ID  shift 61

	field  goto 107


state 85
	updatesql : UPDATE table SET setinfo WHERE . conditions ';'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	condition  goto 80
	conditions  goto 108
	comp_left  goto 82


state 86
	createtablesql : CREATE TABLE table '(' fieldsdefinition ')' . ';'

	';'  shift 109


state 87
	fieldsdefinition : fieldsdefinition ',' . field_type

	ID  shift 61

	field_type  goto 110
	field  goto 71


state 88
	type : CHAR . '(' INTEGER ')'

	'('  shift 111


state 89
	type : INT .  (21)

	.  reduce 21


state 90
	field_type : field type .  (18)

	.  reduce 18


state 91
	insertsql : INSERT INTO table '(' insert_fields ')' . VALUES '(' insert_values ')' ';'

	VALUES  shift 112


state 92
	insert_fields : insert_fields ',' . field

	ID  shift 61

	field  goto 113


state 93
	insert_value : STRING .  (49)

	.  reduce 49


state 94
	insert_value : INTEGER .  (50)

	.  reduce 50


state 95
	insert_values : insert_value .  (48)

	.  reduce 48


state 96
	insertsql : INSERT INTO table VALUES '(' insert_values . ')' ';'
	insert_values : insert_values . ',' insert_value

	')'  shift 114
	','  shift 115


state 97
	tables : tables ',' table .  (31)

	.  reduce 31


state 98
	selectsql : SELECT fields_star FROM tables WHERE conditions . ';'
	conditions : conditions . AND conditions
	conditions : conditions . OR conditions

	';'  shift 116
	AND  shift 101
	OR  shift 102


state 99
	conditions : '(' conditions . ')'
	conditions : conditions . AND conditions
	conditions : conditions . OR conditions

	')'  shift 117
	AND  shift 101
	OR  shift 102


state 100
	deletesql : DELETE FROM table WHERE conditions ';' .  (51)

	.  reduce 51


state 101
	conditions : conditions AND . conditions

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	condition  goto 80
	conditions  goto 118
	comp_left  goto 82


state 102
	conditions : conditions OR . conditions

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	condition  goto 80
	conditions  goto 119
	comp_left  goto 82


state 103
	comp_op : OPERATOR .  (42)

	.  reduce 42


state 104
	condition : comp_left comp_op . comp_right

	ID  shift 32
	STRING  shift 120
	INTEGER  shift 121
	FLOAT  shift 122

	table  goto 33
	field  goto 34
	table_field  goto 123
	comp_right  goto 124


state 105
	value : insert_value .  (55)

	.  reduce 55


state 106
	setinfo : field OPERATOR value .  (54)

	.  reduce 54


state 107
	setinfo : setinfo ',' field . OPERATOR value

	OPERATOR  shift 125


state 108
	updatesql : UPDATE table SET setinfo WHERE conditions . ';'
	conditions : conditions . AND conditions
	conditions : conditions . OR conditions

	';'  shift 126
	AND  shift 101
	OR  shift 102


state 109
	createtablesql : CREATE TABLE table '(' fieldsdefinition ')' ';' .  (14)

	.  reduce 14


state 110
	fieldsdefinition : fieldsdefinition ',' field_type .  (16)

	.  reduce 16


state 111
	type : CHAR '(' . INTEGER ')'

	INTEGER  shift 127


state 112
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES . '(' insert_values ')' ';'

	'('  shift 128


state 113
	insert_fields : insert_fields ',' field .  (45)

	.  reduce 45


state 114
	insertsql : INSERT INTO table VALUES '(' insert_values ')' . ';'

	';'  shift 129


state 115
	insert_values : insert_values ',' . insert_value

	STRING  shift 93
	INTEGER  shift 94

	insert_value  goto 130


state 116
	selectsql : SELECT fields_star FROM tables WHERE conditions ';' .  (23)

	.  reduce 23


state 117
	conditions : '(' conditions ')' .  (33)

	.  reduce 33


state 118
	conditions : conditions AND conditions .  (34)
	conditions : conditions . AND conditions
	conditions : conditions . OR conditions

	.  reduce 34


state 119
	conditions : conditions . AND conditions
	conditions : conditions OR conditions .  (35)
	conditions : conditions . OR conditions

	.  reduce 35


state 120
	comp_right : STRING .  (41)

	.  reduce 41


state 121
	comp_right : INTEGER .  (39)

	.  reduce 39


state 122
	comp_right : FLOAT .  (40)

	.  reduce 40


state 123
	comp_right : table_field .  (38)

	.  reduce 38


state 124
	condition : comp_left comp_op comp_right .  (36)

	.  reduce 36


state 125
	setinfo : setinfo ',' field OPERATOR . value

	STRING  shift 93
	INTEGER  shift 94

	insert_value  goto 105
	value  goto 131


state 126
	updatesql : UPDATE table SET setinfo WHERE conditions ';' .  (52)

	.  reduce 52


state 127
	type : CHAR '(' INTEGER . ')'

	')'  shift 132


state 128
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' . insert_values ')' ';'

	STRING  shift 93
	INTEGER  shift 94

	insert_value  goto 95
	insert_values  goto 133


state 129
	insertsql : INSERT INTO table VALUES '(' insert_values ')' ';' .  (44)

	.  reduce 44


state 130
	insert_values : insert_values ',' insert_value .  (47)

	.  reduce 47


state 131
	setinfo : setinfo ',' field OPERATOR value .  (53)

	.  reduce 53


state 132
	type : CHAR '(' INTEGER ')' .  (20)

	.  reduce 20


state 133
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values . ')' ';'
	insert_values : insert_values . ',' insert_value

	')'  shift 134
	','  shift 115


state 134
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' . ';'

	';'  shift 135


state 135
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';' .  (43)

	.  reduce 43


##############################################################################
# Summary
##############################################################################

34 token(s), 34 nonterminal(s)
63 grammar rule(s), 136 state(s)


##############################################################################
# End of File
##############################################################################
