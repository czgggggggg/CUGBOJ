//参考
/*#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char sum[1000],t,c[1000];
    int n,i,j;
    while(scanf("%s %d",sum,&n)!=EOF){
        int m=strlen(sum);
        char temp;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-1-i;j++){
                if(sum[j]>sum[j+1]){
                    temp=sum[j];
                    sum[j]=sum[j+1];
                    sum[j+1]=temp;
                }
            }
        }
        printf("%s %d %c\n",sum,m,sum[n-1]);
    }
    return 0;
}*/






//C++写的好像在输入以EOF结束这里不符合题目要求      貌似是输入多行的意思     果然AC过了
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int n;
    char temp;
    while(cin>>str>>n){
        for(int i=0;i<str.length()-1;i++){
            for(int j=0;j<str.length()-1-i;j++){
                if(str[j]>str[j+1]){
                    temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
            }
        }
        cout<<str<<" "<<str.length()<<" "<<str[n-1]<<endl;
    }
    return 0;
}

