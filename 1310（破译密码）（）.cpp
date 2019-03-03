//我对字符串问题真的是很无语！......自己粗心大意！！！
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    char temp;

    for(int i=0,j=str.length()-1;i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    for(int i=0;i<str.length();i++){
        if((str[i]>='a'&&str[i]<='z')||
           (str[i]>='A'&&str[i]<='Z')||
           (str[i]>='0'&&str[i]<='9')){
               cout<<str[i];
        }
    }
    cout<<endl;
    return 0;
}
