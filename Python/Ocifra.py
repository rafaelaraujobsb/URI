s = input()
p = input()
r=""

for i in s:
	v = ord(i) - 97 #valor do a
	r += p[v]

print(r)
