#include<iostream>
using namespace std;
bool IsSushu(int x){
    if(x==1)
        return false;    //注意1不是素数
    for(int i=2;i<x;i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main(){
    int xxx,xx,x;
    for(int i=1000;i<=9999;i++){
        xxx=i%1000;
        xx=i%100;
        x=i%10;
        if(IsSushu(i)&&IsSushu(xxx)&&IsSushu(xx)&&IsSushu(x)){
            cout<<i<<endl;
        }
    }
    return 0;
}
