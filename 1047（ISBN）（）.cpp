#include<iostream>
using namespace std;
int main(){
    char ISBN[10];
    int tag;
    int sum=0;
    for(int i=0;i<10;i++){
        cin>>ISBN[i];
        if(ISBN[i]=='?')         //ע�⣺?Ҫ��Ӣ��״̬������
            tag=i;
    }
    for(int i=0;i<10;i++){
        if(i!=tag){
            if(ISBN[i]!='X'){
                sum+=(ISBN[i]-48)*(10-i);    //�ַ�0��Ӧ��ʮ������Ϊ48
            }
            else{
                sum+=(ISBN[i]-78)*(10-i);            //�ַ�X��Ӧ��ʮ������Ϊ88
            }
        }
    }

    if(tag!=9){                       //?�������һλ��0~9
    for(int i=0;i<10;i++){
        int k=sum+i*(10-tag);
        if(k%11==0){
            cout<<i<<endl;
            break;
        }
    }
    }
    else{                          //?�����һλ��0~X
        for(int i=0;i<10;i++){
            int k=sum+(10-tag);
            if(k%11==0){
                cout<<i<<endl;
                break;
            }
            if(i==9)
                cout<<'X'<<endl;
        }
    }
    return 0;
}
