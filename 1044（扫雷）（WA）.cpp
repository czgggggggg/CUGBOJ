//�����Ѿ���ȫͨ�����ǳ�������But WA��
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char Map1[n][n];//��ʼ��������
    char Map2[n][n];//��������
    char Map3[n][n];//�����������
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Map1[i][j];
            Map3[i][j]=Map1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Map2[i][j];
            int count=48;                 //0��ASCII��Ϊ48
            if(Map2[i][j]=='+'){
                if(i-1>=0&&j-1>=0&&Map1[i-1][j-1]=='*')
                    count++;
                if(i-1>=0&&j>=0&&Map1[i-1][j]=='*')
                    count++;
                if(i-1>=0&&j+1>=0&&Map1[i-1][j+1]=='*')
                    count++;
                if(i>=0&&j+1>=0&&Map1[i][j+1]=='*')
                    count++;
                if(i+1>=0&&j+1>=0&&Map1[i+1][j+1]=='*')
                    count++;
                if(i+1>=0&&j>=0&&Map1[i+1][j]=='*')
                    count++;
                if(i+1>=0&&j-1>=0&&Map1[i+1][j-1]=='*')
                    count++;
                if(i>=0&&j-1>=0&&Map1[i][j-1]=='*')
                    count++;
                Map3[i][j]=count;
                if(Map1[i][j]=='*')
                    Map3[i][j]='*';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Map3[i][j];
        }
        cout<<endl;
    }
    return 0;
}
