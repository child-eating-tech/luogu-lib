//http://ybt.ssoier.cn:8088/problem_show.php?pid=1320
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m[n],a[n],avg,total=0;
	for(int i=0;i<n;i++)
		cin>>m[i];
	for(int i=0;i<n;i++)
		total+=m[i];
	avg=total/n;
	for(int i=0;i<n;i++)
		a[i]=avg;
	
}