#!/usr/bin/python
# coding=utf-8
# (C)Leo Li 2020. All Rights Reserved.
def gcd(a,b):
	if a<b:
		a,b=b,a
	if b==0:
		return a
	else:
		r=a%b
		a=b
		b=r
		gcd(a,b)

def quicksort(*a,l,r):
	if l>r:
		return
	tmp=a[l]
	i=l
	j=r
	while i != j:
		while a[j]>=tmp and i<j:
			j-=1
		while a[i]<=tmp and i<j:
			i+=1
		if i<j:
			a[i],a[j]=a[j],a[i]