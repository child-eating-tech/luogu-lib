# http://noi.openjudge.cn/ch0202/3089/submit/
#!/usr/bin/python3
# coding=utf-8
n = int(input())
a=1
b=1
n-=1
if n > 0:
    while n>0:
        c=a+b
        a=b
        b=c
        n-=1
    print(b)
elif n == 0:
        print(a)
else:
    a-=1
    print(a)