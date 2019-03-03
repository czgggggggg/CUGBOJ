#include<iostream>
using namespace std;
int main(){
    int n;
    int a,b,c;
    while(cin>>n){
        a=n/100;
        b=(n/10)%10;
        c=n%10;
        if(n>0)
            n=c*100+b*10+a;
        else
            n=-1*(c*100+b*10+a);
        cout<<n<<endl;
    }
    return 0;
}
