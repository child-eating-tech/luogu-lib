//http://ybt.ssoier.cn:8088/problem_show.php?pid=1188
#include<bits/stdc++.h>
using namespace std;
long long fibonacci(int a){
	long long f[a+5];
	memset(f,0,sizeof(f));
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=a+1;i++)
		f[i]=f[i-2]+f[i-1];
	return f[a];
}
int main(){
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>n;
		cout<<fibonacci(n)%1000;
	}
	return 0;
}