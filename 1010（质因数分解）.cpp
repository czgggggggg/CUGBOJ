#include<iostream>
using namespace std;
bool IsSushu(int x){
    if(x==1)
        return false;    //ע��1��������
    for(int i=2;i<x;i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main(){
    int x;
    while(cin>>x){
        for(int i=2;i<=x;i++){
            if(IsSushu(i)){
                if(x%i==0){
                    x=x/i;
                    cout<<i<<" ";
                    i=1;//��ͷ��ʼѰ����������ע��֮��i++��������ʵ�ִ�i=2��ʼ��
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
