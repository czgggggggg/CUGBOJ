#include<iostream>
using namespace std;
int main(){
    int a[7][2];
    int maxTime=0;
    int number=0;
    for(int i=0;i<7;i++){
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]+a[i][1]>8){
            if(a[i][0]+a[i][1]>maxTime){  //>���ű�֤��������ֻ��¼��һ��
                maxTime=a[i][0]+a[i][1];
                number=i+1;
            }
        }
    }
    cout<<number<<endl;//û�в����������0����number�ĳ�ʼֵ��
    return 0;
}
