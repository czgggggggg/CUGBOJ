#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if((i%100!=0&&i%4==0)||(i%400==0))
            cout<<i<<endl;
    }
    return 0;
}
