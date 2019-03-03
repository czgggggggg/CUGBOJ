#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();
    string tree[n];
    for(int i=0;i<n;i++){
        getline(cin,tree[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(tree[i][j]>='a'&&tree[i][j]<='z')
                count++;
        }
    }
    cout<<fixed<<setprecision(3)<<double(count)/(n*n)<<endl;
    return 0;
}
