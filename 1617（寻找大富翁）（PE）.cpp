#include<iostream>
using namespace std;
void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    while(!(n==0&&m==0)){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,n);
        if(m<=n){
            for(int i=0;i<m;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{//不足则全部输出
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        cin>>n>>m;
    }
}
