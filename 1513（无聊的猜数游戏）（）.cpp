//��������Ϊ����ʾ���д���76ֻ��Ҫ��9�Σ�����10�Σ�����������û�����⡣
#include<iostream>
using namespace std;

int func(int num,int low,int high){//�������num��Ҫ�Ĵ���
    int mid=(low+high)/2;
    if(mid==num)
        return 1;
    else{
        if(mid>num)
            return 1+func(num,low,mid);
        else if(mid<num)
            return 1+func(num,mid,high);
    }
}

int main(){
    int num;
    cin>>num;
    while(num!=0){
        cout<<func(num,1,1000)<<endl;
        cin>>num;
    }
}
