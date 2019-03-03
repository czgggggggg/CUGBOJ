#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++)
        n[i]=1;
    int m[t];
    for(int i=0;i<t;i++){
        cin>>m[i];
        int k=1;
        while(n[i]<=m[i]){
            n[i]=n[i]*(k++);
        }
        n[i]=k-2;
    }
    for(int i=0;i<t;i++){
        cout<<n[i]<<endl;
    }
    return 0;
}
