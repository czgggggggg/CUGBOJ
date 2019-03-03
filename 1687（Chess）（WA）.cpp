#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][4][4];//定义三维数组
    char result[n];
    for(int k=0;k<n;k++){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cin>>a[k][i][j];
            }
        }

        result[k]='n';

        for(int i=0;i<4;i++){
            if(a[k][i][0]=='x'&&
               a[k][i][0]==a[k][i][1]&&
               a[k][i][0]==a[k][i][2]&&
               a[k][i][0]==a[k][i][3])
            result[k]='x';
            if(a[k][i][0]=='o'&&
               a[k][i][0]==a[k][i][1]&&
               a[k][i][0]==a[k][i][2]&&
               a[k][i][0]==a[k][i][3])
            result[k]='o';
        }

        for(int j=0;j<4;j++){
            if(a[k][0][j]=='x'&&
               a[k][0][j]==a[k][1][j]&&
               a[k][0][j]==a[k][2][j]&&
               a[k][0][j]==a[k][3][j])
            result[k]='x';
            if(a[k][0][j]=='y'&&
               a[k][0][j]==a[k][1][j]&&
               a[k][0][j]==a[k][2][j]&&
               a[k][0][j]==a[k][3][j])
            result[k]='y';
        }

        if(a[k][0][0]=='x'&&
           a[k][0][0]==a[k][1][1]&&
           a[k][0][0]==a[k][2][2]&&
           a[k][0][0]==a[k][3][3])
            result[k]='x';
        if(a[k][0][0]=='x'&&
           a[k][0][0]==a[k][1][1]&&
           a[k][0][0]==a[k][2][2]&&
           a[k][0][0]==a[k][3][3])
            result[k]='x';

        if(a[k][0][3]=='x'&&
           a[k][0][3]==a[k][1][2]&&
           a[k][0][3]==a[k][2][1]&&
           a[k][0][3]==a[k][3][0])
            result[k]='x';
        if(a[k][0][3]=='y'&&
           a[k][0][3]==a[k][1][2]&&
           a[k][0][3]==a[k][2][1]&&
           a[k][0][3]==a[k][3][0])
            result[k]='y';
    }
    for(int i=0;i<n;i++){
        if(result[i]=='n')
            cout<<"none\n";
        else
            cout<<result[i]<<endl;
    }
    return 0;
}
