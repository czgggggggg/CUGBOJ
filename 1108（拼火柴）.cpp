//注意pow(x,y)返回的是一个实数
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e=0;
    int number=0;
    while(n/int(pow(10,e))!=0){
        switch((n/int(pow(10,e)))%10){
        case 0:
            number+=6;
            break;
        case 1:
            number+=2;
            break;
        case 2:
            number+=5;
            break;
        case 3:
            number+=5;
            break;
        case 4:
            number+=4;
            break;
        case 5:
            number+=5;
            break;
        case 6:
            number+=6;
            break;
        case 7:
            number+=3;
            break;
        case 8:
            number+=7;
            break;
        case 9:
            number+=6;
            break;
        }
        e++;
    }
    cout<<number<<endl;
    return 0;
}
