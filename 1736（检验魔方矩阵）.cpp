#include<iostream>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int sum[12]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum[i]+=a[i][j];
        }
    }
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            sum[j+5]+=a[i][j];
        }
    }
    for(int i=0;i<5;i++){             //正对角线
        sum[10]+=a[i][i];
    }
    for(int i=0;i<5;i++){             //反对角线
        sum[11]+=a[i][4-i];
    }
    int tag=1;
    for(int i=1;i<12;i++){
        if(sum[i]!=sum[0])
            tag=0;
    }
    if(tag==0)
        cout<<"It is not a magic square!\n";
    else
        cout<<"It is a magic square!\n";
    return 0;
}
