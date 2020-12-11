#include<bits/stdc++.h>
using namespace std;
int main(){
	float distance;
	cin>>distance;
	int steps=0;
	double length=0;
	while(length<distance){
		length+=2*pow(0.98,steps);
		steps++;
	}
	cout<<steps;
	return 0;
}
