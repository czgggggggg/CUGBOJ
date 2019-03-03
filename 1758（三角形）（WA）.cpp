#include<iostream>//多个三角形有的复杂，没法用简单的三维数组，还好三角形最大值有限制
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    char san[n][20][20];
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<a[i];j++){
            for(int k=a[i]-1-j;k<a[i]+j;k++){
                san[i][j][k]='*';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            for(int k=0;k<2*a[i]-1;k++){
                if(san[i][j][k]=='*')
                    cout<<'*';
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
/*

 *
***

  *
 ***
*****

...

*/
