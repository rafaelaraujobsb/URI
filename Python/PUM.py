#!/usr/bin/Python

e = int(input())

for i in range(1,e*4+1):
	if i%4 == 0:
		print("PUM")
	else:
		print("{}".format(i), end=" ")

