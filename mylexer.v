#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 53 of your 30 day trial period.
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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 06/05/23
# Time: 11:22:31
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "("

    2  ")"

    3  ","

    4  "+"

    5  "-"

    6  "*"

    7  "/"

    8  "."

    9  ";"

   10  "="

   11  ">"

   12  "<"

   13  "!="

   14  ">="

   15  "<="

   16  CREATE

   17  DATABASE

   18  SHOW

   19  DATABASES

   20  DROP

   21  USE

   22  TABLE

   23  CHAR

   24  INT

   25  TABLES

   26  INSERT

   27  INTO

   28  VALUES

   29  SELECT

   30  FROM

   31  WHERE

   32  AND

   33  OR

   34  DELETE

   35  UPDATE

   36  SET

   37  [0-9]+

   38  [0-9]+("."[0-9]+)?(E[+-]?[0-9]+)?

   39  [a-zA-Z_]([a-zA-Z_]|[0-9]|_)*

   40  \"[^\"]*\"

   41  \'[^\']*\'


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x21               goto 3
	0x22               goto 4
	0x27               goto 5
	0x28               goto 6
	0x29               goto 7
	0x2a               goto 8
	0x2b               goto 9
	0x2c               goto 10
	0x2d               goto 11
	0x2e               goto 12
	0x2f               goto 13
	0x30 - 0x39 (10)   goto 14
	0x3b               goto 15
	0x3c               goto 16
	0x3d               goto 17
	0x3e               goto 18
	0x41               goto 19
	0x42               goto 20
	0x43               goto 21
	0x44               goto 22
	0x45               goto 20
	0x46               goto 23
	0x47 - 0x48 (2)    goto 20
	0x49               goto 24
	0x4a - 0x4e (5)    goto 20
	0x4f               goto 25
	0x50 - 0x52 (3)    goto 20
	0x53               goto 26
	0x54               goto 27
	0x55               goto 28
	0x56               goto 29
	0x57               goto 30
	0x58 - 0x5a (3)    goto 20
	0x5f               goto 20
	0x61               goto 19
	0x62               goto 20
	0x63               goto 21
	0x64               goto 22
	0x65               goto 20
	0x66               goto 23
	0x67 - 0x68 (2)    goto 20
	0x69               goto 24
	0x6a - 0x6e (5)    goto 20
	0x6f               goto 25
	0x70 - 0x72 (3)    goto 20
	0x73               goto 26
	0x74               goto 27
	0x75               goto 28
	0x76               goto 29
	0x77               goto 30
	0x78 - 0x7a (3)    goto 20


state 2
	^INITIAL

	0x21               goto 3
	0x22               goto 4
	0x27               goto 5
	0x28               goto 6
	0x29               goto 7
	0x2a               goto 8
	0x2b               goto 9
	0x2c               goto 10
	0x2d               goto 11
	0x2e               goto 12
	0x2f               goto 13
	0x30 - 0x39 (10)   goto 14
	0x3b               goto 15
	0x3c               goto 16
	0x3d               goto 17
	0x3e               goto 18
	0x41               goto 19
	0x42               goto 20
	0x43               goto 21
	0x44               goto 22
	0x45               goto 20
	0x46               goto 23
	0x47 - 0x48 (2)    goto 20
	0x49               goto 24
	0x4a - 0x4e (5)    goto 20
	0x4f               goto 25
	0x50 - 0x52 (3)    goto 20
	0x53               goto 26
	0x54               goto 27
	0x55               goto 28
	0x56               goto 29
	0x57               goto 30
	0x58 - 0x5a (3)    goto 20
	0x5f               goto 20
	0x61               goto 19
	0x62               goto 20
	0x63               goto 21
	0x64               goto 22
	0x65               goto 20
	0x66               goto 23
	0x67 - 0x68 (2)    goto 20
	0x69               goto 24
	0x6a - 0x6e (5)    goto 20
	0x6f               goto 25
	0x70 - 0x72 (3)    goto 20
	0x73               goto 26
	0x74               goto 27
	0x75               goto 28
	0x76               goto 29
	0x77               goto 30
	0x78 - 0x7a (3)    goto 20


state 3
	0x3d               goto 31


state 4
	0x00 - 0x21 (34)   goto 4
	0x22               goto 32
	0x23 - 0xff (221)  goto 4


state 5
	0x00 - 0x26 (39)   goto 5
	0x27               goto 33
	0x28 - 0xff (216)  goto 5


state 6
	match 1


state 7
	match 2


state 8
	match 6


state 9
	match 4


state 10
	match 3


state 11
	match 5


state 12
	match 8


state 13
	match 7


state 14
	0x2e               goto 34
	0x30 - 0x39 (10)   goto 14
	0x45               goto 35
	0x65               goto 35

	match 37


state 15
	match 9


state 16
	0x3d               goto 36

	match 12


state 17
	match 10


state 18
	0x3d               goto 37

	match 11


state 19
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4d (13)   goto 20
	0x4e               goto 38
	0x4f - 0x5a (12)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 38
	0x6f - 0x7a (12)   goto 20

	match 39


state 20
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 39


state 21
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x47 (7)    goto 20
	0x48               goto 39
	0x49 - 0x51 (9)    goto 20
	0x52               goto 40
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 39
	0x69 - 0x71 (9)    goto 20
	0x72               goto 40
	0x73 - 0x7a (8)    goto 20

	match 39


state 22
	0x30 - 0x39 (10)   goto 20
	0x41               goto 41
	0x42 - 0x44 (3)    goto 20
	0x45               goto 42
	0x46 - 0x51 (12)   goto 20
	0x52               goto 43
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61               goto 41
	0x62 - 0x64 (3)    goto 20
	0x65               goto 42
	0x66 - 0x71 (12)   goto 20
	0x72               goto 43
	0x73 - 0x7a (8)    goto 20

	match 39


state 23
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x51 (17)   goto 20
	0x52               goto 44
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 44
	0x73 - 0x7a (8)    goto 20

	match 39


state 24
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4d (13)   goto 20
	0x4e               goto 45
	0x4f - 0x5a (12)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 45
	0x6f - 0x7a (12)   goto 20

	match 39


state 25
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x51 (17)   goto 20
	0x52               goto 46
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 46
	0x73 - 0x7a (8)    goto 20

	match 39


state 26
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 47
	0x46 - 0x47 (2)    goto 20
	0x48               goto 48
	0x49 - 0x5a (18)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 47
	0x66 - 0x67 (2)    goto 20
	0x68               goto 48
	0x69 - 0x7a (18)   goto 20

	match 39


state 27
	0x30 - 0x39 (10)   goto 20
	0x41               goto 49
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 49
	0x62 - 0x7a (25)   goto 20

	match 39


state 28
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4f (15)   goto 20
	0x50               goto 50
	0x51 - 0x52 (2)    goto 20
	0x53               goto 51
	0x54 - 0x5a (7)    goto 20
	0x5f               goto 20
	0x61 - 0x6f (15)   goto 20
	0x70               goto 50
	0x71 - 0x72 (2)    goto 20
	0x73               goto 51
	0x74 - 0x7a (7)    goto 20

	match 39


state 29
	0x30 - 0x39 (10)   goto 20
	0x41               goto 52
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 52
	0x62 - 0x7a (25)   goto 20

	match 39


state 30
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x47 (7)    goto 20
	0x48               goto 53
	0x49 - 0x5a (18)   goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 53
	0x69 - 0x7a (18)   goto 20

	match 39


state 31
	match 13


state 32
	match 40


state 33
	match 41


state 34
	0x30 - 0x39 (10)   goto 54


state 35
	0x2b               goto 55
	0x2d               goto 55
	0x30 - 0x39 (10)   goto 56


state 36
	match 15


state 37
	match 14


state 38
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x43 (3)    goto 20
	0x44               goto 57
	0x45 - 0x5a (22)   goto 20
	0x5f               goto 20
	0x61 - 0x63 (3)    goto 20
	0x64               goto 57
	0x65 - 0x7a (22)   goto 20

	match 39


state 39
	0x30 - 0x39 (10)   goto 20
	0x41               goto 58
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 58
	0x62 - 0x7a (25)   goto 20

	match 39


state 40
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 59
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 59
	0x66 - 0x7a (21)   goto 20

	match 39


state 41
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x53 (19)   goto 20
	0x54               goto 60
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 60
	0x75 - 0x7a (6)    goto 20

	match 39


state 42
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4b (11)   goto 20
	0x4c               goto 61
	0x4d - 0x5a (14)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 61
	0x6d - 0x7a (14)   goto 20

	match 39


state 43
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4e (14)   goto 20
	0x4f               goto 62
	0x50 - 0x5a (11)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 62
	0x70 - 0x7a (11)   goto 20

	match 39


state 44
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4e (14)   goto 20
	0x4f               goto 63
	0x50 - 0x5a (11)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 63
	0x70 - 0x7a (11)   goto 20

	match 39


state 45
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x52 (18)   goto 20
	0x53               goto 64
	0x54               goto 65
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 64
	0x74               goto 65
	0x75 - 0x7a (6)    goto 20

	match 39


state 46
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 33


state 47
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4b (11)   goto 20
	0x4c               goto 66
	0x4d - 0x53 (7)    goto 20
	0x54               goto 67
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 66
	0x6d - 0x73 (7)    goto 20
	0x74               goto 67
	0x75 - 0x7a (6)    goto 20

	match 39


state 48
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4e (14)   goto 20
	0x4f               goto 68
	0x50 - 0x5a (11)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 68
	0x70 - 0x7a (11)   goto 20

	match 39


state 49
	0x30 - 0x39 (10)   goto 20
	0x41               goto 20
	0x42               goto 69
	0x43 - 0x5a (24)   goto 20
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 69
	0x63 - 0x7a (24)   goto 20

	match 39


state 50
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x43 (3)    goto 20
	0x44               goto 70
	0x45 - 0x5a (22)   goto 20
	0x5f               goto 20
	0x61 - 0x63 (3)    goto 20
	0x64               goto 70
	0x65 - 0x7a (22)   goto 20

	match 39


state 51
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 71
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 71
	0x66 - 0x7a (21)   goto 20

	match 39


state 52
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4b (11)   goto 20
	0x4c               goto 72
	0x4d - 0x5a (14)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 72
	0x6d - 0x7a (14)   goto 20

	match 39


state 53
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 73
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 73
	0x66 - 0x7a (21)   goto 20

	match 39


state 54
	0x30 - 0x39 (10)   goto 54
	0x45               goto 35
	0x65               goto 35

	match 38


state 55
	0x30 - 0x39 (10)   goto 56


state 56
	0x30 - 0x39 (10)   goto 56

	match 38


state 57
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 32


state 58
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x51 (17)   goto 20
	0x52               goto 74
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 74
	0x73 - 0x7a (8)    goto 20

	match 39


state 59
	0x30 - 0x39 (10)   goto 20
	0x41               goto 75
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 75
	0x62 - 0x7a (25)   goto 20

	match 39


state 60
	0x30 - 0x39 (10)   goto 20
	0x41               goto 76
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 76
	0x62 - 0x7a (25)   goto 20

	match 39


state 61
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 77
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 77
	0x66 - 0x7a (21)   goto 20

	match 39


state 62
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4f (15)   goto 20
	0x50               goto 78
	0x51 - 0x5a (10)   goto 20
	0x5f               goto 20
	0x61 - 0x6f (15)   goto 20
	0x70               goto 78
	0x71 - 0x7a (10)   goto 20

	match 39


state 63
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4c (12)   goto 20
	0x4d               goto 79
	0x4e - 0x5a (13)   goto 20
	0x5f               goto 20
	0x61 - 0x6c (12)   goto 20
	0x6d               goto 79
	0x6e - 0x7a (13)   goto 20

	match 39


state 64
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 80
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 80
	0x66 - 0x7a (21)   goto 20

	match 39


state 65
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4e (14)   goto 20
	0x4f               goto 81
	0x50 - 0x5a (11)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 81
	0x70 - 0x7a (11)   goto 20

	match 24


state 66
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 82
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 82
	0x66 - 0x7a (21)   goto 20

	match 39


state 67
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 36


state 68
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x56 (22)   goto 20
	0x57               goto 83
	0x58 - 0x5a (3)    goto 20
	0x5f               goto 20
	0x61 - 0x76 (22)   goto 20
	0x77               goto 83
	0x78 - 0x7a (3)    goto 20

	match 39


state 69
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x4b (11)   goto 20
	0x4c               goto 84
	0x4d - 0x5a (14)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 84
	0x6d - 0x7a (14)   goto 20

	match 39


state 70
	0x30 - 0x39 (10)   goto 20
	0x41               goto 85
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 85
	0x62 - 0x7a (25)   goto 20

	match 39


state 71
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 21


state 72
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x54 (20)   goto 20
	0x55               goto 86
	0x56 - 0x5a (5)    goto 20
	0x5f               goto 20
	0x61 - 0x74 (20)   goto 20
	0x75               goto 86
	0x76 - 0x7a (5)    goto 20

	match 39


state 73
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x51 (17)   goto 20
	0x52               goto 87
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 87
	0x73 - 0x7a (8)    goto 20

	match 39


state 74
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 23


state 75
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x53 (19)   goto 20
	0x54               goto 88
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 88
	0x75 - 0x7a (6)    goto 20

	match 39


state 76
	0x30 - 0x39 (10)   goto 20
	0x41               goto 20
	0x42               goto 89
	0x43 - 0x5a (24)   goto 20
	0x5f               goto 20
	0x61               goto 20
	0x62               goto 89
	0x63 - 0x7a (24)   goto 20

	match 39


state 77
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x53 (19)   goto 20
	0x54               goto 90
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 90
	0x75 - 0x7a (6)    goto 20

	match 39


state 78
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 20


state 79
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 30


state 80
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x51 (17)   goto 20
	0x52               goto 91
	0x53 - 0x5a (8)    goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 91
	0x73 - 0x7a (8)    goto 20

	match 39


state 81
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 27


state 82
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x42 (2)    goto 20
	0x43               goto 92
	0x44 - 0x5a (23)   goto 20
	0x5f               goto 20
	0x61 - 0x62 (2)    goto 20
	0x63               goto 92
	0x64 - 0x7a (23)   goto 20

	match 39


state 83
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 18


state 84
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 93
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 93
	0x66 - 0x7a (21)   goto 20

	match 39


state 85
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x53 (19)   goto 20
	0x54               goto 94
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 94
	0x75 - 0x7a (6)    goto 20

	match 39


state 86
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 95
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 95
	0x66 - 0x7a (21)   goto 20

	match 39


state 87
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 96
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 96
	0x66 - 0x7a (21)   goto 20

	match 39


state 88
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 97
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 97
	0x66 - 0x7a (21)   goto 20

	match 39


state 89
	0x30 - 0x39 (10)   goto 20
	0x41               goto 98
	0x42 - 0x5a (25)   goto 20
	0x5f               goto 20
	0x61               goto 98
	0x62 - 0x7a (25)   goto 20

	match 39


state 90
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 99
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 99
	0x66 - 0x7a (21)   goto 20

	match 39


state 91
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x53 (19)   goto 20
	0x54               goto 100
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 100
	0x75 - 0x7a (6)    goto 20

	match 39


state 92
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x53 (19)   goto 20
	0x54               goto 101
	0x55 - 0x5a (6)    goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 101
	0x75 - 0x7a (6)    goto 20

	match 39


state 93
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x52 (18)   goto 20
	0x53               goto 102
	0x54 - 0x5a (7)    goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 102
	0x74 - 0x7a (7)    goto 20

	match 22


state 94
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 103
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 103
	0x66 - 0x7a (21)   goto 20

	match 39


state 95
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x52 (18)   goto 20
	0x53               goto 104
	0x54 - 0x5a (7)    goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 104
	0x74 - 0x7a (7)    goto 20

	match 39


state 96
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 31


state 97
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 16


state 98
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x52 (18)   goto 20
	0x53               goto 105
	0x54 - 0x5a (7)    goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 105
	0x74 - 0x7a (7)    goto 20

	match 39


state 99
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 34


state 100
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 26


state 101
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 29


state 102
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 25


state 103
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 35


state 104
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 28


state 105
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 20
	0x45               goto 106
	0x46 - 0x5a (21)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 106
	0x66 - 0x7a (21)   goto 20

	match 39


state 106
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x52 (18)   goto 20
	0x53               goto 107
	0x54 - 0x5a (7)    goto 20
	0x5f               goto 20
	0x61 - 0x72 (18)   goto 20
	0x73               goto 107
	0x74 - 0x7a (7)    goto 20

	match 17


state 107
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 19


#############################################################################
# Summary
#############################################################################

1 start state(s)
41 expression(s), 107 state(s)


#############################################################################
# End of File
#############################################################################
