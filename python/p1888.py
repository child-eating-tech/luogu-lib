def gcd(a,b):
	if b!=0:
		return gcd(b,a%b)
	else:
		return a

a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
xian1=int(max(a,b))
xian=max(xian1,c)
gou1=int(min(a,b))
gou=min(gou1,c)
gcd=gcd(gou,xian)
xian/=gcd
gou/=gcd
xian=int(xian)
gou=int(gou)
print(str(gou)+"/"+str(xian))
