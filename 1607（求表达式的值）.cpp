#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    char ch1,ch2;
    cin>>a>>ch1>>b>>ch2;
    while(!(a==0&&b==0)){
        if(ch1=='+')
            cout<<a+b<<endl;
        else if(ch1=='-')
            cout<<a-b<<endl;
        else if(ch1=='*')
            cout<<a*b<<endl;
        else if(ch1=='/')
            cout<<fixed<<setprecision(6)<<double(a)/b<<endl;
        cin>>a>>ch1>>b>>ch2;
    }
    return 0;
}
