//这里内切也属于相切？？？是？
//重合呢？？？不知道？
//AC
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,y1,r1;
    int x2,y2,r2;
    while(cin>>x1>>y1>>r1>>x2>>y2>>r2){
        double d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        if(d==r1+r2)//外切
            cout<<"1"<<endl;
        else if(r1>r2&&r1==d+r2)//2内切于1
            cout<<"1"<<endl;
        else if(r2>r1&&r2==d+r1)//1内切于2
            cout<<"1"<<endl;
        else if(d>r1+r2)
            cout<<"2"<<endl;
        else if(r1>r2&&d+r2<r1)//1包含2
            cout<<"3"<<endl;
        else if(r2>r1&&d+r1<r2)//2包含1
            cout<<"3"<<endl;
        else
            cout<<"4"<<endl;
    }
    return 0;
}
