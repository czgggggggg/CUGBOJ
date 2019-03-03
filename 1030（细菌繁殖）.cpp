#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int date[12][31];
    int count=1;
    for(int i=0;i<31;i++){
        date[0][i]=count++;
    }
    for(int i=0;i<28;i++){
        date[1][i]=count++;
    }
    for(int i=0;i<31;i++){
        date[2][i]=count++;
    }
    for(int i=0;i<30;i++){
        date[3][i]=count++;
    }
    for(int i=0;i<31;i++){
        date[4][i]=count++;
    }
    for(int i=0;i<30;i++){
        date[5][i]=count++;
    }
    for(int i=0;i<31;i++){
        date[6][i]=count++;
    }
    for(int i=0;i<31;i++){
        date[7][i]=count++;
    }
    for(int i=0;i<30;i++){
        date[8][i]=count++;
    }
    for(int i=0;i<31;i++){
        date[9][i]=count++;
    }
    for(int i=0;i<30;i++){
        date[10][i]=count++;
    }
    for(int i=0;i<31;i++){
        date[11][i]=count++;
    }
    int n;
    cin>>n;
    long begin_number[n],end_number[n];
    int begin_month[n],end_month[n];
    int begin_day[n],end_day[n];
    int dates[n];
    for(int i=0;i<n;i++){
        cin>>begin_number[i]>>begin_month[i]>>begin_day[i]>>end_month[i]>>end_day[i];
        dates[i]=date[end_month[i]-1][end_day[i]-1]-date[begin_month[i]-1][begin_day[i]-1];
        end_number[i]=begin_number[i]*pow(2,dates[i]);
    }
    for(int i=0;i<n;i++){
        cout<<end_number[i]<<endl;
    }
    return 0;
}
