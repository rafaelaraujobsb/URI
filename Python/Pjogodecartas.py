d,v = map(int, input().split())
dc = list(map(int, input().split()))
dc.sort(reverse=True)
vc = list(map(int, input().split()))
vc.sort(reverse=True)

if d<v: menor=d 
else: menor=v

pd=0
pv=0

for i in range(menor):
	if dc[i]>vc[i]:
		pd += 1
	else: pv += 1

print("{} {}".format(pd,pv))
