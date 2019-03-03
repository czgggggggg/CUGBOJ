#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double T,t;
    cin>>T>>t;
    if(T==2*t){
        cout<<fixed<<setprecision(3)<<1.5*t/(T*T)<<endl;
    }
    else if(T>2*t){
        cout<<fixed<<setprecision(3)<<(3*t*t+(T-2*t)*2*t)/(T*T)<<endl;
    }
    else if(T<2*t&&T>=t){
        cout<<fixed<<setprecision(3)<<((T*T)/4+T*t)/(T*T)<<endl;
    }
    return 0;
}
