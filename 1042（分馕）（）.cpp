//�������Ȿ�ʻ�û�п��壬����ǰ�ĸ�ͼ���Դ�������һЩ�ƶϡ�
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number=0;
    for(int i=0;i<n;i++){
        number+=(i+1)*4;
    }
    cout<<number<<endl;
    return 0;
}
