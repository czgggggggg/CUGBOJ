//二月一日是星期二
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=(n+1)%7;
    switch(n){
    case 0:
        cout<<"Sunday\n";
        break;
    case 1:
        cout<<"Monday\n";
        break;
    case 2:
        cout<<"Tuesday\n";
        break;
    case 3:
        cout<<"Wednesday\n";
        break;
    case 4:
        cout<<"Thursday\n";
        break;
    case 5:
        cout<<"Friday\n";
        break;
    case 6:
        cout<<"Saturday\n";
        break;
    };
    return 0;
}
