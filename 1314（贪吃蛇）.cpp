#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c[70];
    cin>>c;
    int length=strlen(c);
    int n;
    cin>>n;
    char cc[n];
    for(int i=0;i<n;i++)
        cin>>cc[i];
    for(int i=0;i<n;i++){
        int tag=0;
        for(int j=0;j<length;j++,tag++){
            if(cc[i]==c[j])
                break;
        }
        if(tag==length){
            c[tag]=cc[i];
            length++;
        }
    }
    for(int i=0;i<length;i++){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
