#include<iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    int temp;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<K;i++)
        cout<<a[i]<<endl;
    return 0;
}
