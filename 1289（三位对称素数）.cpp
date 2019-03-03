#include<iostream>
using namespace std;
bool IsPrimer(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int func(int n){
    int a=n/100;
    int b=(n/10)%10;
    int c=n%10;
    return c*100+b*10+a;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int ans[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=100&&a[i]<=999){
            if(IsPrimer(a[i])&&IsPrimer(func(a[i])))
                ans[i]=1;
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<endl;
    return 0;
}
