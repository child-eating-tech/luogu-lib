#!/usr/bin/python
#coding=utf-8

def function(a,b,c):
	if a<=0 or b<=0 or c<=0:
		return 1
	elif a>20 or b>20 or c>20:
		return function(20,20,20)
	elif a<b and b<c:
		return function(a,b,c-1)+function(a,b-1,c-1)+function(a,b-1,c)
	else:
		return function(a-1,b,c)+function(a-1,b-1,c)+function(a-1,b,c-1)+function(a-1,b-1,c-1)

while True:
	n1,n2,n3=input().split()
	n1=int(n1)
	n2=int(n2)
	n3=int(n3)
	print("w("+str(n1),str(n2),str(n3)+") =",str(function(n1,n2,n3)))
	if n1==-1 and n2==-1 and n3==-1:
		break