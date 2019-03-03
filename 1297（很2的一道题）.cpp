#include<iostream>
#include<cmath>
int min_cha=9999;
using namespace std;
int how_much_two(int number){//计算整数中2的个数
    int num=0;
    int i=0;
    while(number/pow(10,i)!=0){
        if(int(number/pow(10,i))%10==2)
            num++;
        i++;
    }
    return num;
}
int main(){
    int my_number;
    int my_num=0;
    int n;
    cin>>my_number>>n;
    int numbers[n];
    int num[n]={0};
    for(int i=0;i<n;i++){
        cin>>numbers[i];
        num[i]=how_much_two(numbers[i]);
    }
    my_num=how_much_two(my_number);
    int tag;                            //计算2的个数与my_number中的2的个数最近的数。
    for(int i=0;i<n;i++){
        if(abs(my_num-num[i])<min_cha){
            min_cha=abs(my_num-num[i]);
            tag=i;
        }
    }
    cout<<numbers[tag]<<endl;
    return 0;
}
