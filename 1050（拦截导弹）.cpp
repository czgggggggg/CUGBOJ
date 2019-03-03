//最长非递增子序列问题
#include<iostream>
#include<string.h>//包含memset函数
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
		//遍历其前所有导弹高度
		for(int j = 1;j < i;j++){
			//如果当前导弹高度小于等于j号导弹
			if(Height[i] <= Height[j]){
				//把当前导弹放在j号导弹后，其最长不增子序列长度为j号导弹结尾的最长不增子序列长度 + 1
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
		//输入导弹高度
		for(i = 1;i <= N;i++){
			scanf("%d",&Height[i]);
		}
		LIS(N);
		int Max = -1;
		//输出最长不增子序列的长度即能拦截的导弹数
		for(i = 1;i <= N;i++){
			if(Max < MaxLen[i]){
				Max = MaxLen[i];
			}
		}
			printf("%d\n",Max);
	return 0;
}*/
