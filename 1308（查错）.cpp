#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    string str1[n],str2[n];
    for(int i=0;i<n;i++){
        cin>>str1[i]>>str2[i];
    }
    for(int i=0;i<n;i++){
        if(str1[i].length()!=str2[i].length()){
            cout<<"Wrong\n";
        }
        else{
            for(int j=0;j<str1[i].length();j++){
                if(str1[i][j]!=str2[i][j]){
                    cout<<"Wrong\n";
                    break;
                }
                if(j==str1[i].length()-1)
                    cout<<"Accept\n";
            }
        }
    }
    return 0;
}
