#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string c[n];
    cin.get();//��ȡ�ַ�����������Ļ��з�
    for(int i=0;i<n;i++){
        //cin.get();
        getline(cin,c[i]);//��ȡ���У��������Ļ��з�
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
