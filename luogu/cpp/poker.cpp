#include<bits/stdc++.h>
using namespace std;
void bitswap(bool &a){
	a=!a;
}
int main(){
	bool poker[53];
	int stat=0;
	memset(poker,1,sizeof(poker));
	for(int i=1;i<=52;i++)
		for(int j=1;i*j<=52;j++)
			bitswap(poker[i*j]);
	for(int i=1;i<=52;i++)
		if(poker[i])
			stat++;
	cout<<stat;
}