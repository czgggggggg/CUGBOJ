//�Ҿ���û�����Ⱑ��WA
#include<iostream>
using namespace std;
int main(){
    int n,NeedNumber;
    cin>>n>>NeedNumber;
    int length[n];
    for(int i=0;i<n;i++){
        cin>>length[i];
    }
    int MaxLength=1;
    int number;
    while(true){
        number=0;
        for(int i=0;i<3;i++){
            number+=length[i]/MaxLength;
        }
        if(number<NeedNumber)    //�ճ���number<NeedNumberʱ���˳�����MaxLength-1����󳤶ȣ���֮ǰһ��ѭ���е���󳤶ȣ�
            break;
        MaxLength++;
    }
    cout<<MaxLength-1<<endl;
    return 0;
}
