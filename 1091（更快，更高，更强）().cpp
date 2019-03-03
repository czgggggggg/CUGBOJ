//注意cin如何输入中文字符串
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
    if(c=="更高"||c=="更强"){             //
        int max=0;
        for(int i=0;i<n;i++){
            if(max<a[i])
                max=a[i];
        }
        cout<<max<<endl;
    }
    else if(c=="更快"){                    //
        int min=2008;
        for(int i=0;i<n;i++){
            if(min>a[i])
                min==a[i];
        }
    }
    return 0;
}
