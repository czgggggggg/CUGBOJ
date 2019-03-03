//果然好水
#include<iostream>
using namespace std;
int main(){
    int n,k;
    int m=0;
    int x;
    int num;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        num=0;
        while(x!=0){
            num++;
            cin>>x;
        }
        if(num>=k)
            m++;
    }
    cout<<m<<endl;
    return 0;
}
