//ע��cin������������ַ���
#include<iostream>
using namespace std;
int main(){
    char c[10];
    cin>>c;
    int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(c=="����"||c=="��ǿ"){             //
        int max=0;
        for(int i=0;i<n;i++){
            if(max<a[i])
                max=a[i];
        }
        cout<<max<<endl;
    }
    else if(c=="����"){                    //
        int min=2008;
        for(int i=0;i<n;i++){
            if(min>a[i])
                min==a[i];
        }
    }
    return 0;
}
