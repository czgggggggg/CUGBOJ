#include<iostream>
using namespace std;
int func(int x){
    int x1=x/100;
    int x2=(x/10)%10;
    int x3=x%10;
    int sum=x1*100+x3*10+x2
           +x2*100+x1*10+x3
           +x2*100+x3*10+x1
           +x3*100+x1*10+x2
           +x3*100+x2*10+x1;
    return sum;
}
int main(){
    int x;
    cin>>x;
    for(int i=100;i<=999;i++){
        if(func(i)==x){
            cout<<"The number is "<<i<<endl;
            break;
        }
        if(i==999)
            cout<<"The sum you calculated is wrong!\n";
    }
    return 0;
}
