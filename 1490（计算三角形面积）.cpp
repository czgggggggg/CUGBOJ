#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    double s;
    cin>>a>>b>>c;
    while(!(a==0&&b==0&&c==0)){
        if(a+b<=c||a+c<=b||b+c<=a){
            cout<<"NO\n";
        }
        else{
            s=double(a+b+c)/2;
            s=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<fixed<<setprecision(4)<<s<<endl;
        }
        cin>>a>>b>>c;
    }
}
