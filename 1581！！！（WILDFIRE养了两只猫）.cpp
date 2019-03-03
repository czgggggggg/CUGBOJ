//注意为还没有赋值的字符串添加字符元素，会引发的问题。
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string str;
    char str1[100],str2[100];
    while(cin>>str){
        int tag=1;
        int k=0;
        int temp1,temp2;
        for(int i=0;i<str.length();i++){
            if(str[i]=='.'){
                tag=2;
            }
            else{
                if(tag==1){
                    str1[i]=str[i];
                    temp1=i;
                }
                else if(tag==2){
                    str2[k++]=str[i];
                    temp2=k-1;
                }
            }
        }
        if(tag==1)
            cout<<"I can't do it.\n";
        else{
            for(int j=0;j<=temp1;j++)
                cout<<str1[j];                           //有点懵了，为什么str1的长度是str的长度？只能胡乱改一通了。。。
            cout<<endl;
            for(int j=0;j<=temp2;j++)
                cout<<str2[j];
            cout<<endl;
        }
    }
    return 0;
}
