#include<iostream>
using namespace std;
int main(){
    char c;
    c=cin.get();
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        cout<<"It is an English character.\n";
    else if(c>='0'&&c<='9')
        cout<<"It is a digit character.\n";
    else if(c==' ')
        cout<<"It is a space character.\n";
    else
        cout<<"It is other character.\n";
    return 0;
}
