#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n][1000];
    int k[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        while(a[i]!=1){
            if(a[i]%2==1){
                b[i][k[i]++]=a[i];
                a[i]=a[i]*3+1;
            }
            else if(a[i]%1==0){
                a[i]=a[i]/2;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(k[i]==0)
            cout<<"No number can be output !\n";
        else{
            for(int j=0;j<k[i]-1;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<b[i][k[i]-1]<<endl;
        }
    }
    return 0;
}
