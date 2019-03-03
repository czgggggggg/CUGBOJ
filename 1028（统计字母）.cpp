#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c[n];
    int num[26]={0};
    for(int i=0;i<n;i++){
        cin>>c[i];
        num[c[i]-97]++;
    }
    int max=0;
    int tag;
    for(int i=0;i<26;i++){
        if(num[i]>max){
            max=num[i];
            tag=i;
        }
    }
    cout<<char(tag+97)<<endl;
    return 0;
}
