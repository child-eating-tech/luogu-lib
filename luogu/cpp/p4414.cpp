#include<bits/stdc++.h>
using namespace std;

int main(){
	int n[5];
	for(int i=0;i<=2;i++)
		cin>>n[i];
	sort(n,n+3);
//	cout<<n[0]<<n[1]<<n[2];
	char a,b,c;
	cin>>a>>b>>c;
//	scanf("%c%c%c",&a,&b,&c);
	switch(a){
		case 'A':
			cout<<n[0]<<" ";
			break;
		case 'B':
			cout<<n[1]<<" ";
			break;
		case 'C':
			cout<<n[2]<<" ";
		
		default:
			break;
	}
	switch(b){
		case 'A':
			cout<<n[0]<<" ";
			break;
		case 'B':
			cout<<n[1]<<" ";
			break;
		case 'C':
			cout<<n[2]<<" ";
			break;
		default:
			break;
	}
	switch(c){
		case 'A':
			cout<<n[0];
			break;
		case 'B':
			cout<<n[1];
			break;
		case 'C':
			cout<<n[2];
			break;
		default:
			break;
	}
	return 0;
}
