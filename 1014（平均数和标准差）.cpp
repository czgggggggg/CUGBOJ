#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int T;
    cin>>T;
    int a[T][5];
    for(int i=0;i<T;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<T;i++){
        int sum=0;
        double average;
        double biaozhuncha=0;
        for(int j=0;j<5;j++){
            sum+=a[i][j];
        }
        average=double(sum)/5;
        for(int j=0;j<5;j++){
            biaozhuncha+=pow((a[i][j]-average),2);
        }
        biaozhuncha/=5;
        biaozhuncha=sqrt(biaozhuncha);
        cout<<fixed<<setprecision(3)<<average<<" "<<biaozhuncha<<endl;
    }
    return 0;
}
