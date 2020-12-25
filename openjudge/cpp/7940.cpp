/*http://noi.openjudge.cn/ch0111/01*/
#include<bits/stdc++.h>
using namespace std;

// struct record{
// 	long long arrn;
// 	long long arrl;
// 	long long arrr;
// };

long long sch(long long *arr,long long lim,int l,int r){
	int mid=(l+r)/2;
	if(abs(l-r)==1){
		if(abs(lim-arr[l])>abs(lim-arr[r]))
			return arr[r];
		else return arr[l];
	}
	if(lim>arr[r])
		return arr[r];
	if(lim<arr[l])
		return arr[l];
	if(lim==arr[mid])
		return arr[mid];
	if(lim>arr[mid])
		sch(arr,lim,mid,r);
	if(lim<arr[mid])
		sch(arr,lim,l,mid);
}

int main(){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	
	int m;
	cin>>m;
	long long num[m];
	for(int i=0;i<m;i++){
		cin>>num[i];
		cout<<sch(a,num[i],0,n)<<endl;
	}

}