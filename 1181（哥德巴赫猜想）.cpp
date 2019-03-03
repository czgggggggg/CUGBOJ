#include<iostream>
using namespace std;
int primer(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    for(int i=6;i<=(t/2)*2;i+=2){
        for(int p=2;p<=i;p++){
            if(primer(p)&&primer(i-p)){
                cout<<i<<"="<<p<<"+"<<i-p<<endl;
                break;
            }
        }
    }
    return 0;
}
