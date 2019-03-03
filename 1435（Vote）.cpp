//这道题无论是州数还是州投票数的大小是否为奇偶数，过半处理的方式都是一样的
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        int num=0;
        int m=n/2;       //n=8 m=4     n=7 m=3
        for(int i=0;i<=m;i++){  //0 1 2 3 4      0 1 2 3
            num+=(a[i]/2+1);   // 8->5 7->4
        }
        cout<<num<<endl;
        cin>>n;
    }
    return 0;
}
