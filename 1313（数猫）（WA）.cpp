//题目要求用STL，这里没有使用
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    int num[3]={0};
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=="white")
            num[0]++;
        else if(str[i]=="black")
            num[1]++;
        else
            num[2]++;
    }
    int j=0;
    int max_num=num[0];
    for(int i=1;i<3;i++){
        if(num[i]>max_num){
            j=i;
            max_num=num[j];
        }
    }
    cout<<str[j]<<endl;
    cout<<max_num<<endl;
    return 0;
}
