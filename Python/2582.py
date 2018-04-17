#!/usr/bin/python
i=0
album = { 0:'PROXYCITY',
	1:'P.Y.N.G.',
	2:'DNSUEY!',
	3:'SERVERS',
	4:'HOST!',
	5:'CRIPTONIZE',
	6:'OFFLINE DAY',
	7:'SALT',
	8:'ANSWER!',
	9:'RAR?',
	10:'WIFI ANTENNAS'}

n = int(input())

while i < n:
	l = input()
	print(str(album[int(l[0])+int(l[2])]))
	i += 1
