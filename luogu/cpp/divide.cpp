#include<bits/stdc++.h>
using namespace std;
int main(){
	int p,n;
	long long count;
	cin>>n>>p;
	count=2*p;
	for(int i=p+1;i<=n;i++)
		count+=i;
	cout<<count;
	return 0;
}