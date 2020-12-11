/* https://www.luogu.com.cn/problem/P1002 */
#include<bits/stdc++.h>
bool b[110][110];
long long a[110][110];
int dx[8]={2,1,-1,-2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int n,m,x,y;
using namespace std;
int main(){
	cin>>n>>m>>x>>y;
	memset(b,0,sizeof(b));
	b[x][y]=1;
	for(int i=0;i<=7;i++){
		 if(x+dx[i]>=0&&x+dx[i]<=n&&y+dy[i]>=0&&y+dy[i]<=m){
		 	b[x+dx[i]][y+dy[i]]=1;
		 }
	}
	int k=0;
	while(!b[k][0]&&k<=n){
		a[k++][0]=1;
	}
	int l=0;
	while(!b[0][l]&&l<=m){
		a[0][l++]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(b[i][j]){
				a[i][j]=0;
			}
			else{
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	cout<<a[n][m];
	return 0;
}