#include<iostream>
#include<cmath>
using namespace std;
int a[10];
int b[10];
int main(){
    int A,B;
    cin>>A>>B;
    int i=0;
    while(int(A/pow(10,i))!=0){
        a[i]=int(A/pow(10,i))%10;
        i++;
    }                                  //最终结果A有i位
    int j=0;
    while(int(B/pow(10,j))!=0){
        b[j]=int(B/pow(10,j))%10;
        j++;                           //最终结果A有j位
    }
    int sum=0;
    for(int p=0;p<i;p++){
        for(int q=0;q<j;q++){
            sum+=(a[p]*b[q]);
        }
    }
    cout<<sum<<endl;
    return 0;
}
