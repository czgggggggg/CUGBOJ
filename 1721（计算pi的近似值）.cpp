#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double pi=1;
    int num=1;
    int count=1;
    int tag=1;//0代表正数，1代表负数
    while(double(1)/num>=pow(10,-4)){
        num+=2;
        count++;
        tag=tag*(-1);
        pi+=tag*double(1)/num;
    }
    pi*=4;
    cout<<fixed<<setprecision(6)<<"pi = "<<pi<<endl;
    cout<<"count = "<<count<<endl;
    return 0;
}
