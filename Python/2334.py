#!/usr/bin/python

while True:
	n = int(input())
	if n < 0:
		 break

	if n == 0:
		print("0")
	else:
		print("%s" %(n-1))
