#include<bits/stdc++.h>
using namespace std;
double dis(double,double,double,double);
int main(){
    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double dis1,dis2,dis3;
    dis1=dis(x1,y1,x2,y2);
    dis2=dis(x2,y2,x3,y3);
    dis3=dis(x1,y1,x3,y3);
    double dist=dis1+dis2+dis3;
    printf("%.2lf",dist);
}
double dis(double a,double b,double c,double d){
    return sqrt(pow((d-b),2)+pow((c-a),2));
}