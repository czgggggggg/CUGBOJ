#include<iostream>
using namespace std;
int main(){
    int phone_time,internet_time;
    cin>>phone_time>>internet_time;
    int money=0;
    if(phone_time%3==0)
        money+=phone_time/3;
    else
        money+=phone_time/3+1;

    if(internet_time<=60)
        money+=4*internet_time;
    else
        money+=(240+8*(internet_time-60));

    cout<<money<<endl;
    return 0;
}
