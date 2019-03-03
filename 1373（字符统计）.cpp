//此题要求用STL，这里没有使用
#include<iostream>
using namespace std;
int main(){
    int num[26]={0};
    int n;
    cin>>n;
    char c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
            num[c[i][j]-65]++;
        }
    }
    for(int i=0;i<26;i++){
        cout<<char(i+65)<<": "<<num[i]<<endl;
    }
    return 0;
}
