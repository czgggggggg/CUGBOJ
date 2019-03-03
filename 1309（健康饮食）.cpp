#include<iostream>
#include<string>
using namespace std;
int main(){
    string str[4];
    string str_temp="fat";
    int fat_weight;
    int all_weight=0;
    int weight[4];
    for(int i=0;i<4;i++){
        cin>>str[i]>>weight[i];
        if(str[i]==str_temp)
            fat_weight=weight[i];
        all_weight+=weight[i];
    }
    if(double(fat_weight)/all_weight>0.2)
        cout<<"junk food\n";
    else
        cout<<"okay\n";
    return 0;
}
