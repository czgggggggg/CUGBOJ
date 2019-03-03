#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],num[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        while(a[i]!=0){
            if(a[i]%2==1)
                num[i]++;
            a[i]=a[i]/2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
