#include<iostream>
#include<cmath>
using namespace std;

int func(int n){    //变化数字的函数
    int last=n%10;
    int i=0;
    while(n/int(round(pow(10,i)))!=0){
        i++;
    }
    i--;
    int first=n/int(round(pow(10,i)));
    return n-first*int(round((pow(10,i))))+last*int(round((pow(10,i))));
}

int main(){
    int a[10]={0};
    long long n=1;
    while(true){
        if(func(n)%n==0){
            int i=func(n)/n;
            if(a[i]==0){
                a[i]=n;
            }
        }
        int sum=0;
        for(int i=1;i<=9;i++){
            if(a[i]!=0)
                sum++;
        }
        if(sum==9)
            break;
        n++;
    }
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    /*cout<<pow(10,0)<<endl;
    cout<<int(pow(10,0))<<endl;*/
    return 0;
}
