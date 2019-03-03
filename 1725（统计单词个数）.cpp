//这里前提条件是字符串的第一个字符不是空格符
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    string str[n];
    int num[n]={0};
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
        for(int j=1;j<str[i].length();j++){
            if(str[i][j-1]==' '&&str[i][j]!=' ')
                num[i]++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<"Numbers of words = "<<num[i]+1<<endl;
    return 0;
}
