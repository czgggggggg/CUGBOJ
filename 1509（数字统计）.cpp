//代码来自1396，一模一样的题目
//还是有bug，只有1组的时候，结果后面会出现乱码？？？
//不过AC过了。
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int func(int x){//计算整数x有多少位
    if(x==0)
        return 1;

    int k=0;
    while(x/int(pow(10,k))!=0){   //死在这里了，pow()的返回值是double类型的
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
               else{//开始记录
                   int k=func(count);
                   while(k){
                       new_str[i][xiabiao]=char((count/int(pow(10,k-1)))%10+48);//取count每一位并转化为对应的字符保存  //注意pow()的返回值为double类型
                       //cout<<"Hello:"<<xiabiao<<endl;
                       xiabiao++;
                       k--;
                   }
                   new_str[i][xiabiao]=tag;
                   xiabiao++;

                   count=1;//更新
                   tag=str[i][j];//更新
               }
            }
            if(j==strlen(str[i])-1){//注意最后一组别漏了
                                   int k=func(count);
                   while(k){
                       new_str[i][xiabiao]=char((count/int(pow(10,k-1)))%10+48);//取count每一位并转化为对应的字符保存  //注意pow()的返回值为double类型
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
