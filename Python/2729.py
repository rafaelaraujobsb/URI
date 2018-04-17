n = int(input())

for _ in range(n):
	lc = set()

	s = input().split()

	for i in s:
		lc.add(i)

	lc = sorted(lc)

	print(' '.join(lc))

