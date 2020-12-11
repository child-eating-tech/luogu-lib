#include<bits/stdc++.h>
using namespace std;
int getpeaches(int a){
	int y=1;
	for(int i=0;i<a-1;i++) y+=(a+1)*2;
	return y;
}
int main(){
	int days;
	cin>>days;
	cout<<getpeaches(days);
}