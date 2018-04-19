#!/usr/bin/Python

n = int(input())

if n != 0:
	j1, j2 = 0, 0
	r = []

	for i in range(n):
		r = input().split()

		if int(r[0]) > int(r[1]):
			j1 += 1
		elif int(r[0]) < int(r[1]):
			j2 += 1

	print("{} {}".format(j1,j2))


