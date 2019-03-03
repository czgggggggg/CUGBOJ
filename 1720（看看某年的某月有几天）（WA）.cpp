#include<iostream>
using namespace std;
int main(){
    int year,month;
    cin>>year>>month;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"31"<<endl;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"30"<<endl;
        case 2:
            if((year%400==0)||(year%100!=0&&year%4==0))
                cout<<"29"<<endl;
            else
                cout<<"28"<<endl;
    }
    return 0;
}
