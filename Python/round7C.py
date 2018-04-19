s = input()
s = s.replace("WUB", " ")
s = s.split()
ns = ""

for a in s:
	ns+=a + " "

ns.rstrip()

print(ns)
