//我觉得没有问题啊，WA
#include<iostream>
using namespace std;
int main(){
    int n,NeedNumber;
    cin>>n>>NeedNumber;
    int length[n];
    for(int i=0;i<n;i++){
        cin>>length[i];
    }
    int MaxLength=1;
    int number;
    while(true){
        number=0;
        for(int i=0;i<3;i++){
            number+=length[i]/MaxLength;
        }
        if(number<NeedNumber)    //刚出现number<NeedNumber时，退出，则MaxLength-1是最大长度（即之前一次循环中的最大长度）
            break;
        MaxLength++;
    }
    cout<<MaxLength-1<<endl;
    return 0;
}
