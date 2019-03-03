#include<iostream>         //1->1  2->1+3*2-2=5 3->5+3*3-2=12
using namespace std;
int main(){
    int n,num;
    cin>>n;
    if(n==1){
        num=1;
        cout<<num<<endl;
    }
    else{
        num=1;
        for(int i=2;i<=n;i++){
            num=num+3*i-2;
        }
        cout<<num<<endl;
    }
    return 0;
}
