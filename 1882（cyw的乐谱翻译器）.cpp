#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    string c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        switch(a[i]){
        case 1:
            c[i]="gong";
            break;
        case 2:
            c[i]="shang";
            break;
        case 3:
            c[i]="jue";
            break;
        case 5:
            c[i]="zhi";
            break;
        case 6:
            c[i]="yu";
            break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<c[i]<<endl;
    return 0;
}
