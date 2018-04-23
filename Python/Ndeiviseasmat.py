n = int(input())
m = {}

for i in range(n):
	m[input()] = 0

i=0
for n in sorted(m):
	m[n] = i
	i += 1

for v in m.values():
	print(str(v), end=" ")

print()
