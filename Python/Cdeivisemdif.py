n = int(input())
l = list(map(int, input().split()))

m = 0

for i in range(n//2):
	if l[i] > l[i+1]: r = l[i] - l[i+1]
	else: r = l[i+1] - l[i]

	if m < r: m = r

print(str(m))
