#include<iostream>
#include<cstring>  //<cstring>、<string.h>包含strlen()函数
                   //<string>不包含strlen()函数,但有length()函数。
using namespace std;
int main(){
    int n;
    cin>>n;
    int a1[n],a2[n],a3[n],a4[n];
    char str[n][100];
    int sum[n];
    for(int i=0;i<n;i++){
        cin>>a1[i]>>a2[i]>>a3[i]>>a4[i];
        cin>>str[i];
        sum[i]=0;
        for(int j=0;j<strlen(str[i]);j++){
            switch(str[i][j]){
            case '1':
                sum[i]+=a1[i];
                break;
            case '2':
                sum[i]+=a2[i];
                break;
            case '3':
                sum[i]+=a3[i];
                break;
            case '4':
                sum[i]+=a4[i];
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<sum[i]<<endl;
    return 0;
}
