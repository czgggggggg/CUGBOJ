//��������1396��һģһ������Ŀ
//������bug��ֻ��1���ʱ�򣬽�������������룿����
//����AC���ˡ�
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int func(int x){//��������x�ж���λ
    if(x==0)
        return 1;

    int k=0;
    while(x/int(pow(10,k))!=0){   //���������ˣ�pow()�ķ���ֵ��double���͵�
        k++;
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    char str[n][1000];
    char new_str[n][5000];
    for(int i=0;i<n;i++){
        cin>>str[i];
        int xiabiao=0;
        int count=0;
        char tag;
        for(int j=0;j<strlen(str[i]);j++){
            if(j==0){
                tag=str[i][0];
                count++;
            }
            else{
               if(str[i][j]==tag){
                   count++;
               }
               else{//��ʼ��¼
                   int k=func(count);
                   while(k){
                       new_str[i][xiabiao]=char((count/int(pow(10,k-1)))%10+48);//ȡcountÿһλ��ת��Ϊ��Ӧ���ַ�����  //ע��pow()�ķ���ֵΪdouble����
                       //cout<<"Hello:"<<xiabiao<<endl;
                       xiabiao++;
                       k--;
                   }
                   new_str[i][xiabiao]=tag;
                   xiabiao++;

                   count=1;//����
                   tag=str[i][j];//����
               }
            }
            if(j==strlen(str[i])-1){//ע�����һ���©��
                                   int k=func(count);
                   while(k){
                       new_str[i][xiabiao]=char((count/int(pow(10,k-1)))%10+48);//ȡcountÿһλ��ת��Ϊ��Ӧ���ַ�����  //ע��pow()�ķ���ֵΪdouble����
                       //cout<<"Hello:"<<xiabiao<<endl;
                       xiabiao++;
                       k--;
                   }
                   new_str[i][xiabiao]=tag;
            }
        }


    }
    for(int i=0;i<n;i++){
        cout<<new_str[i]<<endl;
    }
    return 0;
}
