#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        if(str[0]=='E')
            break;
        int count_A=0;
        int count_C=0;
        int count_M=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='A')
                count_A++;
            else if(str[i]=='C'){
                count_C++;
            }
            else if(str[i]=='M'){
                count_M++;
            }
        }
        for(int i=0;i<str.length();i++){
            if(count_A!=0){
                cout<<'A';
                count_A--;
            }
            if(count_C!=0){
                cout<<'C';
                count_C--;
            }
            if(count_M!=0){
                cout<<'M';
                count_M--;
            }
        }
        cout<<endl;
    }
    return 0;
}
