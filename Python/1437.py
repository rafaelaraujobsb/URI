b = ['N','L','S','O']
while True:

	n = input()

	if n == '0':
		break

	s = input()

	t = 0

	for d in s:
		if d == 'D':
			t+=1
		else:
			t-=1

		if -3<t>3:
			t = 0

	print(b[t])
