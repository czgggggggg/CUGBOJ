#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int X1,Y1,X2,Y2;
    cin>>X1>>Y1>>X2>>Y2;
    int count=0;
    for(int i=0;i<n;i++){
        if(x[i]>=X1&&x[i]<=X2&&y[i]>=Y1&&y[i]<=Y2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
