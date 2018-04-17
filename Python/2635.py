#!/usr/bin/python

pesquisas = []

n = int(input())

for _ in range(n):
	pesquisas.append(input())

i = int(input())

for _ in range(i):
	sug = 0
	maior = 0

	d = input()

	for resultado in pesquisas:
		if d == resultado[:len(d)]:
			sug += 1

			if maior < len(resultado):
				maior = len(resultado)

	if sug == 0:
		print("-1")
	else:
		print("{} {}".format(sug, maior))
