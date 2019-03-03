#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    set<int>::iterator iter;
    int n;
    int x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    //无法用STL里的sort算法对容器set作排序。set本身就是一种有序的容器。
    /*for(iter=s.begin();iter!=s.end();iter++){              //set怎么取倒数第二个元素？？？   //好烦iterator用不来
        cout<<*iter<<" ";
    }*/
    int i=0;                                                 //只能借助数组了
    int a[1000];
    for(iter=s.begin();iter!=s.end();iter++){
        a[i++]=*iter;
    }
    for(int j=0;j<i-1;j++){
        cout<<a[j]<<" ";
    }
    cout<<a[i-1]<<endl;
    return 0;
}
