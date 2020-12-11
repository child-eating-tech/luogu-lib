#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	int x,y;
	
	cin>>n>>m>>k;
	
	bool map[n+4][n+4];
	bool torch[n+4][n+4];
	bool ls[n+4][n+4];
	
	for(int i=0;i<m;i++){
		cin>>x>>y;
		torch[x+2][y+2]=1;
	}		//gets coordinate of torch and let the value be true
	if(k!=0){
		for(int i=0;i<k;i++){
			cin>>x>>y;
			ls[x+2][y+2]=1;
		}
	}		//gets coordinate of lightstone
	
	for(int i=0;i<n+4;i++)
		for(int j=0;j<n+4;j++)
			map[i][j]=0;
	printf("%d%d",torch[5][5]); 
/*	for(int i=2;i<n+2;i++){
		for(int j=2;j<=n+2;j++){
		int i=5,j=5;
			if(torch[i][j]==1){
				map[i][j]=1;map[i][j-2]=1;map[i][j-1]=1;map[i][j+1]=1;map[i][j+2]=1;
				map[i+1][j]=1;map[i+1][j+1]=1;map[i+1][j-1]=1;
				map[i-1][j]=1;map[i-1][j+1]=1;map[i-1][j-1]=1;
				map[i+2][j]=1;
				map[i-2][j]=1;
			}
			if(ls[i][j]==1){
				map[i][j]=1;map[i][j-2]=1;map[i][j-1]=1;map[i][j+1]=1;map[i][j+2]=1;
				map[i+1][j]=1;map[i+1][j+1]=1;map[i+1][j+2]=1;map[i+1][j-1]=1;map[i+1][j-2]=1;
				map[i-1][j]=1;map[i-1][j+1]=1;map[i-1][j+2]=1;map[i-1][j-1]=1;map[i-1][j-2]=1;
				map[i+2][j]=1;map[i+2][j+1]=1;map[i+2][j+2]=1;map[i+2][j-1]=1;map[i+2][j-2]=1;
				map[i-2][j]=1;map[i-2][j+1]=1;map[i-2][j+2]=1;map[i-2][j-1]=1;map[i-2][j-2]=1;				
			}*/
//		}
//}
	
	/*for(int i=0;i<n+5;i++){
		for(int j=0;j<n+5;j++){
			cout<<map[i][j];
		}
		cout<<endl;
	}*/
/*	int blk=0;							//blk+=map[m][n]?1:0
	
	for(int i=2;i<n+2;i++){
		for(int j=2;j<n+2;j++){
			if(map[i][j]==0)blk++;
		}
	}									//counts blk
	
	cout<<blk<<endl;*/
	return 0;							//end
}
