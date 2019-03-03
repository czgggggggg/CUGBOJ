//见鬼！！！无端查了半个多小时查不出来哪里的问题导致程序停止运行！！！！！！

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int> numbers;
    numbers.insert(pair<string,int>("zero",0));
    numbers.insert(pair<string,int>("one",1));
    numbers.insert(pair<string,int>("two",2));
    numbers.insert(pair<string,int>("three",3));
    numbers.insert(pair<string,int>("four",4));
    numbers.insert(pair<string,int>("five",5));
    numbers.insert(pair<string,int>("six",6));
    numbers.insert(pair<string,int>("seven",7));
    numbers.insert(pair<string,int>("eight",8));
    numbers.insert(pair<string,int>("nine",9));

    string str[6];
    int num[2];
    int count;
    int number1,number2;               //what???!!!把这四个参数放在while循环外面定义就没有问题了，为什么？？？
                                       //不对！！！运行着运行着还是莫名其妙的程序停止运行的错误！！！
  while(true){
    count=0;
    for(int i=0;i<6;i++){
        cin>>str[i];
        if(str[i]=="="){
            if(count==1)
                number2=num[count-1];
            else
                number2=num[count-2]*10+num[count-1];
            break;
        }
        else if(str[i]=="+"){
            if(count==1)
                number1=num[count-1];
            else
                number1=num[count-2]*10+num[count-1];
            count==0;
        }
        else{
            num[count]=numbers[str[i]];
            count++;
        }
    }
    if(number1==0&&number2==0){
        break;
    }
    else{
        cout<<number1+number2<<endl;
    }
  }
  return 0;
}



