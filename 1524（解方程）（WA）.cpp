//����ʵ��ȫ��ͨ��������AC����������
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    double x1[n],x2[n];//ע�⺯����Ϊ���������
    int tag[n];//��Ǻ���һԪ���κ���������ͣ���������ͬ�Ľ���Ϊ2����������ͬ�Ľ���Ϊ1����ʵ������Ϊ0
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i];
    for(int i=0;i<n;i++){
        if(b[i]*b[i]-4*a[i]*c[i]>0){             //��������ͬ�Ľ�
            tag[i]=2;
            x1[i]=double(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
            x2[i]=double(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
        }
        else if(b[i]*b[i]-4*a[i]*c[i]==0){       //��������ͬ�Ľ�
            tag[i]=1;
            x1[i]=double(-b[i])/(2*a[i]);
        }
        else if(b[i]*b[i]-4*a[i]*c[i]<0){        //��ʵ����
            tag[i]=0;
            x1[i]=double(-b[i])/(2*a[i]);
            x2[i]=fabs(double(sqrt(4*a[i]*c[i]-b[i]*b[i]))/(2*a[i]));
        }
    }
    for(int i=0;i<n;i++){
        if(tag[i]==0){
            cout<<fixed<<setprecision(3)<<x1[i]<<"+"<<x2[i]<<"i "<<x1[i]<<"-"<<x2[i]<<"i"<<endl;
        }
        else if(tag[i]==1){
            cout<<fixed<<setprecision(3)<<x1[i]<<endl;
        }
        else if(tag[i]==2){
            cout<<fixed<<setprecision(3)<<x1[i]<<" "<<x2[i]<<endl;
        }
    }
    return 0;
}
