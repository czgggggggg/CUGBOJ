#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    string str[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]-b[i]==-1||(a[i]==5&&b[i]==1))
           str[i]="Alice";
        else if(b[i]-a[i]==-1||(b[i]==5&&a[i]==1))
            str[i]="Bob";
        else
            str[i]="Naruto";
    }
    for(int i=0;i<n;i++)
        cout<<str[i]<<endl;
    return 0;
}
