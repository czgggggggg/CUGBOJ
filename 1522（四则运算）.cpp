#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n],e[n];
    char x[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>x[i]>>b[i];
        if(x[i]=='+')
            c[i]=a[i]+b[i];
        else if(x[i]=='-')
            c[i]=a[i]-b[i];
        else if(x[i]=='*')
            c[i]=a[i]*b[i];
        else{
            d[i]=a[i]/b[i];
            e[i]=a[i]%b[i];
        }
    }
    for(int i=0;i<n;i++){
        if(x[i]=='+'||x[i]=='-'||x[i]=='*')
            cout<<c[i]<<endl;
        else{
            cout<<d[i]<<"..."<<e[i]<<endl;
        }
    }
    return 0;
}
