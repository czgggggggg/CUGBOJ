#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<b[i])
            cout<<"NO BRAINS"<<endl;
        else
            cout<<"MMM BRAINS"<<endl;
    }
    return 0;
}
