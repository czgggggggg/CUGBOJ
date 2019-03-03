#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        d[i]=c[i]*(double(c[i])/b[i]);
    }
    for(int i=0;i<n;i++){
        cout<<d[i]<<endl;
    }
    return 0;
}
