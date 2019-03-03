#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char Id[n][10];
    int Month[n];
    int Day[n];

    int Date[12][31]={0};

    for(int i=0;i<n;i++){
        cin>>Id[i]>>Month[i]>>Day[i];
        Date[Month[i]-1][Day[i]-1]++;
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<31;j++){
            if(Date[i][j]>1){
                cout<<i+1<<" "<<j+1<<" ";
                for(int k=0;k<n;k++){
                    if(Month[k]==i+1&&Day[k]==j+1){
                        cout<<Id[k]<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
