#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int tag=0;
    for(int i=0,j=str.length()-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            cout<<"No\n";
            tag=1;
            break;
        }
    }
    if(tag==0)
        cout<<"Yes\n";
    return 0;
}
