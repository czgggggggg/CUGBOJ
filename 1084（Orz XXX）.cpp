#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int num[t];
    int numbers[t][10000];
    int new_numbers[t][10000];
    for(int i=0;i<t;i++){
        cin>>num[i];
        for(int j=0;j<num[i];j++)
            cin>>numbers[i][j];
        for(int p=0;p<num[i]-1;p++){//数组降序排序
            for(int q=0;q<num[i]-1-p;q++){
                if(numbers[i][q]<numbers[i][q+1]){
                    int temp=numbers[i][q];
                    numbers[i][q]=numbers[i][q+1];
                    numbers[i][q+1]=temp;
                }
            }
        }
        int k=0;
        for(int p=0;p<num[i]/2;p++){
            new_numbers[i][k++]=numbers[i][p];
            new_numbers[i][k++]=numbers[i][num[i]-1-p];
        }
        if(num[i]%2==1)
            new_numbers[i][k]=numbers[i][num[i]/2];
    }
    for(int i=0;i<t;i++){
        for(int p=0;p<num[i];p++){
            cout<<new_numbers[i][p]<<" ";
        }
        //cout<<new_numbers[i][num[i]-1];             //最后一个元素后面带空格才能AC，否则PE
        cout<<endl;
    }
    return 0;
}
