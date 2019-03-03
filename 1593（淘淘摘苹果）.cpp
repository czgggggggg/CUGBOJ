#include<iostream>
using namespace std;
int main(){
    int height[10];
    for(int i=0;i<10;i++)
        cin>>height[i];

    int tall,num=0;
    cin>>tall;
    for(int i=0;i<10;i++){
        if(tall+30>=height[i])
            num++;
    }
    cout<<num;
    return 0;
}
