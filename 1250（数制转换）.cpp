//ע�Ᵽ֤�����ʮ���������Ǵ�д��
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    cin>>hex>>x;
    cout<<oct<<x<<"(Oct), "<<dec<<x<<"(Dec), "<<setiosflags(ios::uppercase)<<hex<<x<<"(Hex)\n";
    return 0;
}
