#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    string str[n];
    int num[n]={0};
    int sum=0;
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
        for(int j=0;j<str[i].length();j++){
            if(str[i][j]!=' ')
                num[i]++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Line "<<i+1<<":"<<num[i]<<endl;
        sum+=num[i];
    }
    cout<<"Total "<<sum<<endl;
    return 0;
}
