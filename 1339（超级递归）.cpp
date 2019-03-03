#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=100+5*(a[i]-1);
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}
