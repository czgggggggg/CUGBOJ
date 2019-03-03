#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<1000;i++){
        int item[1000];
        item[0]=1;
        int sum=item[0];
        int count=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                item[count]=j;
                sum+=j;
                count++;
            }
        }
        if(i==sum){
            cout<<i<<"="<<item[0];
            for(int j=1;j<count;j++){
                cout<<"+"<<item[j];
            }
            cout<<endl;
        }
    }
    return 0;
}
