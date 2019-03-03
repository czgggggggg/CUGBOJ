#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                string str_temp;
                str_temp=str[j];
                str[j]=str[j+1];
                str[j+1]=str_temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}
