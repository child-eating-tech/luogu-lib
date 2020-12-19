#include<bits/stdc++.h>
using namespace std;
int f(int x, int n){
	if(n==1) return sqrt(n+x);
	else return sqrt(f(x,n-1)+n);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<f(a,b);
	return 0;
}