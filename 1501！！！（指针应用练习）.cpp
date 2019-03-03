#include<iostream>
#include<stdio.h>//°üº¬gets(char*)
#include<cstring>
using namespace std;
int main(){
    char str[100];
    char *p=str;
    gets(str);
    int num=0;
    int num_zero=0;
    while(*p){
        if(*p==' ')
            num_zero++;
        num++;
        p++;
    }
    cout<<num<<endl;
    cout<<num-num_zero<<endl;
    return 0;
}
