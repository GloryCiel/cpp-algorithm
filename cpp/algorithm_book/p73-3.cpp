#include<iostream>
using namespace std;

int main()
{
    int N;cin>>N;
    int minimal,mini;
    for(int i=0;i<N;++i)
    {
        if(i == 0)
        {
            int ttmp;cin>>ttmp;
            minimal = ttmp;
        }
        else if(i==1)
        {
            int tmp;cin>>tmp;
            if(tmp<minimal)
            {
                mini = minimal;
                minimal = tmp;
            }
            else
            {
                mini =tmp;
            }
        }
        else 
        {
            int tmp;cin>>tmp;
            if(tmp<minimal)
            {
                mini=minimal;
                minimal = tmp;
            }
            else if(minimal<tmp && tmp<mini)
            {
                mini = tmp;
            }
        }
    }
    cout<<mini<<endl;
}