#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int a[45]={0},b[21]={0},v[21]={0},n;
void init()//ɸѡ������
{
	int i,j;
	for(i=2; i<45; i++)
		a[i] = i;
	for (i=2; i*i<45; i++)
	{
		if (a[i] != 0)
		for (j=i*2; j<45; j+=i)
		{
			a[j] = 0;
		}
	}
}
void dfs(int x)
{
	int i,j;
	if (x > 0 && b[0]!=1)  //����1��ͷ
	{
		return ;
	}
	for (j=2; j<=x; j++)
	{
		if (!a[b[j-2]+b[j-1]]) //������֮�Ͳ�������֮�䷵��
		{
			return ;
		}
	}
	if (x == n)//�պ�n���� ,��һ�ֽ�
	{
		if (a[b[0] + b[x-1]]) //ͷ��βҲ����������
		{
			for (j=0; j<n; j++)
			{
				cout<<b[j]<<" ";
			}
			cout<<endl;
			return ;
		}
	}
	for (i=1; i<=n; i++)
	{
		if (!v[i])
		{
			b[x] = i;
			v[i] = 1;
			dfs(x+1); //�оٵڶ�����
			v[i] = 0;
		}
	}
}
int main()
{
	init();
	int i,j,ca=1,T=0;
	while (cin>>n)
	{
		if (n==0)
			break;
		T++;
		cout<<"Case "<<T<<":"<<endl;
		memset(v,0,sizeof(v));
		if (n==1)
		{
			cout<<1<<endl;
			cout<<endl;
		}
		else if (n%2==0)
		{
			dfs(0);
			cout<<endl;
		}
		else
		{
			cout<<"No Answer"<<endl;
			cout<<endl;
		}
	}
	return 0;
 }

/*#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int n;
int prime[40]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0};
//prime[i]��ʾi�Ƿ�Ϊ����
int a[30];
int visited[30];
int flag=0;
void DFS(int lest)
{
    if(lest>n)//��һ���˳�����
        return;

    if(lest==n)//�ڶ����˳�����
    {
        if(prime[a[n]+1]==1)
        {
            flag=1;
            for(int i=1;i<=n;i++)
                printf("%d ",a[i]);
            printf("\n");
        }
    }

    //���������������Ǽ�֦������

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0 && prime[a[lest]+i]==1)
        {
            a[lest+1]=i;
            visited[i]=1;
            DFS(lest+1);
            visited[i]=0;

        }

    }

}
int main()
{
    int i=0;
    while(scanf("%d",&n)!=EOF && n!=0)
    {

        memset(visited,0,sizeof(visited));
        memset(a,0,sizeof(a));
        i++;
        flag=0;
        printf("Case %d:\n",i);
        a[1]=1;
        visited[1]=1;
        if(n==1)//�������
        {
            printf("%d\n",1);
            printf("\n");
            continue;
        }
        if(n%2==0){//���������ܳ�����Ҳ�Ǽ�֦����
            DFS(1);
        }

        if(flag==0)
            printf("No Answer\n");
            printf("\n");
    }
    return 0;
}*/
