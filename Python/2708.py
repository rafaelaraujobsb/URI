#!/usr/bin/python

controle = {'j':0, 't':0}

while True:
	s = input().split()

	if s[0] == "ABEND":
		break

	if s[0] == "SALIDA":
		controle['j'] += 1
		controle['t'] += int(s[1])
	else:
		controle['j'] -= 1
		controle['t'] -= int(s[1])

print("{}\n{}".format(controle['t'], controle['j']))
