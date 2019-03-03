#include<iostream>
using namespace std;
int main(){
    for(int i=101;i<=999;i+=2){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}
