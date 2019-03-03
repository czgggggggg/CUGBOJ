//这道题妙啊！
#include <iostream>
#include <cstdio>

using namespace std;

int fun(int m,int n)//m是苹果数，n是盘子数
{
    if (m==0)
        return 1;
    if (n==1)
        return 1;
    int ans=0;
    if (m<n)
        ans+=fun(m,n-(n-m));//这种情况一定有n-m个盘子是空的，所以m个苹果放到n个盘子的情况和m个苹果放到n-(n-m)的情况是相同的
    else
        ans+=fun(m-n,n)+fun(m,n-1);//分为两种情况，一种是n个盘子先每个放一个苹果，剩下m-n个苹果放在n个盘子
                                               //另一种是1个盘子为空，m个苹果放到剩下的n-1个盘子里
    return ans;
}

int main()
{
        int m,n;
        scanf("%d%d",&m,&n);
        printf ("%d\n",fun(m,n));
    return 0;
}
