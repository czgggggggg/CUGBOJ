#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    int a[250];
    int k=0;
    string str;
    cin>>str;
    for(int i=str.length()-1;i>=0;i=i-4){
        if(i==0)
            num=(str[0]-48);
        else if(i==1)
            num=((str[0]-48)*2+(str[1]-48));
        else if(i==2)
            num=((str[0]-48)*4+(str[1]-48)*2+(str[2]-48));
        else
            num=((str[i-3]-48)*8+(str[i-2]-48)*4+(str[i-1]-48)*2+(str[i]-48));
        a[k]=num;
        k++;
    }
    for(int i=k-1;i>=0;i--){
        cout<<hex<<a[i];
    }
    cout<<endl;
    return 0;
}
