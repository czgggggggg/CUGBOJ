#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c;
    int num=0;
    int count=0;
    for(int i=100;i<=998;i+=2){
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a!=b&&a!=c&&b!=c){
                count++;
            cout<<setw(6)<<i;
            num++;
            if(num==10){
                cout<<endl;
                num=0;
            }
        }
    }
    cout<<endl;
    cout<<"   total:"<<count<<endl;
    return 0;
}
