#!/usr/bin/python

n = int(input())

for _ in range(n):
	s = input()
	s = s.replace(" ","")[:12]

	password = ""

	for c in s:
		if c in 'GQaku':
			password += '0'
		elif c in 'ISblv':
			password += '1'
		elif c in 'EOYcmw':
			password += '2'
		elif c in 'FPZdnx':
			password += '3'
		elif c in 'JYeoy':
			password += '4'
		elif c in 'DNXfpz':
			password += '5'
		elif c in 'AKUgq':
			password += '6'
		elif c in 'CMWhr':
			password += '7'
		elif c in 'BLVis':
			password += '8'
		elif c in 'HRjt':
			password += '9'

	print(password)
