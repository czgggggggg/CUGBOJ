#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    getline(cin,str1);
    int k;
    cin>>k;
    cin.get();
    getline(cin,str2);
    int tag=0;
    for(int i=0;i<str1.length()-k+1;i++){
        int tag_i=i;
        int num=0;
        for(int j=0;j<str2.length();j++){
            if(str1[tag_i++]==str2[j]){
                num++;
            }
        }
        if(num==k){
            cout<<"YES\n";
            tag=1;
            break;
        }
    }
    if(tag==0)
        cout<<"NO\n";
    return 0;
}
