#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        unsigned long long i=1;
        int w=1;
        while(1){
            if(i%x==0){
                cout<<w<<endl;
                break;
            }
            else{
                i=(i*10+1)%x;    //妙啊，我居然没想到            //这里为什么要%x;而且没有%x还超时   //这一步没有理解
                w++;
            }
        }
    }
    return 0;
}

//自己写的，超时，测试数据没有问题
/*#include<iostream>
#include<cmath>
using namespace std;
bool oneone(int n){//判断n是否每一位都是1
    int i=0;
    while(n/int(round(pow(10,i)))!=0){
        if((n/int(round(pow(10,i))))%10!=1)
            return false;
        i++;
    }
    return true;
}
int weishu(int n){//判断一个数的位数
    int i=0;
    while(n/int(round(pow(10,i)))!=0){
        i++;
    }
    return i;
}
int func(int n){
    int i=1;
    int num;
    while(true){
        num=i*n;
        if(oneone(num)){
            //return i;
            return weishu(num);
        }
        i++;
    }
}
int main(){
    int n;
    while(cin>>n){
        n=func(n);
        cout<<n<<endl;
    }
    return 0;
}*/
