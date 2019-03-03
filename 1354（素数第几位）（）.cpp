#include<iostream>
using namespace std;
bool IsSushu(int x){
    for(int i=2;i<x;i++){
        if(x%i==0)
            return false;
        if(i==x-1)
            return true;
    }
}
int main(){
    int n;
    while(cin>>n){
        int num=0;
        int i;
        for(i=2;i<=10000;i++){
            if(IsSushu(i)){
                num++;
            }
            if(n==num){
                cout<<i<<endl;
                break;
            }
        }
        if(i==10001)
            cout<<"NOT FOUND!\n";
    }
    return 0;
}
//1229 9973
