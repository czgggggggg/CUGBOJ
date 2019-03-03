#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char name[n][20];
    int QimoScore[n];
    int BanjiScore[n];
    char IsBanjiganbu[n];
    char IsXibu[n];
    int Lunwen[n];
    int money[n]={0};//初值全部为零
    int MaxMoney=0;//个人最高总奖金额
    int SumMoney=0;//发放的总奖金额（包括所有人）
    int MaxMoneyStudent;
    for(int i=0;i<n;i++){
        cin>>name[i]>>QimoScore[i]>>BanjiScore[i]>>IsBanjiganbu[i]>>IsXibu[i]>>Lunwen[i];
        if(QimoScore[i]>80&&Lunwen[i]>=1)
            money[i]+=8000;
        if(QimoScore[i]>85&&BanjiScore[i]>80)
            money[i]+=4000;
        if(QimoScore[i]>90)
            money[i]+=2000;
        if(QimoScore[i]>85&&IsXibu[i]=='Y')
            money[i]+=1000;
        if(BanjiScore[i]>80&&IsBanjiganbu[i]=='Y')
            money[i]+=850;
        if(money[i]>MaxMoney){
            MaxMoneyStudent=i;
            MaxMoney=money[i];
        }
        SumMoney+=money[i];
    }
    cout<<name[MaxMoneyStudent]<<endl;
    cout<<money[MaxMoneyStudent]<<endl;
    cout<<SumMoney<<endl;
    return 0;
}
