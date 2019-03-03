//此题问题本质还没有看清，根据前四个图可以粗略做出一些推断。
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
