#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        cout<<n*(n-1)-1<<endl;
        cin>>n;
    }
    return 0;
}
