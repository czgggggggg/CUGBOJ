#include<iostream>
#include<string>
using namespace std;
int main(){
    char c=' ';
    string str;
    while(c!='O'){
        cin>>c;
        cin.get();
        getline(cin,str);
        if(c=='x'){
            for(int i=0;i<str.length();i++){
                if(str[i]>='A'&&str[i]<='Z'){
                    str[i]+=32;
                }
                else if(str[i]>='a'&&str[i]<='z'){
                    str[i]=str[i];
                }
                else{
                    str[i]='?';
                }
            }
            cout<<str<<endl;
        }
        else if(c=='X'){
            for(int i=0;i<str.length();i++){
                if(str[i]>='a'&&str[i]<='z'){
                    str[i]-=32;
                }
                else if(str[i]>='A'&&str[i]<='Z'){
                    str[i]=str[i];
                }
                else{
                    str[i]='?';
                }
            }
            cout<<str<<endl;
        }
    }
    return 0;
}
