//注意还得考虑垂直的情况
//前提条件：四个点不同
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
      if((x2[i]-x1[i])!=0&&(x4[i]-x3[i])!=0)//两条直线都不垂直于x轴
        if((double(y2[i]-y1[i])/(x2[i]-x1[i]))==(double(y4[i]-y3[i])/(x4[i]-x3[i]))){
            if((double(x2[i]*y1[i]-x1[i]*y2[i])/(x2[i]-x1[i]))==(double(x4[i]*y3[i]-x3[i]*y4[i])/(x4[i]-x3[i]))){//重合
                cout<<"LINE"<<endl;
            }
            else{//平行
                cout<<"NONE"<<endl;
            }
        }
        else{//其实不用那么麻烦，借助k和b的表达式就可以了。
            double num=(x4[i]*y3[i]-x3[i]*y4[i])*(x2[i]-x1[i])-(x2[i]*y1[i]-x1[i]*y2[i])*(x4[i]-x3[i]);
            double den=(y2[i]-y1[i])*(x4[i]-x3[i])-(y4[i]-y3[i])*(x2[i]-x1[i]);
            x_point[i]=num/den;
            y_point[i]=x_point[i]*(y2[i]-y1[i])/(x2[i]-x1[i])+double(x2[i]*y1[i]-x1[i]*y2[i])/(x2[i]-x1[i]);
            cout<<fixed<<setprecision(2)<<"POINT "<<x_point[i]<<" "<<y_point[i]<<endl;
        }
      else if((x2[i]-x1[i])==0&&(x4[i]-x3[i])==0){//两条直线都垂直于x轴
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
