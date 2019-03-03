#include<iostream>
using namespace std;
int yue(int a,int b){
    int r=a;
    while(r){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int bei(int a,int b){
    int x=yue(a,b);
    int temp=x;
    while(!(x%a==0&&x%b==0)){
        x+=temp;
    }
    return x;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<yue(a,b)<<endl;
    cout<<bei(a,b)<<endl;
    return 0;
}
