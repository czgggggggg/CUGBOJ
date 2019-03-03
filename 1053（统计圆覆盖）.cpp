#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double L,R;
    cin>>L>>R;
    if(R>=L*sqrt(3)/3)
        cout<<'Y'<<endl;
    else
        cout<<'N'<<endl;
    return 0;
}
