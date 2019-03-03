#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    int b[4];
    for(int j=0;j<4;j++){
        b[j]=a[0][j];
        for(int i=1;i<3;i++){
            if(a[i][j]<b[j])
                b[j]=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<setw(3)<<a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        cout<<setw(3)<<b[i];
    }
    cout<<endl;
    return 0;
}
