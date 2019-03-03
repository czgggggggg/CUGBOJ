#include<iostream>
using namespace std;
int main(){
    int button[4];
    for(int i=0;i<4;i++){
        cin>>button[i];
    }
    for(int i=0;i<4;i++){
        if(button[i]==1){
            cout<<'L'<<i+1<<endl;
            break;
        }
        if(i==3)
            cout<<"-1"<<endl;
    }
    return 0;
}
