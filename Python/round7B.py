#!/bin/usr/Python

number = input()

for n in number:
	if n == '7' or n == '4':
		sort = 1
	else:
		sort = 0
		break;

if sort:
	print("YES")
else:
	print("NO")
