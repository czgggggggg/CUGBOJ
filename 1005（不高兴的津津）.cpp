#include<iostream>
using namespace std;
int main(){
    int a[7][2];
    int maxTime=0;
    int number=0;
    for(int i=0;i<7;i++){
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]+a[i][1]>8){
            if(a[i][0]+a[i][1]>maxTime){  //>符号保证相等情况下只记录第一个
                maxTime=a[i][0]+a[i][1];
                number=i+1;
            }
        }
    }
    cout<<number<<endl;//没有不高兴是输出0，即number的初始值。
    return 0;
}
