#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double x1,y1;
    double x2,y2;
    double r,angle;
    cin>>x1>>y1;
    cin>>r>>angle;
    x2=x1+r*cos((90-angle)*3.1415/180);//注意C++中三角函数的参数是弧度而非角度
    y2=y1+r*sin((90-angle)*3.1415/180);
    cout<<fixed<<setprecision(3)<<x2<<" "<<y2<<endl;
    return 0;
}
