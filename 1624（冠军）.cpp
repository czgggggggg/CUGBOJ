#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int i=0;
    int n;
    cin>>n;
    while(n!=0){
        a[i++]=n-1;
        cin>>n;
    }
    for(int j=0;j<i;j++)
        cout<<a[j]<<endl;
    return 0;
}
