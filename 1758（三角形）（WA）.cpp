#include<iostream>//����������еĸ��ӣ�û���ü򵥵���ά���飬�������������ֵ������
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
