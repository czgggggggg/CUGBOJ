//注意保证输出的十六进制数是大写的
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    cin>>hex>>x;
    cout<<oct<<x<<"(Oct), "<<dec<<x<<"(Dec), "<<setiosflags(ios::uppercase)<<hex<<x<<"(Hex)\n";
    return 0;
}
