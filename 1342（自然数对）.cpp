#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    double c[n],d[n];
    string ans[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c[i]=sqrt(abs(a[i]+b[i]));
        d[i]=sqrt(abs(a[i]-b[i]));
        if((c[i]-int(c[i]))==0&&(d[i]-int(d[i]))==0)
            ans[i]="YES";
        else
            ans[i]="NO";
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
