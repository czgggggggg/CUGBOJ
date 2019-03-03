#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int money,n;
    double sum_baozi=0;//变量名不能和数组名同名
    cin>>money>>n;
    int baozi[n],jinzi[n];
    double baojinbi[n];
    for(int i=0;i<n;i++){
        cin>>baozi[i]>>jinzi[i];
        baojinbi[i]=double(baozi[i])/jinzi[i];
    }
    int temp1,temp2;
    double temp3;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(baojinbi[j]<baojinbi[j+1]){
                temp1=baozi[j];
                baozi[j]=baozi[j+1];
                baozi[j+1]=temp1;

                temp2=jinzi[j];
                jinzi[j]=jinzi[j+1];
                jinzi[j+1]=temp2;


                temp3=baojinbi[j];
                baojinbi[j]=baojinbi[j+1];
                baojinbi[j+1]=temp3;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(money==0)
            break;
        else if(money>=jinzi[i]){
            sum_baozi+=baozi[i];
            money-=jinzi[i];
        }
        else{
            sum_baozi+=baozi[i]*double(money)/jinzi[i];
            money=0;//钱用完了，呜呜呜~
        }
    }
    cout<<fixed<<setprecision(3)<<sum_baozi<<endl;//哈哈哈，我买了这么多的包子！
    return 0;
}
