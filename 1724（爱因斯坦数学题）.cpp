#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(true){
        if(i%2==1&&i%3==2&&i%5==4&&i%6==5&&i%7==0){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}
