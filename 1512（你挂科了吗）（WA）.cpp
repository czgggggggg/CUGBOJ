#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int usual_score[n];
    int qimo_score[n];
    int final_score[n];
    for(int i=0;i<n;i++){
        cin>>usual_score[i]>>qimo_score[i];
        final_score[i]=round(usual_score[i]*0.3+qimo_score[i]*0.7);
    }
    for(int i=0;i<n;i++){
        if(final_score[i]>=60)
            cout<<final_score[i]<<endl;
        else{
            if(final_score[i]>=55&&round(30+qimo_score[i]*0.7)>=60){
                cout<<"60\n";
                cout<<"You are so lucky!\n";
            }
            else
                cout<<"Sorry,you have not passed the exam.\n";
        }
    }
    return 0;
}


/*
注：
double a=2.5;
    cout<<ceil(a)<<endl;   //向上取整
    cout<<floor(a)<<endl;   //向下取整
    cout<<round(a)<<endl;   //四舍五入
*/
