#include<iostream>
using namespace std;
int func(int a,int b){
    if(a==1&&b==1)
        return 1;
    else if(a==1&&b>1)
        return func(a,b-1)-2;
    else if(a>1&&b==1)
        return func(a-1,b)+1;
    else
        return func(a-1,b)+1;
        //»òÕßreturn func(a,b-1)-2;
}

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int answer[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        answer[i]=func(a[i],b[i]);
    }
    for(int i=0;i<n;i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}
