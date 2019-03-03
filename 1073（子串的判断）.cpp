#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(str1.length()>str2.length())
        cout<<"NO\n";
    else{
        int tag=0;
        int num=0;                    // aab
        int k=0;                      //aaab
        int count1,count2;
        count2=0;
        while(count2<str2.length()){
            for(count1=0,count2=k;count1<str1.length(),count2<str2.length();count1++,count2++){
                if(str1[count1]!=str2[count2]){
                    num++;
                    if(num==1){
                        k++;//str2跳转到下一位置，str1回到下标为零的位置继续比较
                        num=0;
                    }
                    /*else{//避免str2一直保持原来的位置
                        k=count2+1;
                        num=0;
                    }*/
                    break;
                }
                if(count1==str1.length()-1){//说明str1最后一项也已经匹配成功了
                    cout<<"YES\n";
                    tag=1;
                    break;
                }
            }
            if(tag==1)//再跳出一层循环
                break;
        }
        if(tag==0)
            cout<<"NO\n";
    }
    return 0;
}



