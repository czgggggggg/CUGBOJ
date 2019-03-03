//ÂùÁ¦·¨£¨RE£©
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="sweet";
    string str2;
    cin>>str2;
    int tag1,tag2,tag3,tag4,tag5;
    int count=0;
    int tag=0;
    for(int i=0;i<str2.length()-4;i++){
        if(tag==1)
            break;
        if(str2[i]=='s'){
            tag1=i;
            count++;
            for(int j=i+1;j<str2.length()-3;j++){
                if(tag==1)
                    break;
                if(str2[j]=='w'){
                    tag2=j;
                    count++;
                    for(int k=j+1;k<str2.length()-2;k++){
                        if(tag==1)
                            break;
                        if(str2[k]=='e'){
                            tag3=k;
                            count++;
                            for(int p=k+1;p<str2.length()-1;p++){
                                if(tag==1)
                                    break;
                                if(str2[p]=='e'){
                                    tag4=p;
                                    count++;
                                    for(int q=p+1;q<str2.length();q++){
                                        if(tag==1)
                                            break;
                                        if(str2[q]=='t'){
                                            tag5=q;
                                            count++;
                                            if(count==5){
                                                tag=1;
                                                cout<<"You get love.\n";
                                            }
                                            count--;
                                        }
                                    }
                                    count--;
                                }
                            }
                            count--;
                        }
                    }
                    count--;
                }
            }
            count--;
        }
    }
    if(tag==0){
        cout<<"Your love is in the future.\n";
    }
    return 0;
}
