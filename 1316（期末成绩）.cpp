#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    string name[10];
    double score[10];
    for(int i=0;i<10;i++){
        cin>>name[i]>>score[i];
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(score[j]<score[j+1]){
                double temp=score[j];
                score[j]=score[j+1];
                score[j+1]=temp;

                string temp_name=name[j];
                name[j]=name[j+1];
                name[j+1]=temp_name;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<name[i]<<" "<<fixed<<setprecision(1)<<score[i]<<endl;
    }
    return 0;
}
