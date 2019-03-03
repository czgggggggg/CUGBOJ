#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    set<int>::iterator iter;
    int x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
    int a[s.size()];
    int i=0;
    for(iter=s.begin();iter!=s.end();iter++){
        a[i++]=*iter;
    }
    for(int j=0;j<i-1;j++){
        cout<<a[j]<<" ";
    }
    cout<<a[i-1]<<endl;
    return 0;
}
