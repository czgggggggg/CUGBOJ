#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int x[3],y[3];
    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    if(x[0]!=x[1]&&x[0]!=x[2]&&x[1]!=x[2]){
        for(int i=0;i<2;i++){
            for(int j=0;j<2-i;j++){
                if(x[j]>x[j+1]){
                    int temp=x[j];
                    x[j]=x[j+1];
                    x[j+1]=temp;

                    temp=y[i];
                    y[i]=y[i+1];
                    y[i+1]=temp;
                }
            }
        }
        x[3]=x[2]-x[1]+x[0];
        y[3]=y[2]-y[1]+y[0];
        cout<<x[0]<<x[1]<<x[2]<<endl;
        double s=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
        cout<<s<<endl;
        double k=double(y[1]-y[0])/(x[1]-x[0]);
        double b=y[0]-k*x[0];
        double h=fabs(k*x[3]-y[3]+b)/sqrt(k*k+1);
        cout<<h<<endl;
        cout<<fixed<<setprecision(3)<<s*h<<endl;
    }
    return 0;
}
