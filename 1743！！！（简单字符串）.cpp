#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string c[n];
    cin.get();//读取字符串个数后面的换行符
    for(int i=0;i<n;i++){
        //cin.get();
        getline(cin,c[i]);//读取整行，包括最后的换行符
    }
    for(int i=0;i<n;i++){
        cout<<"Case #"<<i+1<<" "<<":"<<endl;
        for(int j=0;j<c[i].length();j++){
            if((c[i][j]>='A'&&c[i][j]<='Z')||(c[i][j]>='a'&&c[i][j]<='z'))
                cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}
