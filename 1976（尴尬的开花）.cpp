#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,num=0;
    cin>>n;
    char c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(c[i]>='a'&&c[i]<='z')
            num++;
    }
    cout<<num<<endl;
    return 0;
}
