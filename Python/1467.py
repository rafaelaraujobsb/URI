#!/usr/bin/python
try:
	while True:
		n = list(map(int, input().split()))

		if n[0] != n[1] and n[0] != n[2]:
			v = "A"
		elif n[1] != n[0] and n[1] != n[2]:
			v = "B"
		elif n[2] != n[0] and n[2] != n[1]:
			v = "C"
		else:
			v = "*"

		print(v)
except:
	pass
