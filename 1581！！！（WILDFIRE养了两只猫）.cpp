//ע��Ϊ��û�и�ֵ���ַ�������ַ�Ԫ�أ������������⡣
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
                cout<<str1[j];                           //�е����ˣ�Ϊʲôstr1�ĳ�����str�ĳ��ȣ�ֻ�ܺ��Ҹ�һͨ�ˡ�����
            cout<<endl;
            for(int j=0;j<=temp2;j++)
                cout<<str2[j];
            cout<<endl;
        }
    }
    return 0;
}
