#include<iostream>
using namespace std;
int main(){
    int l,w,n;
    cin>>l>>w;
    cin>>n;
    int a[n],b[n];
    int num=0;
    int s=9999;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if((a[i]>=l&&b[i]>=w)||(b[i]>=l&&a[i]>=w)){
            num++;
            if(s>a[i]*b[i])
                s=a[i]*b[i];
        }
    }
    if(num==0)
        cout<<"-1"<<endl;
    else
        cout<<s<<endl;
    return 0;
}
