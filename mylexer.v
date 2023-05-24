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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 05/24/23
# Time: 09:18:59
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

   10  CREATE

   11  DATABASE

   12  SHOW

   13  DATABASES

   14  DROP

   15  USE

   16  TABLE

   17  CHAR

   18  INT

   19  TABLES

   20  INSERT

   21  INTO

   22  VALUES

   23  SELECT

   24  FROM

   25  WHERE

   26  AND

   27  OR

   28  DELETE

   29  UPDATE

   30  SET

   31  [0-9]+

   32  [0-9]+("."[0-9]+)?(E[+-]?[0-9]+)?

   33  [a-zA-Z_]([a-zA-Z_]|[0-9]|_)*

   34  \"[^\"]*\"

   35  \'[^\']*\'


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x22               goto 3
	0x27               goto 4
	0x28               goto 5
	0x29               goto 6
	0x2a               goto 7
	0x2b               goto 8
	0x2c               goto 9
	0x2d               goto 10
	0x2e               goto 11
	0x2f               goto 12
	0x30 - 0x39 (10)   goto 13
	0x3b               goto 14
	0x41               goto 15
	0x42               goto 16
	0x43               goto 17
	0x44               goto 18
	0x45               goto 16
	0x46               goto 19
	0x47 - 0x48 (2)    goto 16
	0x49               goto 20
	0x4a - 0x4e (5)    goto 16
	0x4f               goto 21
	0x50 - 0x52 (3)    goto 16
	0x53               goto 22
	0x54               goto 23
	0x55               goto 24
	0x56               goto 25
	0x57               goto 26
	0x58 - 0x5a (3)    goto 16
	0x5f               goto 16
	0x61               goto 15
	0x62               goto 16
	0x63               goto 17
	0x64               goto 18
	0x65               goto 16
	0x66               goto 19
	0x67 - 0x68 (2)    goto 16
	0x69               goto 20
	0x6a - 0x6e (5)    goto 16
	0x6f               goto 21
	0x70 - 0x72 (3)    goto 16
	0x73               goto 22
	0x74               goto 23
	0x75               goto 24
	0x76               goto 25
	0x77               goto 26
	0x78 - 0x7a (3)    goto 16


state 2
	^INITIAL

	0x22               goto 3
	0x27               goto 4
	0x28               goto 5
	0x29               goto 6
	0x2a               goto 7
	0x2b               goto 8
	0x2c               goto 9
	0x2d               goto 10
	0x2e               goto 11
	0x2f               goto 12
	0x30 - 0x39 (10)   goto 13
	0x3b               goto 14
	0x41               goto 15
	0x42               goto 16
	0x43               goto 17
	0x44               goto 18
	0x45               goto 16
	0x46               goto 19
	0x47 - 0x48 (2)    goto 16
	0x49               goto 20
	0x4a - 0x4e (5)    goto 16
	0x4f               goto 21
	0x50 - 0x52 (3)    goto 16
	0x53               goto 22
	0x54               goto 23
	0x55               goto 24
	0x56               goto 25
	0x57               goto 26
	0x58 - 0x5a (3)    goto 16
	0x5f               goto 16
	0x61               goto 15
	0x62               goto 16
	0x63               goto 17
	0x64               goto 18
	0x65               goto 16
	0x66               goto 19
	0x67 - 0x68 (2)    goto 16
	0x69               goto 20
	0x6a - 0x6e (5)    goto 16
	0x6f               goto 21
	0x70 - 0x72 (3)    goto 16
	0x73               goto 22
	0x74               goto 23
	0x75               goto 24
	0x76               goto 25
	0x77               goto 26
	0x78 - 0x7a (3)    goto 16


state 3
	0x00 - 0x21 (34)   goto 3
	0x22               goto 27
	0x23 - 0xff (221)  goto 3


state 4
	0x00 - 0x26 (39)   goto 4
	0x27               goto 28
	0x28 - 0xff (216)  goto 4


state 5
	match 1


state 6
	match 2


state 7
	match 6


state 8
	match 4


state 9
	match 3


state 10
	match 5


state 11
	match 8


state 12
	match 7


state 13
	0x2e               goto 29
	0x30 - 0x39 (10)   goto 13
	0x45               goto 30
	0x65               goto 30

	match 31


state 14
	match 9


state 15
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4d (13)   goto 16
	0x4e               goto 31
	0x4f - 0x5a (12)   goto 16
	0x5f               goto 16
	0x61 - 0x6d (13)   goto 16
	0x6e               goto 31
	0x6f - 0x7a (12)   goto 16

	match 33


state 16
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 33


state 17
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x47 (7)    goto 16
	0x48               goto 32
	0x49 - 0x51 (9)    goto 16
	0x52               goto 33
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61 - 0x67 (7)    goto 16
	0x68               goto 32
	0x69 - 0x71 (9)    goto 16
	0x72               goto 33
	0x73 - 0x7a (8)    goto 16

	match 33


state 18
	0x30 - 0x39 (10)   goto 16
	0x41               goto 34
	0x42 - 0x44 (3)    goto 16
	0x45               goto 35
	0x46 - 0x51 (12)   goto 16
	0x52               goto 36
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61               goto 34
	0x62 - 0x64 (3)    goto 16
	0x65               goto 35
	0x66 - 0x71 (12)   goto 16
	0x72               goto 36
	0x73 - 0x7a (8)    goto 16

	match 33


state 19
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x51 (17)   goto 16
	0x52               goto 37
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61 - 0x71 (17)   goto 16
	0x72               goto 37
	0x73 - 0x7a (8)    goto 16

	match 33


state 20
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4d (13)   goto 16
	0x4e               goto 38
	0x4f - 0x5a (12)   goto 16
	0x5f               goto 16
	0x61 - 0x6d (13)   goto 16
	0x6e               goto 38
	0x6f - 0x7a (12)   goto 16

	match 33


state 21
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x51 (17)   goto 16
	0x52               goto 39
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61 - 0x71 (17)   goto 16
	0x72               goto 39
	0x73 - 0x7a (8)    goto 16

	match 33


state 22
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 40
	0x46 - 0x47 (2)    goto 16
	0x48               goto 41
	0x49 - 0x5a (18)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 40
	0x66 - 0x67 (2)    goto 16
	0x68               goto 41
	0x69 - 0x7a (18)   goto 16

	match 33


state 23
	0x30 - 0x39 (10)   goto 16
	0x41               goto 42
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 42
	0x62 - 0x7a (25)   goto 16

	match 33


state 24
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4f (15)   goto 16
	0x50               goto 43
	0x51 - 0x52 (2)    goto 16
	0x53               goto 44
	0x54 - 0x5a (7)    goto 16
	0x5f               goto 16
	0x61 - 0x6f (15)   goto 16
	0x70               goto 43
	0x71 - 0x72 (2)    goto 16
	0x73               goto 44
	0x74 - 0x7a (7)    goto 16

	match 33


state 25
	0x30 - 0x39 (10)   goto 16
	0x41               goto 45
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 45
	0x62 - 0x7a (25)   goto 16

	match 33


state 26
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x47 (7)    goto 16
	0x48               goto 46
	0x49 - 0x5a (18)   goto 16
	0x5f               goto 16
	0x61 - 0x67 (7)    goto 16
	0x68               goto 46
	0x69 - 0x7a (18)   goto 16

	match 33


state 27
	match 34


state 28
	match 35


state 29
	0x30 - 0x39 (10)   goto 47


state 30
	0x2b               goto 48
	0x2d               goto 48
	0x30 - 0x39 (10)   goto 49


state 31
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x43 (3)    goto 16
	0x44               goto 50
	0x45 - 0x5a (22)   goto 16
	0x5f               goto 16
	0x61 - 0x63 (3)    goto 16
	0x64               goto 50
	0x65 - 0x7a (22)   goto 16

	match 33


state 32
	0x30 - 0x39 (10)   goto 16
	0x41               goto 51
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 51
	0x62 - 0x7a (25)   goto 16

	match 33


state 33
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 52
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 52
	0x66 - 0x7a (21)   goto 16

	match 33


state 34
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x53 (19)   goto 16
	0x54               goto 53
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x73 (19)   goto 16
	0x74               goto 53
	0x75 - 0x7a (6)    goto 16

	match 33


state 35
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4b (11)   goto 16
	0x4c               goto 54
	0x4d - 0x5a (14)   goto 16
	0x5f               goto 16
	0x61 - 0x6b (11)   goto 16
	0x6c               goto 54
	0x6d - 0x7a (14)   goto 16

	match 33


state 36
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4e (14)   goto 16
	0x4f               goto 55
	0x50 - 0x5a (11)   goto 16
	0x5f               goto 16
	0x61 - 0x6e (14)   goto 16
	0x6f               goto 55
	0x70 - 0x7a (11)   goto 16

	match 33


state 37
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4e (14)   goto 16
	0x4f               goto 56
	0x50 - 0x5a (11)   goto 16
	0x5f               goto 16
	0x61 - 0x6e (14)   goto 16
	0x6f               goto 56
	0x70 - 0x7a (11)   goto 16

	match 33


state 38
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x52 (18)   goto 16
	0x53               goto 57
	0x54               goto 58
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x72 (18)   goto 16
	0x73               goto 57
	0x74               goto 58
	0x75 - 0x7a (6)    goto 16

	match 33


state 39
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 27


state 40
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4b (11)   goto 16
	0x4c               goto 59
	0x4d - 0x53 (7)    goto 16
	0x54               goto 60
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x6b (11)   goto 16
	0x6c               goto 59
	0x6d - 0x73 (7)    goto 16
	0x74               goto 60
	0x75 - 0x7a (6)    goto 16

	match 33


state 41
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4e (14)   goto 16
	0x4f               goto 61
	0x50 - 0x5a (11)   goto 16
	0x5f               goto 16
	0x61 - 0x6e (14)   goto 16
	0x6f               goto 61
	0x70 - 0x7a (11)   goto 16

	match 33


state 42
	0x30 - 0x39 (10)   goto 16
	0x41               goto 16
	0x42               goto 62
	0x43 - 0x5a (24)   goto 16
	0x5f               goto 16
	0x61               goto 16
	0x62               goto 62
	0x63 - 0x7a (24)   goto 16

	match 33


state 43
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x43 (3)    goto 16
	0x44               goto 63
	0x45 - 0x5a (22)   goto 16
	0x5f               goto 16
	0x61 - 0x63 (3)    goto 16
	0x64               goto 63
	0x65 - 0x7a (22)   goto 16

	match 33


state 44
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 64
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 64
	0x66 - 0x7a (21)   goto 16

	match 33


state 45
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4b (11)   goto 16
	0x4c               goto 65
	0x4d - 0x5a (14)   goto 16
	0x5f               goto 16
	0x61 - 0x6b (11)   goto 16
	0x6c               goto 65
	0x6d - 0x7a (14)   goto 16

	match 33


state 46
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 66
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 66
	0x66 - 0x7a (21)   goto 16

	match 33


state 47
	0x30 - 0x39 (10)   goto 47
	0x45               goto 30
	0x65               goto 30

	match 32


state 48
	0x30 - 0x39 (10)   goto 49


state 49
	0x30 - 0x39 (10)   goto 49

	match 32


state 50
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 26


state 51
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x51 (17)   goto 16
	0x52               goto 67
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61 - 0x71 (17)   goto 16
	0x72               goto 67
	0x73 - 0x7a (8)    goto 16

	match 33


state 52
	0x30 - 0x39 (10)   goto 16
	0x41               goto 68
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 68
	0x62 - 0x7a (25)   goto 16

	match 33


state 53
	0x30 - 0x39 (10)   goto 16
	0x41               goto 69
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 69
	0x62 - 0x7a (25)   goto 16

	match 33


state 54
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 70
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 70
	0x66 - 0x7a (21)   goto 16

	match 33


state 55
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4f (15)   goto 16
	0x50               goto 71
	0x51 - 0x5a (10)   goto 16
	0x5f               goto 16
	0x61 - 0x6f (15)   goto 16
	0x70               goto 71
	0x71 - 0x7a (10)   goto 16

	match 33


state 56
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4c (12)   goto 16
	0x4d               goto 72
	0x4e - 0x5a (13)   goto 16
	0x5f               goto 16
	0x61 - 0x6c (12)   goto 16
	0x6d               goto 72
	0x6e - 0x7a (13)   goto 16

	match 33


state 57
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 73
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 73
	0x66 - 0x7a (21)   goto 16

	match 33


state 58
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4e (14)   goto 16
	0x4f               goto 74
	0x50 - 0x5a (11)   goto 16
	0x5f               goto 16
	0x61 - 0x6e (14)   goto 16
	0x6f               goto 74
	0x70 - 0x7a (11)   goto 16

	match 18


state 59
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 75
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 75
	0x66 - 0x7a (21)   goto 16

	match 33


state 60
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 30


state 61
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x56 (22)   goto 16
	0x57               goto 76
	0x58 - 0x5a (3)    goto 16
	0x5f               goto 16
	0x61 - 0x76 (22)   goto 16
	0x77               goto 76
	0x78 - 0x7a (3)    goto 16

	match 33


state 62
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x4b (11)   goto 16
	0x4c               goto 77
	0x4d - 0x5a (14)   goto 16
	0x5f               goto 16
	0x61 - 0x6b (11)   goto 16
	0x6c               goto 77
	0x6d - 0x7a (14)   goto 16

	match 33


state 63
	0x30 - 0x39 (10)   goto 16
	0x41               goto 78
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 78
	0x62 - 0x7a (25)   goto 16

	match 33


state 64
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 15


state 65
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x54 (20)   goto 16
	0x55               goto 79
	0x56 - 0x5a (5)    goto 16
	0x5f               goto 16
	0x61 - 0x74 (20)   goto 16
	0x75               goto 79
	0x76 - 0x7a (5)    goto 16

	match 33


state 66
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x51 (17)   goto 16
	0x52               goto 80
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61 - 0x71 (17)   goto 16
	0x72               goto 80
	0x73 - 0x7a (8)    goto 16

	match 33


state 67
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 17


state 68
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x53 (19)   goto 16
	0x54               goto 81
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x73 (19)   goto 16
	0x74               goto 81
	0x75 - 0x7a (6)    goto 16

	match 33


state 69
	0x30 - 0x39 (10)   goto 16
	0x41               goto 16
	0x42               goto 82
	0x43 - 0x5a (24)   goto 16
	0x5f               goto 16
	0x61               goto 16
	0x62               goto 82
	0x63 - 0x7a (24)   goto 16

	match 33


state 70
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x53 (19)   goto 16
	0x54               goto 83
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x73 (19)   goto 16
	0x74               goto 83
	0x75 - 0x7a (6)    goto 16

	match 33


state 71
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 14


state 72
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 24


state 73
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x51 (17)   goto 16
	0x52               goto 84
	0x53 - 0x5a (8)    goto 16
	0x5f               goto 16
	0x61 - 0x71 (17)   goto 16
	0x72               goto 84
	0x73 - 0x7a (8)    goto 16

	match 33


state 74
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 21


state 75
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x42 (2)    goto 16
	0x43               goto 85
	0x44 - 0x5a (23)   goto 16
	0x5f               goto 16
	0x61 - 0x62 (2)    goto 16
	0x63               goto 85
	0x64 - 0x7a (23)   goto 16

	match 33


state 76
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 12


state 77
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 86
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 86
	0x66 - 0x7a (21)   goto 16

	match 33


state 78
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x53 (19)   goto 16
	0x54               goto 87
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x73 (19)   goto 16
	0x74               goto 87
	0x75 - 0x7a (6)    goto 16

	match 33


state 79
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 88
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 88
	0x66 - 0x7a (21)   goto 16

	match 33


state 80
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 89
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 89
	0x66 - 0x7a (21)   goto 16

	match 33


state 81
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 90
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 90
	0x66 - 0x7a (21)   goto 16

	match 33


state 82
	0x30 - 0x39 (10)   goto 16
	0x41               goto 91
	0x42 - 0x5a (25)   goto 16
	0x5f               goto 16
	0x61               goto 91
	0x62 - 0x7a (25)   goto 16

	match 33


state 83
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 92
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 92
	0x66 - 0x7a (21)   goto 16

	match 33


state 84
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x53 (19)   goto 16
	0x54               goto 93
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x73 (19)   goto 16
	0x74               goto 93
	0x75 - 0x7a (6)    goto 16

	match 33


state 85
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x53 (19)   goto 16
	0x54               goto 94
	0x55 - 0x5a (6)    goto 16
	0x5f               goto 16
	0x61 - 0x73 (19)   goto 16
	0x74               goto 94
	0x75 - 0x7a (6)    goto 16

	match 33


state 86
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x52 (18)   goto 16
	0x53               goto 95
	0x54 - 0x5a (7)    goto 16
	0x5f               goto 16
	0x61 - 0x72 (18)   goto 16
	0x73               goto 95
	0x74 - 0x7a (7)    goto 16

	match 16


state 87
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 96
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 96
	0x66 - 0x7a (21)   goto 16

	match 33


state 88
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x52 (18)   goto 16
	0x53               goto 97
	0x54 - 0x5a (7)    goto 16
	0x5f               goto 16
	0x61 - 0x72 (18)   goto 16
	0x73               goto 97
	0x74 - 0x7a (7)    goto 16

	match 33


state 89
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 25


state 90
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 10


state 91
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x52 (18)   goto 16
	0x53               goto 98
	0x54 - 0x5a (7)    goto 16
	0x5f               goto 16
	0x61 - 0x72 (18)   goto 16
	0x73               goto 98
	0x74 - 0x7a (7)    goto 16

	match 33


state 92
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 28


state 93
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 20


state 94
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 23


state 95
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 19


state 96
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 29


state 97
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 22


state 98
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x44 (4)    goto 16
	0x45               goto 99
	0x46 - 0x5a (21)   goto 16
	0x5f               goto 16
	0x61 - 0x64 (4)    goto 16
	0x65               goto 99
	0x66 - 0x7a (21)   goto 16

	match 33


state 99
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x52 (18)   goto 16
	0x53               goto 100
	0x54 - 0x5a (7)    goto 16
	0x5f               goto 16
	0x61 - 0x72 (18)   goto 16
	0x73               goto 100
	0x74 - 0x7a (7)    goto 16

	match 11


state 100
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 16
	0x5f               goto 16
	0x61 - 0x7a (26)   goto 16

	match 13


#############################################################################
# Summary
#############################################################################

1 start state(s)
35 expression(s), 100 state(s)


#############################################################################
# End of File
#############################################################################
