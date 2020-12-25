#include<bits/stdc++.h>
using namespace std;
void mv(int n,char src,char mid,char dest){
	if(n==1){
		cout<<src<<"->"<<dest<<endl;
		return;
	}
	else{
		mv(n-1,src,dest,mid);
		cout<<src<<"->"<<dest<<endl;
		mv(n-1,mid,src,dest);
	}
}
int main(){
	long long num;
	char a,b,c;
	cin>>num>>a>>b>>c;
	mv(num,a,b,c);
	return 0;
}