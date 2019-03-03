#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t],b[t];
    int chiken[t]={0},rubbit[t]={0};
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        for(int p=0;p<=a[i];p++){
            for(int q=0;q<=a[i];q++){
                if(p+q==a[i]&&2*p+4*q==b[i]){
                    chiken[i]=p;
                    rubbit[i]=q;
                }
            }
        }
    }
    for(int i=0;i<t;i++){
        if(chiken[i]==0&&rubbit[i]==0)
            cout<<"NO\n";
        else
            cout<<"YES "<<chiken[i]<<" "<<rubbit[i]<<endl;
    }
    return 0;
}
