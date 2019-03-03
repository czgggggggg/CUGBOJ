#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    //int max=0;
    //int min=9999;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j]=temp;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    sum=sum-min-max;*/
    cout<<fixed<<setprecision(3)<<double(sum-a[0]-a[n-1])/(n-2)<<endl;
    return 0;
}
