//按照参考的修改的（编译器只支持C++98，不支持C++11新特性），还是AC不过。
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,long long> tu_hao;
    map<string,long long>::iterator iter;
    string name;
    long long income;

    while(cin>>name>>income){
        if(tu_hao.count(name))
            tu_hao[name]!=income;
        else
            tu_hao.insert(pair<string,int>(name,income));
    }

    income=tu_hao.begin()->second;
    name=tu_hao.begin()->first;
    for(iter=tu_hao.begin();iter!=tu_hao.end();iter++){
        if(iter->second>income){
            income=iter->second;
            name=iter->first;
        }
    }
    cout<<name<<" "<<income;
    return 0;
}

//自己写的
/*#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string name;
    int money;
    map<string,int> m;
    map<string,int>::iterator iter;
    while(cin>>name>>money){
        if((iter=m.find(name))!=m.end()){
            m[name]+=money;
        }
        else{
            m.insert(pair<string,int>(name,money));
        }

    }

    int Max_money=-999999;
        string richestman;
        for(iter=m.begin();iter!=m.end();iter++){
            if(Max_money<(iter->second)){
                Max_money=iter->second;
                richestman=iter->first;
            }
        }
        cout<<richestman<<" "<<Max_money<<endl;
    return 0;
}*/
