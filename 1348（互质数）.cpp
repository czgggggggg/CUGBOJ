#include<iostream>
using namespace std;
int gcd(int a,int b){//Õ·×ªÏà³ý·¨
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int n;
    while(cin>>n){
        int num=0;
        for(int i=1;i<n;i++){
            if(gcd(n,i)==1){
                num++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
