//合数是质数的反数
#include<iostream>
using namespace std;
bool IsSushu(int x){
    for(int i=2;i<x;i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main(){
    for(int i=400;i<=999;i++){
        if((IsSushu(i)==false)&&(IsSushu(i/10)==false)&&(IsSushu(i/100)==false)){
            cout<<i<<endl;
        }
    }
    return 0;
}
