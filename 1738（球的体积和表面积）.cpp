#include<iostream>
#include<iomanip>
using namespace std;
const double PI=3.1415926;
int main(){
    int r;
    double s;
    double v;
    while(cin>>r){
        s=4*PI*r*r;
        v=4*PI*r*r*r/3;
        cout<<fixed<<"surface = "<<setprecision(3)<<s<<endl;
        cout<<fixed<<"volume = "<<setprecision(3)<<v<<endl;//用setprecision()函数保留多位小数采用的不是四舍五入方法，而是直接截取
    }
    return 0;
}
