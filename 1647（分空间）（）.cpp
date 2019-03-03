//n个球面最多把空间分成多少部分？？？





//n个平面最多把空间分成多少部分
//1-2 2-4(2+?)             3-8(4+?)
//     ?1条直线分平面       ?2条直线分平面
/*#include<iostream>
using namespace std;
int func_2d(int a){     //2\4\7\11\16
    if(a==1)
        return 2;
    else{
        int sum=2;
        for(int i=2;i<=a;i++){
            sum+=i;
        }
        return sum;
    }
}
int func_3d(int a){     //2\4\8\15\
    if(a==1)
        return 2;
    else{
        int sum=2;
        for(int i=2;i<=a;i++){//注意a个平面相交产生a-1条直线
            sum+=func_2d(i-1);
        }
        return sum;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i]=func_3d(a[i]);
    }
    for(int i=0;i<n;i++)
        cout<<sum[i]<<endl;
    return 0;
}
