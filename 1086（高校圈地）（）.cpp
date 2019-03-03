//关于10的15次方的问题
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    long long i;
    for(i=0;;i++){
        if((i*i+10*i+100)>t*t||(i*i+10*i+100)>pow(10,7))
            break;
    }
    cout<<i-1<<endl;
    return 0;
}
