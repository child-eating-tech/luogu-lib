#include<stdio.h>
void main(){
	int i,p,n,total;
	scanf("%d %d",&n,&p);
	total=2*p;
	for(i=p+1;i<=n;i++)
		total+=i;
	printf("%d\n",total);
}