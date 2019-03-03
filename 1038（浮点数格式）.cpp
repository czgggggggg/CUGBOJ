//采用处理字符串的方式处理本题中的浮点数
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct flpoint{
    string s;//以字符串形式存储浮点数
    int pot;//小数点的位置
}ss[10005];

int main(){
    int n,maxx=0;
    string q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q;
        ss[i].s=q;
        ss[i].pot=ss[i].s.find('.');//这么骚的操作？？？        //通过字符串的字符查找函数找到小数点的位置
        if(ss[i].pot>maxx)
            maxx=ss[i].pot;
    }
    for(int i=0;i<n;i++){
        cout<<setfill(' ')<<setw(maxx-ss[i].pot+ss[i].s.length())<<ss[i].s<<endl;
    }
    return 0;
}





//自己写的有问题
/*#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int weishu(int x){
    int i=0;
    while((x/int(round(pow(10,i))))!=0){
        i++;
    }
    return i;
}

int main(){
    int n;
    cin>>n;
    double a[n];
    int num_weishu[n];
    int x;
    int max_weishu=-9999;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=int(fabs(a[i]));
        num_weishu[i]=weishu(x);
        if(x==0)
            num_weishu[i]++;//注意整数为0也占一位
        if(a[i]<0)                //注意符号也占一位
            num_weishu[i]++;
        if(num_weishu[i]>max_weishu)
            max_weishu=num_weishu[i];
    }
    for(int i=0;i<n;i++){
        cout<<setfill(' ')<<setw(max_weishu-num_weishu[i])<<a[i]<<endl;//???    //小数不能填充，而字符串可以，所以小数怎么填充
    }
    return 0;
}*/
