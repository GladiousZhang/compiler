#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 42 of your 30 day trial period.
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
# Date: 05/25/23
# Time: 18:02:12
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
   10            | droptablesql
   11            | dropdatabasesql
   12            | usesql
   13            | createdatabase

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
   51               | FLOAT

   52  deletesql : DELETE FROM table WHERE conditions ';'

   53  updatesql : UPDATE table SET setinfo WHERE conditions ';'

   54  setinfo : setinfo ',' field OPERATOR value
   55          | field OPERATOR value

   56  value : insert_value

   57  showtablesql : SHOW TABLES ';'

   58  showdatabasessql : SHOW DATABASES ';'

   59  droptablesql : DROP TABLE table ';'

   60  usesql : USE basename ';'

   61  basename : ID

   62  createdatabase : CREATE DATABASE basename ';'

   63  dropdatabasesql : DROP DATABASE basename ';'


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

	createtablesql  goto 9
	statements  goto 10
	showdatabasessql  goto 11
	dropdatabasesql  goto 12
	usesql  goto 13
	selectsql  goto 14
	showtablesql  goto 15
	updatesql  goto 16
	createdatabase  goto 17
	statement  goto 18
	deletesql  goto 19
	droptablesql  goto 20
	insertsql  goto 21


state 1
	createtablesql : CREATE . TABLE table '(' fieldsdefinition ')' ';'
	createdatabase : CREATE . DATABASE basename ';'

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
	insertsql : INSERT . INTO table VALUES '(' insert_values ')' ';'
	insertsql : INSERT . INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';'

	INTO  shift 30


state 6
	selectsql : SELECT . fields_star FROM tables ';'
	selectsql : SELECT . fields_star FROM tables WHERE conditions ';'

	'*'  shift 31
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 35
	fields_star  goto 36
	table_fields  goto 37


state 7
	deletesql : DELETE . FROM table WHERE conditions ';'

	FROM  shift 38


state 8
	updatesql : UPDATE . table SET setinfo WHERE conditions ';'

	ID  shift 39

	table  goto 40


state 9
	statement : createtablesql .  (3)

	.  reduce 3


state 10
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

	createtablesql  goto 9
	showdatabasessql  goto 11
	dropdatabasesql  goto 12
	usesql  goto 13
	selectsql  goto 14
	showtablesql  goto 15
	updatesql  goto 16
	createdatabase  goto 17
	statement  goto 41
	deletesql  goto 19
	droptablesql  goto 20
	insertsql  goto 21


state 11
	statement : showdatabasessql .  (9)

	.  reduce 9


state 12
	statement : dropdatabasesql .  (11)

	.  reduce 11


state 13
	statement : usesql .  (12)

	.  reduce 12


state 14
	statement : selectsql .  (4)

	.  reduce 4


state 15
	statement : showtablesql .  (8)

	.  reduce 8


state 16
	statement : updatesql .  (7)

	.  reduce 7


state 17
	statement : createdatabase .  (13)

	.  reduce 13


state 18
	statements : statement .  (2)

	.  reduce 2


state 19
	statement : deletesql .  (6)

	.  reduce 6


state 20
	statement : droptablesql .  (10)

	.  reduce 10


state 21
	statement : insertsql .  (5)

	.  reduce 5


state 22
	createdatabase : CREATE DATABASE . basename ';'

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
	basename : ID .  (61)

	.  reduce 61


state 29
	usesql : USE basename . ';'

	';'  shift 48


state 30
	insertsql : INSERT INTO . table VALUES '(' insert_values ')' ';'
	insertsql : INSERT INTO . table '(' insert_fields ')' VALUES '(' insert_values ')' ';'

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
	selectsql : SELECT fields_star . FROM tables ';'
	selectsql : SELECT fields_star . FROM tables WHERE conditions ';'

	FROM  shift 51


state 37
	fields_star : table_fields .  (24)
	table_fields : table_fields . ',' table_field

	','  shift 52
	.  reduce 24


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
	statements : statements statement .  (1)

	.  reduce 1


state 42
	createdatabase : CREATE DATABASE basename . ';'

	';'  shift 55


state 43
	createtablesql : CREATE TABLE table . '(' fieldsdefinition ')' ';'

	'('  shift 56


state 44
	showdatabasessql : SHOW DATABASES ';' .  (58)

	.  reduce 58


state 45
	showtablesql : SHOW TABLES ';' .  (57)

	.  reduce 57


state 46
	dropdatabasesql : DROP DATABASE basename . ';'

	';'  shift 57


state 47
	droptablesql : DROP TABLE table . ';'

	';'  shift 58


state 48
	usesql : USE basename ';' .  (60)

	.  reduce 60


state 49
	insertsql : INSERT INTO table . VALUES '(' insert_values ')' ';'
	insertsql : INSERT INTO table . '(' insert_fields ')' VALUES '(' insert_values ')' ';'

	'('  shift 59
	VALUES  shift 60


state 50
	table_field : table '.' . field

	ID  shift 61

	field  goto 62


state 51
	selectsql : SELECT fields_star FROM . tables ';'
	selectsql : SELECT fields_star FROM . tables WHERE conditions ';'

	ID  shift 39

	table  goto 63
	tables  goto 64


state 52
	table_fields : table_fields ',' . table_field

	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 65


state 53
	deletesql : DELETE FROM table . WHERE conditions ';'

	WHERE  shift 66


state 54
	updatesql : UPDATE table SET . setinfo WHERE conditions ';'

	ID  shift 61

	field  goto 67
	setinfo  goto 68


state 55
	createdatabase : CREATE DATABASE basename ';' .  (62)

	.  reduce 62


state 56
	createtablesql : CREATE TABLE table '(' . fieldsdefinition ')' ';'

	ID  shift 61

	field  goto 69
	fieldsdefinition  goto 70
	field_type  goto 71


state 57
	dropdatabasesql : DROP DATABASE basename ';' .  (63)

	.  reduce 63


state 58
	droptablesql : DROP TABLE table ';' .  (59)

	.  reduce 59


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
	tables : table .  (30)

	.  reduce 30


state 64
	selectsql : SELECT fields_star FROM tables . ';'
	tables : tables . ',' table
	selectsql : SELECT fields_star FROM tables . WHERE conditions ';'

	','  shift 75
	';'  shift 76
	WHERE  shift 77


state 65
	table_fields : table_fields ',' table_field .  (27)

	.  reduce 27


state 66
	deletesql : DELETE FROM table WHERE . conditions ';'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	conditions  goto 80
	condition  goto 81
	comp_left  goto 82


state 67
	setinfo : field . OPERATOR value

	OPERATOR  shift 83


state 68
	setinfo : setinfo . ',' field OPERATOR value
	updatesql : UPDATE table SET setinfo . WHERE conditions ';'

	','  shift 84
	WHERE  shift 85


state 69
	field_type : field . type

	CHAR  shift 86
	INT  shift 87

	type  goto 88


state 70
	createtablesql : CREATE TABLE table '(' fieldsdefinition . ')' ';'
	fieldsdefinition : fieldsdefinition . ',' field_type

	')'  shift 89
	','  shift 90


state 71
	fieldsdefinition : field_type .  (17)

	.  reduce 17


state 72
	insert_fields : field .  (46)

	.  reduce 46


state 73
	insertsql : INSERT INTO table '(' insert_fields . ')' VALUES '(' insert_values ')' ';'
	insert_fields : insert_fields . ',' field

	')'  shift 91
	','  shift 92


state 74
	insertsql : INSERT INTO table VALUES '(' . insert_values ')' ';'

	INTEGER  shift 93
	FLOAT  shift 94
	STRING  shift 95

	insert_values  goto 96
	insert_value  goto 97


state 75
	tables : tables ',' . table

	ID  shift 39

	table  goto 98


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
	conditions  goto 99
	condition  goto 81
	comp_left  goto 82


state 78
	conditions : '(' . conditions ')'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	conditions  goto 100
	condition  goto 81
	comp_left  goto 82


state 79
	comp_left : table_field .  (37)

	.  reduce 37


state 80
	deletesql : DELETE FROM table WHERE conditions . ';'
	conditions : conditions . OR conditions
	conditions : conditions . AND conditions

	';'  shift 101
	AND  shift 102
	OR  shift 103


state 81
	conditions : condition .  (32)

	.  reduce 32


state 82
	condition : comp_left . comp_op comp_right

	OPERATOR  shift 104

	comp_op  goto 105


state 83
	setinfo : field OPERATOR . value

	INTEGER  shift 93
	FLOAT  shift 94
	STRING  shift 95

	value  goto 106
	insert_value  goto 107


state 84
	setinfo : setinfo ',' . field OPERATOR value

	ID  shift 61

	field  goto 108


state 85
	updatesql : UPDATE table SET setinfo WHERE . conditions ';'

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	conditions  goto 109
	condition  goto 81
	comp_left  goto 82


state 86
	type : CHAR . '(' INTEGER ')'

	'('  shift 110


state 87
	type : INT .  (21)

	.  reduce 21


state 88
	field_type : field type .  (18)

	.  reduce 18


state 89
	createtablesql : CREATE TABLE table '(' fieldsdefinition ')' . ';'

	';'  shift 111


state 90
	fieldsdefinition : fieldsdefinition ',' . field_type

	ID  shift 61

	field  goto 69
	field_type  goto 112


state 91
	insertsql : INSERT INTO table '(' insert_fields ')' . VALUES '(' insert_values ')' ';'

	VALUES  shift 113


state 92
	insert_fields : insert_fields ',' . field

	ID  shift 61

	field  goto 114


state 93
	insert_value : INTEGER .  (50)

	.  reduce 50


state 94
	insert_value : FLOAT .  (51)

	.  reduce 51


state 95
	insert_value : STRING .  (49)

	.  reduce 49


state 96
	insertsql : INSERT INTO table VALUES '(' insert_values . ')' ';'
	insert_values : insert_values . ',' insert_value

	')'  shift 115
	','  shift 116


state 97
	insert_values : insert_value .  (48)

	.  reduce 48


state 98
	tables : tables ',' table .  (31)

	.  reduce 31


state 99
	selectsql : SELECT fields_star FROM tables WHERE conditions . ';'
	conditions : conditions . OR conditions
	conditions : conditions . AND conditions

	';'  shift 117
	AND  shift 102
	OR  shift 103


state 100
	conditions : '(' conditions . ')'
	conditions : conditions . OR conditions
	conditions : conditions . AND conditions

	')'  shift 118
	AND  shift 102
	OR  shift 103


state 101
	deletesql : DELETE FROM table WHERE conditions ';' .  (52)

	.  reduce 52


state 102
	conditions : conditions AND . conditions

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	conditions  goto 119
	condition  goto 81
	comp_left  goto 82


state 103
	conditions : conditions OR . conditions

	'('  shift 78
	ID  shift 32

	table  goto 33
	field  goto 34
	table_field  goto 79
	conditions  goto 120
	condition  goto 81
	comp_left  goto 82


state 104
	comp_op : OPERATOR .  (42)

	.  reduce 42


state 105
	condition : comp_left comp_op . comp_right

	ID  shift 32
	INTEGER  shift 121
	FLOAT  shift 122
	STRING  shift 123

	table  goto 33
	field  goto 34
	comp_right  goto 124
	table_field  goto 125


state 106
	setinfo : field OPERATOR value .  (55)

	.  reduce 55


state 107
	value : insert_value .  (56)

	.  reduce 56


state 108
	setinfo : setinfo ',' field . OPERATOR value

	OPERATOR  shift 126


state 109
	conditions : conditions . OR conditions
	conditions : conditions . AND conditions
	updatesql : UPDATE table SET setinfo WHERE conditions . ';'

	';'  shift 127
	AND  shift 102
	OR  shift 103


state 110
	type : CHAR '(' . INTEGER ')'

	INTEGER  shift 128


state 111
	createtablesql : CREATE TABLE table '(' fieldsdefinition ')' ';' .  (14)

	.  reduce 14


state 112
	fieldsdefinition : fieldsdefinition ',' field_type .  (16)

	.  reduce 16


state 113
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES . '(' insert_values ')' ';'

	'('  shift 129


state 114
	insert_fields : insert_fields ',' field .  (45)

	.  reduce 45


state 115
	insertsql : INSERT INTO table VALUES '(' insert_values ')' . ';'

	';'  shift 130


state 116
	insert_values : insert_values ',' . insert_value

	INTEGER  shift 93
	FLOAT  shift 94
	STRING  shift 95

	insert_value  goto 131


state 117
	selectsql : SELECT fields_star FROM tables WHERE conditions ';' .  (23)

	.  reduce 23


state 118
	conditions : '(' conditions ')' .  (33)

	.  reduce 33


state 119
	conditions : conditions . OR conditions
	conditions : conditions AND conditions .  (34)
	conditions : conditions . AND conditions

	.  reduce 34


state 120
	conditions : conditions OR conditions .  (35)
	conditions : conditions . OR conditions
	conditions : conditions . AND conditions

	.  reduce 35


state 121
	comp_right : INTEGER .  (39)

	.  reduce 39


state 122
	comp_right : FLOAT .  (40)

	.  reduce 40


state 123
	comp_right : STRING .  (41)

	.  reduce 41


state 124
	condition : comp_left comp_op comp_right .  (36)

	.  reduce 36


state 125
	comp_right : table_field .  (38)

	.  reduce 38


state 126
	setinfo : setinfo ',' field OPERATOR . value

	INTEGER  shift 93
	FLOAT  shift 94
	STRING  shift 95

	value  goto 132
	insert_value  goto 107


state 127
	updatesql : UPDATE table SET setinfo WHERE conditions ';' .  (53)

	.  reduce 53


state 128
	type : CHAR '(' INTEGER . ')'

	')'  shift 133


state 129
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' . insert_values ')' ';'

	INTEGER  shift 93
	FLOAT  shift 94
	STRING  shift 95

	insert_values  goto 134
	insert_value  goto 97


state 130
	insertsql : INSERT INTO table VALUES '(' insert_values ')' ';' .  (44)

	.  reduce 44


state 131
	insert_values : insert_values ',' insert_value .  (47)

	.  reduce 47


state 132
	setinfo : setinfo ',' field OPERATOR value .  (54)

	.  reduce 54


state 133
	type : CHAR '(' INTEGER ')' .  (20)

	.  reduce 20


state 134
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values . ')' ';'
	insert_values : insert_values . ',' insert_value

	')'  shift 135
	','  shift 116


state 135
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' . ';'

	';'  shift 136


state 136
	insertsql : INSERT INTO table '(' insert_fields ')' VALUES '(' insert_values ')' ';' .  (43)

	.  reduce 43


##############################################################################
# Summary
##############################################################################

34 token(s), 34 nonterminal(s)
64 grammar rule(s), 137 state(s)


##############################################################################
# End of File
##############################################################################
