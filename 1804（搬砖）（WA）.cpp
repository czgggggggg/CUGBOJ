#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(num[i]>num[i+1]){
                int temp=num[i];
                num[i]=num[i+1];
                num[i+1]=temp;
            }
        }
    }
    int time=0;
    for(int i=1;i<n;i++){
        time+=(num[i]-num[i-1]);
    }
    cout<<time<<endl;
    return 0;
}
