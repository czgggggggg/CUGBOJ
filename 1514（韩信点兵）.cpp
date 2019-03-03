#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=10000;i<=20000;i++){
        if(i%3==a&&i%5==b&&i%7==c)
            cout<<i<<endl;
    }
    return 0;
}
