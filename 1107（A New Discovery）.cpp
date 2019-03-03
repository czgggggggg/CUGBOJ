#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int temp;
        for(int j=0;j<n-1-i;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    double m=a[0];
    for(int i=1;i<n;i++){
        m=2*sqrt(m*a[i]);
    }
    cout<<fixed<<setprecision(3)<<m<<endl;
    return 0;
}
