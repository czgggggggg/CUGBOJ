//n���������ѿռ�ֳɶ��ٲ��֣�����





//n��ƽ�����ѿռ�ֳɶ��ٲ���
//1-2 2-4(2+?)             3-8(4+?)
//     ?1��ֱ�߷�ƽ��       ?2��ֱ�߷�ƽ��
/*#include<iostream>
using namespace std;
int func_2d(int a){     //2\4\7\11\16
    if(a==1)
        return 2;
    else{
        int sum=2;
        for(int i=2;i<=a;i++){
            sum+=i;
        }
        return sum;
    }
}
int func_3d(int a){     //2\4\8\15\
    if(a==1)
        return 2;
    else{
        int sum=2;
        for(int i=2;i<=a;i++){//ע��a��ƽ���ཻ����a-1��ֱ��
            sum+=func_2d(i-1);
        }
        return sum;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i]=func_3d(a[i]);
    }
    for(int i=0;i<n;i++)
        cout<<sum[i]<<endl;
    return 0;
}
