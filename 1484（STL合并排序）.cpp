#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    set<int>::iterator iter;
    int n;
    int x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    //�޷���STL���sort�㷨������set������set�������һ�������������
    /*for(iter=s.begin();iter!=s.end();iter++){              //set��ôȡ�����ڶ���Ԫ�أ�����   //�÷�iterator�ò���
        cout<<*iter<<" ";
    }*/
    int i=0;                                                 //ֻ�ܽ���������
    int a[1000];
    for(iter=s.begin();iter!=s.end();iter++){
        a[i++]=*iter;
    }
    for(int j=0;j<i-1;j++){
        cout<<a[j]<<" ";
    }
    cout<<a[i-1]<<endl;
    return 0;
}
