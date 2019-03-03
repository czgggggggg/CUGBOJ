#include<iostream>
using namespace std;
int main(){
    char ISBN[10];
    int tag;
    int sum=0;
    for(int i=0;i<10;i++){
        cin>>ISBN[i];
        if(ISBN[i]=='?')         //注意：?要在英文状态下输入
            tag=i;
    }
    for(int i=0;i<10;i++){
        if(i!=tag){
            if(ISBN[i]!='X'){
                sum+=(ISBN[i]-48)*(10-i);    //字符0对应的十进制数为48
            }
            else{
                sum+=(ISBN[i]-78)*(10-i);            //字符X对应的十进制数为88
            }
        }
    }

    if(tag!=9){                       //?不在最后一位，0~9
    for(int i=0;i<10;i++){
        int k=sum+i*(10-tag);
        if(k%11==0){
            cout<<i<<endl;
            break;
        }
    }
    }
    else{                          //?在最后一位，0~X
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
