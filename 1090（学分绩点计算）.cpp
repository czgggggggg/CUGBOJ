#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int score[5];
    double jidian[5],final_jidian[5];
    for(int i=0;i<5;i++){
        cin>>jidian[i]>>score[i];
        if(score[i]>=90&&score[i]<=100)
            final_jidian[i]=jidian[i]*4.0;
        else if(score[i]>=85)
            final_jidian[i]=jidian[i]*3.5;
        else if(score[i]>=80)
            final_jidian[i]=jidian[i]*3.0;
        else if(score[i]>=75)
            final_jidian[i]=jidian[i]*2.5;
        else if(score[i]>=70)
            final_jidian[i]=jidian[i]*2.0;
        else if(score[i]>=65)
            final_jidian[i]=jidian[i]*1.5;
        else if(score[i]>=60)
            final_jidian[i]=jidian[i]*1.0;
        else
            final_jidian[i]=0;
    }
    double sum_jidian=0;
    double sum_final_jidian=0;
    for(int i=0;i<5;i++){
        sum_jidian+=jidian[i];
        sum_final_jidian+=final_jidian[i];
    }
    double ave_final_jidian=sum_final_jidian/sum_jidian;
    cout<<fixed<<setprecision(2)<<ave_final_jidian<<endl;
    return 0;
}
