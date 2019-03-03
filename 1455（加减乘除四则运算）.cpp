#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[10],b[10];
    char c[10];
    double ans[10];
    for(int i=0;i<10;i++){
        cin>>a[i]>>c[i]>>b[i];
        if(c[i]=='+')
            ans[i]=a[i]+b[i];
        else if(c[i]=='-')
            ans[i]=a[i]-b[i];
        else if(c[i]=='*')
            ans[i]=a[i]*b[i];
        else if(c[i]=='/')
            ans[i]=double(a[i])/b[i];
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<c[i]<<b[i]<<"="<<fixed<<setprecision(5)<<ans[i]<<endl;
    }
    return 0;
}
