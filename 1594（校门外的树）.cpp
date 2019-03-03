#include<iostream>
using namespace std;
int main(){
    int l,m;
    cin>>l>>m;
    int tree[l+1];
    for(int i=0;i<=l;i++)
        tree[i]=1;
    int a[m],b[m];
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
        for(int j=a[i];j<=b[i];j++)
            tree[j]=0;
    }
    int num=0;
    for(int i=0;i<=l;i++){
        if(tree[i]==1)
            num++;
    }
    cout<<num<<endl;
    return 0;
}

