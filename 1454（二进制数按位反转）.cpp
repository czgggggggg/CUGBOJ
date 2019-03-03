#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c[600];
    cin>>c;
    for(int i=0;i<strlen(c);i++){
        if(c[i]=='1')
            c[i]='0';
        else if(c[i]=='0')
            c[i]='1';
    }
    cout<<c<<endl;
    return 0;
}
