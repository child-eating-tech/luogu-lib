#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[11];
	int b;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>b;
	int h=b+30;
	int n=0;
	for(int i=0;i<10;i++)
		n+=(h>=a[i])?1:0;
	cout<<n;
	return 0;
} 
