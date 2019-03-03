//太傻逼了这题，参考了AC的答案都没用。垃圾
#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.1415926535898
int main(){
    int D,L;
    cin>>D>>L;
    double v=(2*PI*(D/2)*(D/2)*L)/3;
    cout<<fixed<<setprecision(3)<<v<<endl;
    return 0;
}
