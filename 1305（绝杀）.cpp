#include<iostream>
using namespace std;
int Max=-9999;
int main(){
    int a[10],b[10];
    int c[10];
    int j;
    for(int i=0;i<10;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<5;i++){
        c[i]=(a[i]+b[i])-(a[i+5]+b[i+5]);
        if(c[i]>Max){
            Max=c[i];
            j=i;
        }
    }
    cout<<j+1<<endl;
    return 0;
}
