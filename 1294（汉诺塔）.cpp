#include<iostream>
using namespace std;
int func(int n){
    if(n==1)
        return 1;
    else
        return func(n-1)*2+1;
}
int main(){
    int n;
    int i=0;
    int a[1000];
    cin>>n;
    while(n!=0){
        a[i++]=func(n);
        cin>>n;
    }
    for(int j=0;j<i;j++){
        cout<<a[j]<<endl;
    }
    return 0;
}
