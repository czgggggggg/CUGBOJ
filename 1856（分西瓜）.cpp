#include<iostream>
using namespace std;
int main(){
    long long n;
    while(cin>>n){
        if(n%2==1)
            cout<<"NO\n";
        else{
            if(n==2)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
