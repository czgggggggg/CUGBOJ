#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int n,m;
    string str;
    cin>>n>>m;
    set<string> s;
    for(int i=0;i<n;i++){
        cin>>str;
        s.insert(str);
    }
    set<string>::iterator iter;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>str;
        if((iter=s.find(str))!=s.end())
            a[i]=1;
        else
            a[i]=0;
    }
    for(int i=0;i<m;i++)
        cout<<a[i]<<endl;
    return 0;
}
