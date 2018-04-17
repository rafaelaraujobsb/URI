#!/usr/bin/python

n = int(input())

i = 0

t = 0

led = {
	'0':6,
	'1':2,
	'2':5,
	'3':5,
	'4':4,
	'5':5,
	'6':6,
	'7':3,
	'8':7,
	'9':6
	}

while i < n:
	num = input()

	for c in num:
		t += led[c]

	i+=1;

	print("{} leds".format(t))
