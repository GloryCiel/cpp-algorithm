#include <iostream>
#include <cmath>
using namespace std;

typedef struct planet
{
    int center_x;
    int center_y;
    int radius;
}planet;

double distance(int x1,int y1, int x2, int y2)
{
    int x = (x2-x1)*(x2-x1);
    int y = (y2-y1)*(y2-y1);

    return sqrt(x+y);
}

int main()
{
    int T;cin>>T;

    for(int i=0;i<T;++i)
    {
        int start[2];
        int end[2];

        cin>>start[0];
        cin>>start[1];
        cin>>end[0];
        cin>>end[1];

        int n;cin>>n;

        planet * Planets = new planet[n];

        for(int i=0;i<n;++i)
        {
            cin>>Planets[i].center_x;
            cin>>Planets[i].center_y;
            cin>>Planets[i].radius;
        }

        int result=0;

        for(int i=0;i<n;++i)
        {
            double dist_start = distance(start[0],start[1],Planets[i].center_x,Planets[i].center_y);
            double dist_end = distance(end[0],end[1],Planets[i].center_x,Planets[i].center_y);
            if(dist_start>Planets[i].radius && dist_end<Planets[i].radius)
            {
                result++;
            }
            else if(dist_start<Planets[i].radius && dist_end>Planets[i].radius)
            {
                result++;
            }
        }
        cout<<result<<endl;
    }
}