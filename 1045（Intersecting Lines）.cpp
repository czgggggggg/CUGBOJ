//ע�⻹�ÿ��Ǵ�ֱ�����
//ǰ���������ĸ��㲻ͬ
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x1[n],y1[n];
    int x2[n],y2[n];
    int x3[n],y3[n];
    int x4[n],y4[n];
    double x_point[n],y_point[n];
    for(int i=0;i<n;i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i]>>x3[i]>>y3[i]>>x4[i]>>y4[i];
    }

    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    for(int i=0;i<n;i++){
      if((x2[i]-x1[i])!=0&&(x4[i]-x3[i])!=0)//����ֱ�߶�����ֱ��x��
        if((double(y2[i]-y1[i])/(x2[i]-x1[i]))==(double(y4[i]-y3[i])/(x4[i]-x3[i]))){
            if((double(x2[i]*y1[i]-x1[i]*y2[i])/(x2[i]-x1[i]))==(double(x4[i]*y3[i]-x3[i]*y4[i])/(x4[i]-x3[i]))){//�غ�
                cout<<"LINE"<<endl;
            }
            else{//ƽ��
                cout<<"NONE"<<endl;
            }
        }
        else{//��ʵ������ô�鷳������k��b�ı��ʽ�Ϳ����ˡ�
            double num=(x4[i]*y3[i]-x3[i]*y4[i])*(x2[i]-x1[i])-(x2[i]*y1[i]-x1[i]*y2[i])*(x4[i]-x3[i]);
            double den=(y2[i]-y1[i])*(x4[i]-x3[i])-(y4[i]-y3[i])*(x2[i]-x1[i]);
            x_point[i]=num/den;
            y_point[i]=x_point[i]*(y2[i]-y1[i])/(x2[i]-x1[i])+double(x2[i]*y1[i]-x1[i]*y2[i])/(x2[i]-x1[i]);
            cout<<fixed<<setprecision(2)<<"POINT "<<x_point[i]<<" "<<y_point[i]<<endl;
        }
      else if((x2[i]-x1[i])==0&&(x4[i]-x3[i])==0){//����ֱ�߶���ֱ��x��
            if(x2[i]==x4[i])
                cout<<"LINE"<<endl;
            else
                cout<<"NONE"<<endl;
      }
      else if((x2[i]-x1[i])==0&&(x4[i]-x3[i])!=0){
            x_point[i]=x1[i];
            y_point[i]=x_point[i]*(y4[i]-y3[i])/(x4[i]-x3[i])+double(x4[i]*y3[i]-x3[i]*y4[i])/(x4[i]-x3[i]);
            cout<<fixed<<setprecision(2)<<"POINT "<<x_point[i]<<" "<<y_point[i]<<endl;
      }
      else if((x2[i]-x1[i])!=0&&(x4[i]-x3[i])==0){
            x_point[i]=x3[i];
            y_point[i]=x_point[i]*(y2[i]-y1[i])/(x2[i]-x1[i])+double(x2[i]*y1[i]-x1[i]*y2[i])/(x2[i]-x1[i]);
            cout<<fixed<<setprecision(2)<<"POINT "<<x_point[i]<<" "<<y_point[i]<<endl;
      }
    }
    cout<<"END OF OUTPUT"<<endl;

    return 0;
}
