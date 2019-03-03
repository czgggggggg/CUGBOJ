#include<iostream>
using namespace std;
/*int func(int a[],int x,int c[],int y,int k){
    return (func(a,x,n-1)+func(a,x,n+1))/2-c[n];
}*/

int main(){
    int n;
    cin>>n;
    double a[n+2];
    cin>>a[0]>>a[n+1];
    double c[n+1];//c[0]没有作用
    for(int i=1;i<=n;i++)
        cin>>c[i];
    //a[1]=(a[0]+func(a,n+2,c,n,2))/2-c1;
    //cout<<a[1]<<endl;
    return 0;
}
