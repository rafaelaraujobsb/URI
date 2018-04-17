#!/usr/bin/python
try:
	while True:
		t=0
		input()
		v = input().split()

		for i in v:
			t += int(i[-1])

		if len(str(t)) > 2:
			t = int(str(t)[-1])

		print(str(t%2))
		print("")
except EOFError:
	pass
