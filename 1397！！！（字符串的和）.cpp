//c++��ô��������ַ��������ո񣿣���
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string c;
    getline(cin,c);              //getline(cin,str)��ȡһ�У����԰����ַ���
    while(c!="#"){
        int sum=0;
        for(int i=0;i<c.length();i++){       //string���length()����
            if(c[i]>='A'&&c[i]<='Z')
            sum+=(c[i]-64)*(i+1);
        }
        cout<<sum<<endl;
        getline(cin,c);
    }
    return 0;
}
