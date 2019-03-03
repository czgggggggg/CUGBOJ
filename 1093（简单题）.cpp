#include<iostream>
using namespace std;
int func(int m,int n){
    if(m==1)
        return n;
    else if(n==1)
        return m;
    else
        return func(m-1,n)+func(m,n-1);
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<func(m,n)<<endl;
    return 0;
}
