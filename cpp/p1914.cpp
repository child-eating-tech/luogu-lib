/* https://luogu.com.cn/problem/P1914 */
#include<bits/stdc++.h>
using namespace std;
void readPasswd(char,int);
int main(){
    int num;
    char ret[1];
    scanf("%d",&num);
    char passwd[55];
    gets(ret);
    gets(passwd);
    for(int i=0;passwd[i]!='\0';i++)
        readPasswd(passwd[i],num);
    return 0;
}
void readPasswd(char a,int b){
    char c;
    c=(a+b)%26;
    cout<<c;
}
