//http://ybt.ssoier.cn:8088/problem_show.php?pid=1319
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t[n];
	double total=0;
	double avg;
	for(int i=0;i<n;i++)
		cin>>t[i];
	sort(t,t+n);
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
			total+=t[j];

	avg=total/n;
	printf("%.2lf",avg);
	return 0;
/*	for(int i=0;i<n;i++)
		cout<<t[i]<<endl;*/
}