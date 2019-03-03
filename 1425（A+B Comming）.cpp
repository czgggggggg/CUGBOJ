#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        int num[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>hex>>num[i];
            sum+=num[i];
        }
        cout<<sum<<endl;
        cin>>n;
    }
    return 0;
}
