#include<iostream>
using namespace std;
int main(){
    while(true){
        int a[1000];
        int i=0;
        cin>>a[i];
        if(a[0]==-1)
            break;
        else{
            while(a[i]!=0){
                i++;
                cin>>a[i];
            }
        }
        //��ʱa[i]==0��0~i-1����Ҫ�������������鹲��i����ЧԪ��
        int count=0;
        for(int j=0;j<i;j++){
            for(int k=0;k<i;k++){
                if(a[j]==2*a[k]||a[k]==2*a[j])
                    count++;
            }
        }
        cout<<count/2<<endl;
    }
    return 0;
}
