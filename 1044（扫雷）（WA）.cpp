//测试已经完全通过，非常完美，But WA。
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char Map1[n][n];//初始雷区矩阵
    char Map2[n][n];//触发矩阵
    char Map3[n][n];//触发结果矩阵
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Map1[i][j];
            Map3[i][j]=Map1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Map2[i][j];
            int count=48;                 //0的ASCII码为48
            if(Map2[i][j]=='+'){
                if(i-1>=0&&j-1>=0&&Map1[i-1][j-1]=='*')
                    count++;
                if(i-1>=0&&j>=0&&Map1[i-1][j]=='*')
                    count++;
                if(i-1>=0&&j+1>=0&&Map1[i-1][j+1]=='*')
                    count++;
                if(i>=0&&j+1>=0&&Map1[i][j+1]=='*')
                    count++;
                if(i+1>=0&&j+1>=0&&Map1[i+1][j+1]=='*')
                    count++;
                if(i+1>=0&&j>=0&&Map1[i+1][j]=='*')
                    count++;
                if(i+1>=0&&j-1>=0&&Map1[i+1][j-1]=='*')
                    count++;
                if(i>=0&&j-1>=0&&Map1[i][j-1]=='*')
                    count++;
                Map3[i][j]=count;
                if(Map1[i][j]=='*')
                    Map3[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Map3[i][j];
        }
        cout<<endl;
    }
    return 0;
}
