#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    int a[n][1000];
    for(int i=0;i<n;i++){
        cin>>num[i];
        for(int j=0;j<num[i];j++){
            cin>>a[i][j];
        }
        for(int k=0;k<num[i]-1;k++){
            for(int j=0;j<num[i]-1-k;j++){
                if(a[i][j]<a[i][j+1]){
                    int temp=a[i][j];
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<num[i]-1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<a[i][num[i]-1]<<endl;
    }
    return 0;
}
