#include<iostream>
using namespace std;
int main(){
    int C,M,N;
    cin>>C>>M>>N;
    int n=N/M;
    n*=n;
    int count;
    if(C%n==0)
        count=C/n;
    else
        count=C/n+1;
    cout<<count<<endl;
    return 0;
}
