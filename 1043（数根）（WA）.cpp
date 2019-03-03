//测试实例通过，查不出有什么问题，WA，无法AC
#include<iostream>
#include<cmath>
using namespace std;
int func(int n){//利用递归计算一个数的数根
    int sum=0;
    int i=0;
    while(int(n/pow(10,i))!=0){
        sum+=(int(n/pow(10,i))%10);
        i++;
    }
    if(sum>=10)
        return func(sum);
    return sum;
}
int main(){
    int a[1000];
    int sum[1000];
    int i=0;
    cin>>a[i];
    while(a[i]!=0){
        sum[i]=func(a[i]);
        i++;
        cin>>a[i];
    }//最终数组有效元素的个数是i
    for(int j=0;j<i;j++){
        cout<<sum[j]<<endl;
    }
    return 0;
}
