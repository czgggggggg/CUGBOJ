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
                        k++;//str2��ת����һλ�ã�str1�ص��±�Ϊ���λ�ü����Ƚ�
                        num=0;
                    }
                    /*else{//����str2һֱ����ԭ����λ��
                        k=count2+1;
                        num=0;
                    }*/
                    break;
                }
                if(count1==str1.length()-1){//˵��str1���һ��Ҳ�Ѿ�ƥ��ɹ���
                    cout<<"YES\n";
                    tag=1;
                    break;
                }
            }
            if(tag==1)//������һ��ѭ��
                break;
        }
        if(tag==0)
            cout<<"NO\n";
    }
    return 0;
}



