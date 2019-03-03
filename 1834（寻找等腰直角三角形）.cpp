#include<iostream>
using namespace std;
int main(){
    int x,y;
    int xa,ya,xc,yc;
    int k,b;
    while(cin>>x>>y){
        if((x>0&&y>0)||(x<0&&y<0))
            k=-1;
        if((x<0&&y>0)||(x>0&&y<0))
            k=1;
        b=y-k*x;
        if(b/(-k)<0){
            xa=b/(-k);
            ya=0;
            xc=0;
            yc=b;
        }
        else{
            xa=0;
            ya=b;
            xc=b/(-k);
            yc=0;
        }
        cout<<xa<<" "<<ya<<" "<<xc<<" "<<yc<<endl;
    }
    return 0;
}
