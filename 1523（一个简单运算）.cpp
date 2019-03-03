#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x=a%16;
    a=a+(15-x);
    cout<<hex<<a<<endl;
    return 0;
}
