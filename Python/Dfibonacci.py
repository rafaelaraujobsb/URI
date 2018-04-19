n = int(input())

if n == 0: r = 0
else: r = 1

if n > 2:
	r = 1
	ant = 1

	for i in range(2,n):
		aux = r
		r += ant
		ant = aux

print(str(r))

