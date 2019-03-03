#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    char c[n][50][50];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        for(int j=0;j<a[i];j++){
            if((j+1)%2==1){
                for(int k=0;k<b[i];k++){
                    c[i][j][k]='#';
                }
            }
            else if((j+1)%2==0&&(j+1)%4!=0){
                for(int k=0;k<b[i]-1;k++){
                    c[i][j][k]='.';
                }
                c[i][j][b[i]-1]='#';
            }
            else if((j+1)%2==0&&(j+1)%4==0){
                c[i][j][0]='#';
                for(int k=1;k<b[i];k++){
                    c[i][j][k]='.';
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            for(int k=0;k<b[i];k++){
                cout<<c[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
