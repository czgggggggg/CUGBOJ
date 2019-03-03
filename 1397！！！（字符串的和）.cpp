//c++怎么让输入的字符串包含空格？？？
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string c;
    getline(cin,c);              //getline(cin,str)读取一行，可以包含字符串
    while(c!="#"){
        int sum=0;
        for(int i=0;i<c.length();i++){       //string类的length()函数
            if(c[i]>='A'&&c[i]<='Z')
            sum+=(c[i]-64)*(i+1);
        }
        cout<<sum<<endl;
        getline(cin,c);
    }
    return 0;
}
