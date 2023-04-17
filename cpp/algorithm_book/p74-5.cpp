#include<iostream>

using namespace std;

int main()
{
    int N;cin>>N;
    int*arr = new int[N];

    for(int i=0;i<N;++i)
    {
        cin>>arr[i];
    }
    int result = 0;
    for(;;)
    {
        bool flag = false;
        for(int i=0;i<N;++i)
        {
            if((arr[i]%2)!=0)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            ++result;
            for(int i=0;i<N;++i)
            {
                arr[i]=arr[i]/2;
            }
        }
        else 
        {
            break;
        }
    }
    cout<<result<<endl;
}