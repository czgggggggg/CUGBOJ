#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int score[20];
    int Max_score=0;
    int Min_score=9999;
    int sum=0;
    for(int i=0;i<20;i++){
        cin>>score[i];
        sum+=score[i];
        if(Max_score<score[i])
            Max_score=score[i];
        if(Min_score>score[i])
            Min_score=score[i];
    }
    sum=sum-Max_score-Min_score;
    cout<<Max_score<<" "<<Min_score<<" ";
    cout<<fixed<<setprecision(2)<<double(sum)/18<<endl;
    return 0;
}
