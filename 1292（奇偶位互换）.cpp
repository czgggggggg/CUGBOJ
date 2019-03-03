#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    char temp;
    for(int i=0;i<n;i++){
            cin>>str[i];
        for(int k=0;k<str[i].length();k+=2){
            temp=str[i][k];
            str[i][k]=str[i][k+1];
            str[i][k+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}
