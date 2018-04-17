input()
v = list(map(int, input().split(" ")))

d=0
t=0
q=0
c=0

for i in v:
	if i%2 == 0:
		d += 1
	if i%3 == 0:
		t += 1
	if i%4 == 0:
		q += 1
	if i%5 == 0:
		c += 1

print("{} Multiplo(s) de 2\n{} Multiplo(s) de 3\n{} Multiplo(s) de 4\n{} Multiplo(s) de 5".format(d,t,q,c))
