//����PEͷ��
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t],x[t],y[t];
    int num[t][200];
    for(int i=0;i<t;i++){//t��
        cin>>n[i]>>x[i]>>y[i];
        for(int j=0;j<n[i];j++){
            cin>>num[i][j];
        }
        for(int j=0;j<x[i]-1;j++){//�Ƚϴ���ΪԪ�ظ�����һ...����
            for(int k=0;k<x[i]-1-j;k++){
                if(num[i][k]>num[i][k+1]){
                    int temp=num[i][k];
                    num[i][k]=num[i][k+1];
                    num[i][k+1]=temp;
                }
            }
        }
        for(int j=y[i]-1;j<n[i]-1;j++){//...����
            for(int k=y[i]-1;k<n[i]-1-(j-(y[i]-1));k++){
                if(num[i][k]<num[i][k+1]){
                    int temp=num[i][k];
                    num[i][k]=num[i][k+1];
                    num[i][k+1]=temp;
                }
            }
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<n[i];j++){
            cout<<num[i][j]<<"  ";//outputӦ����ÿ����֮�������ո�
        }
        cout<<endl;
    }
    return 0;
}
