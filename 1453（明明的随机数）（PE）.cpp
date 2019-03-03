//醉了，既然是随机数为什么还要手动输入
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int temp;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int num=n;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            num--;
        }
    }
    cout<<num<<endl;
    cout<<a[0]<<" ";
    int k=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]&&k!=num){
            cout<<a[i]<<" ";
            k++;                       /////////////////////PE
        }
        else if(a[i]!=a[i-1]&&k==num){
            cout<<a[i];
        }
    }
    return 0;
}
