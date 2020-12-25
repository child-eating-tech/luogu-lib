/*http://noi.openjudge.cn/ch0202/666/submit/*/
#include<bits/stdc++.h>
using namespace std;
int apple(int apples, int plates){
	if(apples==1||plates==1||apples==0)
		return 1;
	if(apples<plates)
		return apple(apples,apples);
	if(apples>=plates) 
		return apple(apples-plates,plates)+apple(apples,plates-1);
}
int main(){
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>m>>n;
		cout<<apple(m,n)<<endl;
	}
	return 0;
}