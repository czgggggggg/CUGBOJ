#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int min_tag=0;
    int max_tag=0;
    for(int i=1;i<10;i++){
        if(a[min_tag]>a[i]){
            min_tag=i;
        }
        if(a[max_tag]<a[i]){
            max_tag=i;
        }
    }
    int temp=a[min_tag];
    a[min_tag]=a[max_tag];
    a[max_tag]=temp;
    for(int i=0;i<9;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[9]<<endl;
    return 0;
}
