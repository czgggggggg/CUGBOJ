#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int height[n];
        int sum_heights=0;
        for(int i=0;i<n;i++){
            cin>>height[i];
            sum_heights+=height[i];
        }
        if(sum_heights%n==0){
            int mov_heights=0;
            int avr_height=sum_heights/n;
            for(int i=0;i<n;i++){
                if(height[i]>avr_height)
                    mov_heights+=(height[i]-avr_height);
            }
            cout<<mov_heights<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
        cin>>n;
    }
    return 0;
}
