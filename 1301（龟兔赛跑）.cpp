#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int gui_v,tu_v,dis;
    cin>>gui_v>>tu_v>>dis;
    double time;
    while(!(gui_v==0&&tu_v==0&&dis==0)){
        time=double(dis)/gui_v-double(dis)/tu_v;
        cout<<fixed<<setprecision(3)<<time<<endl;
        cin>>gui_v>>tu_v>>dis;
    }
    return 0;
}
