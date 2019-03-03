#include<iostream>
using namespace std;
int main(){
    char a[3];
    while(cin>>a[0]>>a[1]>>a[2]){
        for(int i=0;i<2;i++){
            for(int j=0;j<2-i;j++){
                if(a[j]>a[j+1]){
                    char temp;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        cout<<a[0]<<a[1]<<a[2]<<endl;
    }
    return 0;
}
