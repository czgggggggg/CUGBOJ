//���ô����ַ����ķ�ʽ�������еĸ�����
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct flpoint{
    string s;//���ַ�����ʽ�洢������
    int pot;//С�����λ��
}ss[10005];

int main(){
    int n,maxx=0;
    string q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q;
        ss[i].s=q;
        ss[i].pot=ss[i].s.find('.');//��ôɧ�Ĳ���������        //ͨ���ַ������ַ����Һ����ҵ�С�����λ��
        if(ss[i].pot>maxx)
            maxx=ss[i].pot;
    }
    for(int i=0;i<n;i++){
        cout<<setfill(' ')<<setw(maxx-ss[i].pot+ss[i].s.length())<<ss[i].s<<endl;
    }
    return 0;
}





//�Լ�д��������
/*#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int weishu(int x){
    int i=0;
    while((x/int(round(pow(10,i))))!=0){
        i++;
    }
    return i;
}

int main(){
    int n;
    cin>>n;
    double a[n];
    int num_weishu[n];
    int x;
    int max_weishu=-9999;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=int(fabs(a[i]));
        num_weishu[i]=weishu(x);
        if(x==0)
            num_weishu[i]++;//ע������Ϊ0Ҳռһλ
        if(a[i]<0)                //ע�����Ҳռһλ
            num_weishu[i]++;
        if(num_weishu[i]>max_weishu)
            max_weishu=num_weishu[i];
    }
    for(int i=0;i<n;i++){
        cout<<setfill(' ')<<setw(max_weishu-num_weishu[i])<<a[i]<<endl;//???    //С��������䣬���ַ������ԣ�����С����ô���
    }
    return 0;
}*/
