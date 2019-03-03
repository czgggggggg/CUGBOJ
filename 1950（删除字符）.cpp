#include<iostream>
#include<cstring>   //strlen()
using namespace std;
int main(){
    char c[100];
    cin>>c;
    char a;
    cin>>a;
    for(int i=0;i<strlen(c);i++){
        if(c[i]!=a)
            cout<<c[i];
    }
    cout<<endl;
    return 0;
}
