#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char word[n][15];   //一行中可以输入多个字符串（用空格分开）
    char first_letter[n];
    for(int i=0;i<n;i++){
        cin>>word[i];
        first_letter[i]=word[i][0];
    }
    for(int i=0;i<n;i++){
        if(first_letter[i]>=97&&first_letter[i]<=122)
            cout<<char(first_letter[i]-32);
        else
            cout<<first_letter[i];
    }
    cout<<endl;
    return 0;
}
