n=int(input())
a=[0]
ans=2147483647
for i in range(0,3):
    (x,y)=map(int,input().split())
    a.append(x)
    a.append(y)
    num=0
    cost=0
    while num<n:
        num+=a[1]
        cost+=a[2]
    if cost<ans:
        ans=cost
    a.pop()
    a.pop()
print(ans)