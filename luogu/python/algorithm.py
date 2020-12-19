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
