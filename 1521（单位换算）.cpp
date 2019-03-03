#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<fixed<<setprecision(3)<<double(a[i])/1.60934<<endl;
    return 0;
}
