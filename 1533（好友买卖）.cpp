#include<iostream>
using namespace std;
int main(){
    int n=0;
    double money=500;
    int final_money;
    cin>>final_money;
    while(money<final_money){
        money*=1.2;
        n++;
    }
    cout<<n<<endl;
    return 0;
}
