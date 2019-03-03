//³¬Ê±1000ms->1004ms
#include<iostream>//10->10(1)\5(2)   0(2)\1(2)\2(2)\3(2)\4(2)\5(2)
int floor(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else{
        return floor(n-1)+floor(n-2);
    }
}
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<floor(n)<<endl;
    return 0;
}
