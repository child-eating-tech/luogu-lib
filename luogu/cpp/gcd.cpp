#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	int r;
	if(b==0) return a;
	else{
		r=a%b;
		a=b;
		b=r;
		gcd(a,b);
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	if(m<=n) swap(m,n);
	cout<<gcd(m,n);
}