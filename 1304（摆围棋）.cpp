#include<iostream>
#include<string>
using namespace std;
int main(){
    int a[100][100]={0};
    int n,x,y,l;
    cin>>n;
    string str;
    int num[n]={0};
    int k=0;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="BLACK"){
            cin>>x>>y>>l;
            for(int i=x-1;i<=x+l-2;i++){
                for(int j=y-1;j<=y+l-2;j++){
                    a[i][j]=1;
                }
            }
        }
        else if(str=="WHITE"){
            cin>>x>>y>>l;
            for(int i=x-1;i<=x+l-2;i++){
                for(int j=y-1;j<=y+l-2;j++){
                    a[i][j]=0;
                }
            }
        }
        else if(str=="COUNT"){
            for(int i=0;i<100;i++){
                for(int j=0;j<100;j++){
                    if(a[i][j]==1)
                        num[k]++;
                }
            }
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
