#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        unsigned long long i=1;
        int w=1;
        while(1){
            if(i%x==0){
                cout<<w<<endl;
                break;
            }
            else{
                i=(i*10+1)%x;    //����Ҿ�Ȼû�뵽            //����ΪʲôҪ%x;����û��%x����ʱ   //��һ��û�����
                w++;
            }
        }
    }
    return 0;
}

//�Լ�д�ģ���ʱ����������û������
/*#include<iostream>
#include<cmath>
using namespace std;
bool oneone(int n){//�ж�n�Ƿ�ÿһλ����1
    int i=0;
    while(n/int(round(pow(10,i)))!=0){
        if((n/int(round(pow(10,i))))%10!=1)
            return false;
        i++;
    }
    return true;
}
int weishu(int n){//�ж�һ������λ��
    int i=0;
    while(n/int(round(pow(10,i)))!=0){
        i++;
    }
    return i;
}
int func(int n){
    int i=1;
    int num;
    while(true){
        num=i*n;
        if(oneone(num)){
            //return i;
            return weishu(num);
        }
        i++;
    }
}
int main(){
    int n;
    while(cin>>n){
        n=func(n);
        cout<<n<<endl;
    }
    return 0;
}*/
