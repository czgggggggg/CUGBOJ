#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int num=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        num+=a[i];
    }
    for(int i=0;i<num;i++){
        cout<<"I'm mao.\n";
        cout<<"Angry Crow Takes Flight.\n";
        cout<<"Tornado Decimates Trailer Park.\n";
        cout<<"Mouse Runs through Maze.\n";
    }
    return 0;
}
