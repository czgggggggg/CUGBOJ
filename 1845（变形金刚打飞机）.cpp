//PE...��......����һ�����ڣ�����AC�����ڴ˵�����������һ�����ֺ��治�ܴ��пո�������������ټ�һ�����У���cout<<endl;��
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int id[n];
    int time[n];
    for(int i=0;i<n;i++){
        cin>>id[i];
    }
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(time[j]>time[j+1]){
                int temp=time[j];
                time[j]=time[j+1];
                time[j+1]=temp;

                temp=id[j];
                id[j]=id[j+1];
                id[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
        cout<<id[i]<<" ";
    cout<<id[n-1];
    return 0;
}
