#include<iostream>
using namespace std;
int func(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return func(n-2)+func(n-1);
}
int main(){
    int t;
    cin>>t;
    int a[t];
    long long b[t][3];
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]==1){
            b[i][0]=1;
            b[i][1]=1;
            b[i][2]=0;
        }
        else if(a[i]==2){
            b[i][0]=2;
            b[i][1]=1;
            b[i][2]=1;
        }
        else{
            b[i][0]=func(a[i]);
            b[i][1]=func(a[i]-1);
            b[i][2]=func(a[i]-2);
        }
    }
    for(int i=0;i<t;i++){
        cout<<b[i][0]<<" "<<b[i][1]<<" "<<b[i][2]<<endl;
    }
    return 0;
}
