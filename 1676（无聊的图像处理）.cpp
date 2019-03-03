#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int image[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>image[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            cout<<(image[i][j]+image[i][j+1]+image[i+1][j]+image[i+1][j+1])/4;
        }
        cout<<endl;
    }
    return 0;
}
