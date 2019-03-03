#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        int count=0;
        double a=n/3;
        count++;
        while(a>double(1)/n){
            a=a/3;
            count++;
        }
        cout<<count<<endl;
        cin>>n;
    }
    cout<<"EOF\n";
    return 0;
}
