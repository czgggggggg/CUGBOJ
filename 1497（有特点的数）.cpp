#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    int tag[n]={0};
    for(int i=0;i<n;i++){
        cin>>num[i];
        int temp=0;
        int k=1;
        while((num[i]/(int(pow(10.0,k))))!=0){
            if((pow(double(num[i]%int(pow(10.0,k))),2))==num[i]){
                tag[i]=1;
                break;
            }
            k++;
        }
        if((num[i]/(int(pow(10.0,k))))==0){
            if((pow(double(num[i]%int(pow(10.0,k))),2))==num[i]){
                tag[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"#case "<<i+1<<endl;
        if(tag[i]==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
/*
3
1
625
5775
*/
