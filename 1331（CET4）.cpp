#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    int count;
    while(cin>>n){
        int a[n];
        count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=425){
                count++;
            }
        }
        cout<<fixed<<setprecision(2)<<(double(count)/n)*100<<"%"<<endl;
    }
    return 0;
}
