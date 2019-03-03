#include<iostream>
using namespace std;
int main(){
    int a[12];//津津每个月的预算
    int sum=0;
    int cunchu=0;
    for(int i=0;i<12;i++)
        cin>>a[i];
    for(int i=0;i<12;i++){
        if(sum+300-a[i]<0){
            cout<<"-"<<i+1<<endl;
            return 0;
        }
        if((sum+300-a[i])/100>=0){
            cunchu+=((sum+300-a[i])/100)*100;
            sum=sum+300-a[i]-((sum+300-a[i])/100)*100;
        }
    }
    cout<<sum+cunchu*1.2<<endl;
    return 0;
}
