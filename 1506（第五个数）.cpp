#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n],e[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        if(a[i]-b[i]==b[i]-c[i]&&b[i]-c[i]==c[i]-d[i])
            e[i]=d[i]+d[i]-c[i];
        else if(double(a[i])/b[i]==double(b[i])/c[i]&&double(b[i])/c[i]==double(c[i])/d[i])
            e[i]=d[i]*d[i]/c[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<e[i]<<endl;
    }
    return 0;
}
