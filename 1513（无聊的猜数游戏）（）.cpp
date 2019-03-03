//此题我认为测试示例有错误，76只需要猜9次，而非10次，其他的数据没有问题。
#include<iostream>
using namespace std;

int func(int num,int low,int high){//计算猜中num需要的次数
    int mid=(low+high)/2;
    if(mid==num)
        return 1;
    else{
        if(mid>num)
            return 1+func(num,low,mid);
        else if(mid<num)
            return 1+func(num,mid,high);
    }
}

int main(){
    int num;
    cin>>num;
    while(num!=0){
        cout<<func(num,1,1000)<<endl;
        cin>>num;
    }
}
