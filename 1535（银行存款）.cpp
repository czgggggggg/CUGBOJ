#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double s;
    int n;
    cin>>s>>n;
    double x=0.02;
    for(int i=1;i<=n;i++){
        s=s*(1+x);
        x+=0.001;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
