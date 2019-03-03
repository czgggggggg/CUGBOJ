#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    int sum[n];
    for(int k=0;k<n;k++){
        cin>>a[k][0]>>a[k][1];
        sum[k]=0;
        char c[a[k][0]][a[k][1]];

        for(int i=0;i<a[k][0];i++){
            cin>>c[i];                //ÊäÈë×Ö·û´®
        }

        for(int i=0;i<a[k][0];i++){
            for(int j=0;j<a[k][1];j++){
                if(c[i][j]=='1'){
                    sum[k]++;
                }
            }
        }

    }
    for(int k=0;k<n;k++)
        cout<<sum[k]<<endl;
    return 0;
}
