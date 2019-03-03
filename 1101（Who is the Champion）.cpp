#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char name[n][30];
    int number[n];
    int time[n];
    int temp_i;
    int temp_number;
    int temp_time;
    for(int i=0;i<n;i++){
        cin>>name[i]>>number[i]>>time[i];
        if(i==0){
            temp_i=0;
            temp_number=number[0];
            temp_time=time[0];
        }
        else{
            if(number[i]>temp_number){
                temp_i=i;
                temp_number=number[i];
                temp_time=time[i];
            }
            else if(number[i]==temp_number){
                if(time[i]<temp_time){
                    temp_i=i;
                    temp_number=number[i];
                    temp_time=time[i];
                }
            }
        }
    }
    cout<<name[temp_i]<<endl;
    return 0;
}
