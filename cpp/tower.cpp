#include<bits/stdc++.h>
using namespace std;
int main(){
	int twr[5][5]={{9},{12,15},{10,6,8},{2,18,9,5},{19,7,10,4,16}};
	// for(int i=0;i<5;i++){
	// 	for(int j=0;j<i;j++){
	// 		cout<<twr[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	for(int i=3;i>=0;i--)
		for(int j=i;j>=0;j--)
			twr[i][j]+=max(twr[i+1][j],twr[i+1][j+1]);
	
	cout<<twr[0][0];
}