//可能是我想多了，好像挺复杂的。
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int Daikuan[n];
        int Endtime[n];
        for(int i=0;i<n;i++){
            cin>>Daikuan[i]>>Endtime[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                int temp;
                if(Endtime[j]>Endtime[j+1]){
                    temp=Endtime[j];
                    Endtime[j]=Endtime[j+1];
                    Endtime[j+1]=temp;

                    temp=Daikuan[j];
                    Daikuan[j]=Daikuan[j+1];
                    Daikuan[j+1]=temp;
                }
            }
        }



    }
}
