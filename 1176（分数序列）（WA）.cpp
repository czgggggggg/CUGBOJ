#include<iostream>
#include<iomanip>
using namespace std;
/*int num(int n){              //TLE
    if(n==1)
        return 2;
    else if(n==2)
        return 3;
    else
        return num(n-1)+num(n-2);
}
int den(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return den(n-1)+den(n-2);
}
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=(double(num(i+1))/den(i+1));
    }
    cout<<fixed<<setprecision(8)<<sum<<endl;
    return 0;
}*/
int main(){
    int n;
    cin>>n;
    long long num,den;
    double sum=0;
    long long tempnum1,tempden1;
    long long tempnum2,tempden2;
    for(int i=0;i<n;i++){
        if(i==0){
            num=2;
            den=1;
            tempnum1=num;
            tempden1=den;
            sum+=double(num)/den;
        }
        else if(i==1){
            num=3;
            den=2;
            tempnum2=num;
            tempden2=den;
            sum+=double(num)/den;
        }
        else{
            num=tempnum1+tempnum2;
            den=tempden1+tempden2;
            tempnum1=tempnum2;
            tempden1=tempden2;
            tempnum2=num;
            tempden2=den;
            sum+=double(num)/den;
        }
    }
    cout<<fixed<<setprecision(8)<<sum<<endl;
    return 0;
}
