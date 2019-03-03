#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int num=0;
        int sum=0;
        for(int j=0;j<a[i];j++){
            if(j==0){
                num+=1;
                sum+=num;
            }
            else{
                num+=(j+1);
                sum+=num;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
