#include<iostream>
using namespace std;
int main(){
    char sex;
    double father_height,mother_height;
    char sports,diet;
    double height;
    cin>>sex>>father_height>>mother_height>>sports>>diet;
    if(sex=='F'||sex=='f')
        height=(father_height*0.932+mother_height)/2;
    if(sex=='M'||sex=='m')
        height=(father_height+mother_height)*0.54;
    if(sports=='Y'||sports=='y')
        height*=1.02;
    if(diet=='Y'||diet=='y')
        height*=1.015;
    cout<<"Your future height will be "<<int(height)<<"(cm)\n";
    return 0;
}
