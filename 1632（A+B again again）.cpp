#include<iostream>
#include<cmath>
using namespace std;
int num_wei(int x){//判断整数x有几位
    int num=0;
    while(x/int(pow(10,num))!=0){
        num++;
    }
    return num;
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int c=a+b;
    n=num_wei(c)-n+1;//从左往右数第n位，转化为从右往左数第n位。
    cout<<(c/int(pow(10.0,n-1)))%10<<endl;
    return 0;
}
//12345 455 3
//12800


//注意：pow(10,2)==100
//但是，12800/int(pow(10,2)==129
//搞什么鬼？？？
/*因为pow返回的是double类型，即浮点数，浮点数本身就是表示一个精度的数字，而不是一个准确的数字。
可能为99.999999
然后转换int所以成为99，
浮点数转换为int是可能丢失精度的。
所以浮点数不比较相等，只认为两个数字差距小到一定精度就认为相等。*/
//为了避免这种情况，将被除数10强制转化为double类型。
