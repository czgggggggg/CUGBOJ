//��������
#include <iostream>
#include <cstdio>

using namespace std;

int fun(int m,int n)//m��ƻ������n��������
{
    if (m==0)
        return 1;
    if (n==1)
        return 1;
    int ans=0;
    if (m<n)
        ans+=fun(m,n-(n-m));//�������һ����n-m�������ǿյģ�����m��ƻ���ŵ�n�����ӵ������m��ƻ���ŵ�n-(n-m)���������ͬ��
    else
        ans+=fun(m-n,n)+fun(m,n-1);//��Ϊ���������һ����n��������ÿ����һ��ƻ����ʣ��m-n��ƻ������n������
                                               //��һ����1������Ϊ�գ�m��ƻ���ŵ�ʣ�µ�n-1��������
    return ans;
}

int main()
{
        int m,n;
        scanf("%d%d",&m,&n);
        printf ("%d\n",fun(m,n));
    return 0;
}
