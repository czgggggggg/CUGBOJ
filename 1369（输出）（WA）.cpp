//WA
#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int k=0;
    cin>>a[k++];
    while(!(a[k-1]==10)){
        cin>>a[k++];
    }
    for(int i=0;i<k-1;i++){
        cout<<char(a[i]);
    }
    cout<<endl;
}
