while True:
	n = int(input())

	if n == 0:
		break

	i=1
	p=1
	for t in range(1,n+1):
		if t == 1:
			print("1", end="")

		i += 2
		p += i

		if p > n:
			break
		else:
			print(" {}".format(p), end="")
	print("")
