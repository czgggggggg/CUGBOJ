#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int row;
    cin>>row;     //row-1
    int first[m],end[m],number[m];
    int count=0;
    for(int i=0;i<m;i++){
        if(i==0){
            first[count]=i+1;
            number[count]=a[row-1][i];
        }
        else{
            if(a[row-1][i]!=number[count]){
                end[count]=i;
                count++;
                first[count]=i+1;
                number[count]=a[row-1][i];
            }
        }
    }
    end[count]=m;
    for(int i=0;i<=count;i++){
        cout<<first[i]<<" "<<end[i]<<" "<<number[i]<<endl;
    }
    return 0;
}
