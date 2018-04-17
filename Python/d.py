import random

s = ""

for _ in range(1000):
	x = random.randint(0,1)

	if int(x) == 1:
		s += "<"
	else:
		s += ">"

print(s)
