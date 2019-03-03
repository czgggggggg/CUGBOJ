#include<iostream>
using namespace std;
int a[10]={1,5,13,14,20,26,34,48,52,60};

int zheban(int x,int low,int high){
    if(low==high){
        if(a[low]==x)
            return low;
        else
            return -1;
    }
    else{
        int mid=(low+high)/2;
        if(x<a[mid])
            return zheban(x,low,mid-1);
        else if(x>a[mid]){
            return zheban(x,mid+1,high);
        }
        else
            return mid;
    }
}

int main(){
    int x;
    cin>>x;
    cout<<zheban(x,0,9)<<endl;
    return 0;
}
