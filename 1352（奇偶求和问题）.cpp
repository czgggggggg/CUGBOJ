#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int a[n];
        int jishu_chengji=1;
        int oushu_he=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)
                oushu_he+=a[i];
            else
                jishu_chengji*=a[i];
        }
        cout<<oushu_he+jishu_chengji<<endl;
    }
    return 0;
}
