#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];//����
    int b[n];//��ͷ��
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int num=1;
        num+=a[i];
        b[i]=num*(num+1);
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<endl;
    return 0;
}
