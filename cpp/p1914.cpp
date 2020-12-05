/* https://www.luogu.com.cn/problem/P1914 */
#include<bits/stdc++.h>
using namespace std;
void decrypt(char,int);
int main(){
	int num;
	char ret[1];
	scanf("%d",&num);
	char passwd[55];
	gets(ret);
	gets(passwd);
	for(int i=0;passwd[i]!='\0';i++)
		decrypt(passwd[i],num);
	return 0;
}
void decrypt(char a,int b){
	char c;
	c=((a+b)-97)%26+97;
	cout<<c;
}