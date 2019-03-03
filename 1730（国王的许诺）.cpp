#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double sum=0;
    for(int i=0;i<64;i++){
        sum+=pow(2,i);
    }
    cout<<fixed<<setprecision(6)<<"sum = "<<sum/(pow(10,19))<<"e+19"<<endl;
    cout<<fixed<<setprecision(6)<<"volum = "<<(sum/(1.42*pow(10,8)))/pow(10,11)<<"e+11"<<endl;
    return 0;
}
