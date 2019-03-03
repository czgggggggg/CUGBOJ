#include<iostream>
using namespace std;
//辗转相除法，纯循环
int gcd(int a,int b){//a，b大小无关
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    int num[n][4];
    int answer[n][2];
    for(int i=0;i<n;i++){
        cin>>num[i][0]>>num[i][1]>>num[i][2]>>num[i][3];
        answer[i][0]=num[i][0]*num[i][3]+num[i][1]*num[i][2];
        answer[i][1]=num[i][1]*num[i][3];
        int zuidagongyueshu=gcd(answer[i][0],answer[i][1]);
        answer[i][0]/=zuidagongyueshu;
        answer[i][1]/=zuidagongyueshu;
    }
    for(int i=0;i<n;i++)
        cout<<answer[i][0]<<" "<<answer[i][1]<<endl;
    return 0;
}
