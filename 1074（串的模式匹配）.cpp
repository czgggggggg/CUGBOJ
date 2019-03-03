//基于1180查找子串，根本没有修改
//基于1073子串的判断修改完成
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;

    //注意1073题，子串在前面，此题相反，所以要交换
    string temp;
    temp=str1;
    str1=str2;
    str2=temp;

    if(str1.length()>str2.length())
        cout<<"-1\n";
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
                    cout<<k<<endl;
                    tag=1;
                    break;
                }
            }
            if(tag==1)//再跳出一层循环
                break;
        }
        if(tag==0)
            cout<<"-1\n";
    }
    return 0;
}
