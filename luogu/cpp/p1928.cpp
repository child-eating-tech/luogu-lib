#include<bits/stdc++.h>
using namespace std;

const char zero='0';
char passwd[20003];
char decryption[20003];
int times=0;

int judge(int n);

int main(){
	string output="";
	gets(passwd);
	for(int i=0;i++;passwd[i]!='\0'){
		if(passwd[i]=='[')
			if(judge(2))
				times+=passwd[i+1]-zero;
	}
}
int judge(int n){
	switch(passwd[i+n]){
		case '0':
			return 0;
			break;
		case '1':
			return 0;
			times+=1;
			break;
		case '2':
			return 0;
			times+=2;
			break;
		case '3':
			return 0;
			times+=3;
			break;
		case '4':
			return 0;
			times+=4;
			break;
		case '5':
			return 0;
			times+=5;
			break;
		case '6':
			return 0;
			times+=6;
			break;
		case '7':
			return 0;
			times+=7;
			break;
		case '8':
			return 0;
			times+=8;
			break;
		case '9':
			return 0;
			times+=9;
			break;
		default:
			return 1;
			break;
	}
}