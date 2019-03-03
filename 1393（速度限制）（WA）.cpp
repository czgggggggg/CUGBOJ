#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        int a[n][2];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
        }
        sum+=a[0][0]*a[0][1];
        for(int i=1;i<n;i++){
            sum+=a[i][0]*(a[i][1]-a[i-1][1]);
        }
        cout<<sum<<"Ó¢Àï\n";
        cin>>n;
    }
    return 0;
}
