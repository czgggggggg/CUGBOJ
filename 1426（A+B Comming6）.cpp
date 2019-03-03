#include<iostream>
using namespace std;
int main(){
    int a,b;
    int count=0;
    while(cin>>hex>>a>>b){
        count++;
        cout<<"Case "<<count<<":\n";
        cout<<a+b<<endl;
    }
    return 0;
}
