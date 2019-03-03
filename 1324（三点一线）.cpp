#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        if(x1!=x2){
            double k=double(y1-y2)/(x1-x2);
            double b=y1-k*x1;
            if(y3==k*x3+b)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else{
            if(x3==x1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
