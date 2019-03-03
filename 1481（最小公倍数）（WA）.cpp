//所有测试均通过，但AC不过，WA。
#include<iostream>
#include<cmath>
using namespace std;
int yue(int a,int b){
    int r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return a;
}
int bei(int a,int b){
    int x=yue(a,b);
    int temp=x;
    while(!(x%a==0&&x%b==0)){
        x+=temp;
    }
    return x;
}
int main(){
    int a,b;
    cin>>a>>b;
    while(!(a==0&&b==0)){
        int num=bei(a,b);
        int c[100];
        int k=0;
        while(num){
            if(num%2==1){
                c[k++]=1;
                num=num/2;
            }
            else{
                c[k++]=0;
                num=num/2;
            }
        }
        for(int i=k-1;i>=0;i--){
            cout<<c[i];
        }
        cout<<endl;
        cin>>a>>b;
    }
    return 0;
}
