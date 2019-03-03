#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int x;
    int num[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        for(int j=0;j<a[i];j++){
            for(int j=0;j<b[i];j++){
                cin>>x;
                if(x==1)
                    num[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
