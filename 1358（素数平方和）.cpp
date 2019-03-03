//暴力法297ms
#include<iostream>
using namespace std;
int main(){
    int sushu;
    while(cin>>sushu){
            int tag=0;
        for(int i=1;i<sushu;i++){
            for(int j=1;j<sushu;j++){
                if(sushu==i*i+j*j){
                    cout<<"YES\n";
                    tag=1;
                    //break;//只能跳出内部这个循环
                    break;
                }
            }
                if(tag==1)
                    break;   //再加一个break;跳出第一层循环
        }
        if(tag==0)
            cout<<"NO\n";
    }
    return 0;
}
