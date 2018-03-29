#!/usr/bin/python
l = []
n = int(input())
c = 0
m = 0
for _ in range(n):
	nome = input()

	if nome[0] == "+":
		c+=1
	else:
		 m+=1

	l.append(nome[2:])

l.sort()

for nome in l:
	print(nome)

print("Se comportaram: {} | Nao se comportaram: {}".format(c,m))
