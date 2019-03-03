#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(abs(a[j])>abs(a[j+1])){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1];                   //搞了半天终于AC了！！！记住，最后一项数字后面没有空格。
    cout<<endl;                                                  //后面换不换行都没关系。
    return 0;
}
