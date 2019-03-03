#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int R0;
    cin>>R0;
    int n;
    cin>>n;
    int r[n];
    for(int i=0;i<n;i++){
        cin>>r[i];
    }
    double R=0;//µÈÐ§µç×è
    for(int i=0;i<n;i++){
        R+=double(1)/r[i];
    }
    R+=double(1)/R0;
    R=1/R;
    cout<<fixed<<setprecision(3)<<R<<endl;
    return 0;
}
