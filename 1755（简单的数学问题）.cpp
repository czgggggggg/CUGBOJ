#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int func(int n){//n的阶乘
    if(n==0)
        return 1;
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    double x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    double ans[n];
    for(int i=0;i<n;i++){
        double sum=0;
        int k=0;
        while(pow(x[i],k)/func(k)>=0.0001){
              sum+=(pow(x[i],k)/func(k));
              k++;
        }
        sum+=(pow(x[i],k)/func(k));//保证最后一项小于10^4？？？
        ans[i]=100+sum;
    }
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(4)<<ans[i]<<endl;
    }
    return 0;
}
