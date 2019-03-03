#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c[n][3];
    int sum[n]={0};
    double avr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>c[i][j];
            sum[i]+=c[i][j];
        }
        avr[i]=double(sum[i])/3;
    }
    for(int i=0;i<n;i++)
        cout<<fixed<<setprecision(2)<<avr[i]<<endl;
    return 0;
}
