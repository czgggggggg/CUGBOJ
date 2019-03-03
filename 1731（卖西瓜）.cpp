#include<iostream>
using namespace std;
int main(){
    int nday=0;
    int num=1020;
    while(num){
        num=num-((num)/2+2);
        nday++;
    }
    cout<<"Need "<<nday<<" days\n";
    return 0;
}
