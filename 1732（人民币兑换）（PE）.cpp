//提交了5次都是PE，放弃了
#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=17;j++){
            for(int k=1;k<=85;k++){
                if(i*10+j*5+k==100&&i+j+k==50){
                    cout<<"x="<<i<<",y="<<j<<",z="<<k<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"count="<<count;
    return 0;
}
