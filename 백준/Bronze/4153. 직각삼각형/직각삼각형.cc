#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    for(;;)
    {
        int byun[3];
        for(int i=0;i<3;++i)
            cin>>byun[i];
        if(byun[0]==byun[1]&&byun[1]==byun[2]&&byun[0]==0)
            break;
        sort(byun,byun+3);
        if(byun[0]*byun[0]+byun[1]*byun[1]==byun[2]*byun[2])
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}