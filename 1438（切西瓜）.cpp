#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0)
            cout<<"0"<<endl;
        else
            cout<<(n*n*n+5*n+6)/6<<endl;
    }
    return 0;
}
