//������297ms
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
                    //break;//ֻ�������ڲ����ѭ��
                    break;
                }
            }
                if(tag==1)
                    break;   //�ټ�һ��break;������һ��ѭ��
        }
        if(tag==0)
            cout<<"NO\n";
    }
    return 0;
}
