#include<iostream>
using namespace std;
int main(){
    int L;
    cin>>L;
    char zuanshi[2*L][2*L]={' '};

    for(int i=0;i<L;i++){
        for(int j=0;j<2*L;j++){
            if(j==L-i-1)
                cout<<'/';
            else if(j==L+i){
                cout<<"\\";
                break;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=L;i<2*L;i++){
        for(int j=0;j<2*L;j++){
            if(j==i-L)
                cout<<"\\";
            else if(j==3*L-i-1){
                cout<<'/';
                break;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
