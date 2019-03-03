#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t][100];
    int n[t];
    for(int i=0;i<t;i++){
        cin>>n[i];
        for(int j=0;j<n[i];j++){
            cin>>a[i][j];
        }
        for(int j=0;j<n[i]-1;j++){
            for(int k=0;k<n[i]-1-j;k++){
                if(abs(a[i][k])<abs(a[i][k+1])){
                    int temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }
            }
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<n[i];j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
