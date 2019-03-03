#include<iostream>
using namespace std;
int main(){
    long long a,n,m,ans=1;
    cin>>a>>n>>m;
    a%=m;
    while(n){
        while(n%2==0){
            a=a*a%m;
            n/=2;
        }
        ans=ans*a%m;
        n--;
    }
    cout<<ans%m;
    return 0;
}
