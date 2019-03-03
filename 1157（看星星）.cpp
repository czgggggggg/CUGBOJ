#include<iostream>
using namespace std;
int main(){
    char a[5][9];
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            if(a[i][j]=='#')
                a[i][j]='*';
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
