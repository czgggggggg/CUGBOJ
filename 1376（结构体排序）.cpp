#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    struct number{
        int x,y;
    };
    number numbers[n];
    for(int i=0;i<n;i++){
        cin>>numbers[i].x>>numbers[i].y;
    }
    number temp;
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i;j<n;j++){
            if(numbers[j].x>numbers[k].x){
                k=j;
            }
            else if((numbers[j].x==numbers[k].x)&&(numbers[j].y<numbers[k].y)){//哈哈，这里是反的
                k=j;
            }
        }
        //结构体不能直接复制
        temp.x=numbers[k].x;
        temp.y=numbers[k].y;
        numbers[k].x=numbers[i].x;
        numbers[k].y=numbers[i].y;
        numbers[i].x=temp.x;
        numbers[i].y=temp.y;
        k=i;
    }
    for(int i=0;i<n;i++){
        cout<<numbers[i].x<<" "<<numbers[i].y<<endl;
    }
    return 0;
}
