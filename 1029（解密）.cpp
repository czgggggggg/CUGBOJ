//ÂÒÂëÎÊÌâ£¬Í·ÌÛ
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        str[i]=char((int(str[i])-97-n+26)%26+97);
    }
    cout<<str<<endl;
    return 0;
}
