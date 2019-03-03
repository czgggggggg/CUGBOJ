#include<iostream>
#include<string>
using namespace std;
int main(){
    char c;
    string str;
    string::iterator it;
    cin>>c;
    while(c!='Y'){
        cin>>str;
        if(c=='X'){
            for (it = str.begin(); it != str.end(); it++){
                if((*it)>='a')
                    *it=*it-32;
            }
        }
        else if(c=='x'){
            for (it = str.begin(); it != str.end(); it++){
                if((*it)<='Z')
                    *it=*it+32;
            }
        }
        cout<<str<<endl;
        cin>>c;
   }

    return 0;
}

