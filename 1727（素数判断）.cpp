#include<iostream>
using namespace std;
int main(){
    int Sushu;
    while(cin>>Sushu){
        int tag=0;
        for(int i=2;i<Sushu;i++){
            if(Sushu%i==0){
                tag=1;
                cout<<"No!"<<endl;
                break;                  //�����break��������forѭ����
            }
        }
        if(tag==0){
            cout<<"The number is:"<<Sushu<<endl;
        }
    }
    return 0;
}
