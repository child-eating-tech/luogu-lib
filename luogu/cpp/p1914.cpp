/* https://www.luogu.com.cn/problem/P1914 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int mv;
	char passwd[52];
	cin>>mv>>passwd;
	for(int i=0;i<strlen(passwd);i++){
		if(passwd[i]+mv>=97&&passwd[i]+mv<=122) passwd[i]+=mv;
		else passwd[i]+=mv-26;
	}
	cout<<passwd;
	return 0;
}
