//��ǵ�������������
#include<iostream>
#include<string.h>//����memset����
using namespace std;

int height[26];
int maxlen[26];

void lst(int k){
    memset(maxlen,0,sizeof(maxlen));
    for(int i=1;i<=k;i++){
        maxlen[i]=1;
        for(int j=1;j<i;j++){
            if(height[i]<=height[j]){
                int premaxlen=maxlen[j]+1;
                if(premaxlen>maxlen[i])
                    maxlen[i]=premaxlen;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>height[i];
    }
    lst(n);
    int max_len=-1;
    for(int i=1;i<=n;i++){
        if(max_len<maxlen[i]){
            max_len=maxlen[i];
        }
    }
    cout<<max_len<<endl;
    return 0;
}

/*#include<stdio.h>
#include<string.h>

int Height[26];
int MaxLen[26];

void LIS(int k){
	memset(MaxLen,0,sizeof(MaxLen));
	for(int i = 1;i <= k; i++){
		MaxLen[i] = 1;
		//������ǰ���е����߶�
		for(int j = 1;j < i;j++){
			//�����ǰ�����߶�С�ڵ���j�ŵ���
			if(Height[i] <= Height[j]){
				//�ѵ�ǰ��������j�ŵ�����������������г���Ϊj�ŵ�����β������������г��� + 1
				int preMax = MaxLen[j] + 1;
				if(preMax > MaxLen[i]){
					MaxLen[i] = preMax;
				}
			}
		}
	}
}
int main()
{
	int N,i;
	scanf("%d",&N);
		//���뵼���߶�
		for(i = 1;i <= N;i++){
			scanf("%d",&Height[i]);
		}
		LIS(N);
		int Max = -1;
		//�������������еĳ��ȼ������صĵ�����
		for(i = 1;i <= N;i++){
			if(Max < MaxLen[i]){
				Max = MaxLen[i];
			}
		}
			printf("%d\n",Max);
	return 0;
}*/
