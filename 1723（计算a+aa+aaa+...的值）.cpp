//ע�������ֻҪ������һ�飬���Ƕ���
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
    int a,n;
    char c;
    /*while(*/scanf("%d%c%d",&a,&c,&n);/*{  //�˴�����*/
        int sum=0;
        int num=0;
        for(int i=0;i<n;i++){
            num=num+a*pow(10.0,i);
            sum+=num;
        }
        printf("Sum = %d\n",sum);
    //}
    return 0;
}
