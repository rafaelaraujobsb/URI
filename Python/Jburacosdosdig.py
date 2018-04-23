min, max = input().split()

def calcburaco(l):
	r=0
	if l == 0 or l == 6 or l == 9: r = 1
	elif l == 8: r = 2
	return r

maior = int(min)
nb = 1

for i in range(int(min), int(max)):
	r=0
	if i > 9:
		n = str(i)
		for j in range(len(n)):
			r += calcburaco(int(n[j]))
	else: r = calcburaco(i)

	if nb < r:
		nb = r
		maior = i

print(str(maior))
