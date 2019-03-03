#include<iostream>
using namespace std;
int main(){
    int year,month,day;
    char c1,c2;
    cin>>year>>c1>>month>>c2>>day;
    c1=c2='.';
    cout<<month<<c1<<day<<c2<<year<<endl;
    return 0;
}
