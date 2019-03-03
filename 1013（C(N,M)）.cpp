#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N[T],M[T];
    for(int i=0;i<T;i++){
        cin>>N[i]>>M[i];
    }
    for(int i=0;i<T;i++){
        long long a=1,b=1;    //考虑到阶乘比较大，这里采用long long类型。
        for(int j=0;j<N[i];j++){
            a*=(M[i]-j);
            b*=(j+1);
        }
        cout<<a/b<<endl;
    }
    return 0;
}
