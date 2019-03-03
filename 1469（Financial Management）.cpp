#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double money[12];
    double sum_money=0;
    for(int i=0;i<12;i++){
        cin>>money[i];
        sum_money+=money[i];
    }
    double avr_money=sum_money/12;
    cout<<fixed<<setprecision(2)<<"$"<<avr_money<<endl;
    return 0;
}
