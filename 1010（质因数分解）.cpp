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
    int x;
    while(cin>>x){
        for(int i=2;i<=x;i++){
            if(IsSushu(i)){
                if(x%i==0){
                    x=x/i;
                    cout<<i<<" ";
                    i=1;//重头开始寻找质因数，注意之后i++，所以其实又从i=2开始。
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
