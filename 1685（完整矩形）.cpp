#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    int zhouchang[n];
    int yinshu[n][1000];
    for(int i=0;i<n;i++){
        cin>>num[i];
        int k=0;
        for(int j=1;j<=num[i];j++){
            if(num[i]%j==0){
                yinshu[i][k]=j;
                k++;
            }
        }
        //��ʱnum[i]����k������
        int x,y;
        if(k%2==0){//������
            x=yinshu[i][k/2-1];
            y=yinshu[i][k/2];
        }
        else{//�߳����ȵľ���
            x=y=yinshu[i][k/2];
        }
        zhouchang[i]=2*(x+y);
    }
    for(int i=0;i<n;i++){
        cout<<zhouchang[i]<<endl;
    }
    return 0;
}
