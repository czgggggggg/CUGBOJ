//测试数据没有问题，但是AC不过。
#include<iostream>
#include<string.h>//包含memset函数
using namespace std;

int height[26];
int maxlen[26];
int every_maxlen[101]={0};

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
    int n=1;
    while(true){
        int i=1;
        cin>>height[i++];
        if(height[i-1]==-1)
            break;
        while(height[i-1]!=-1){
            cin>>height[i++];
        }
        lst(i-2);//最后一次输入是-1，所以不能算进去
        int max_len=-1;
        for(int p=1;p<=i-1;p++){
            if(max_len<maxlen[p]){
                max_len=maxlen[p];
            }
        }
        every_maxlen[n++]=max_len;
    }
    for(int i=1;i<=n-1;i++){
        cout<<"Test #"<<i<<":"<<endl;
        cout<<"  maximum possible interceptions: "<<every_maxlen[i]<<endl;
        cout<<endl;
    }
    return 0;
}
