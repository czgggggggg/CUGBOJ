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
    int a,b;
    while(cin>>a>>b){
        int num=0;
        for(int i=a;i<=b;i++){
            if(IsSushu(i))
                num++;
        }
        cout<<num<<endl;
    }
    return 0;
}
