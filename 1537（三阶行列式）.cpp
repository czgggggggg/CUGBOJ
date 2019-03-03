#include<iostream>
using namespace std;
int main(){
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;
    cin>>a11>>a12>>a13>>a21>>a22>>a23>>a31>>a32>>a33;
    cout<<a11*a22*a33+a12*a23*a31+a13*a21*a32
         -a11*a23*a32-a12*a21*a33-a13*a22*a31<<endl;
    return 0;
}
