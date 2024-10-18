#include<iostream>
using namespace std;
int main()
{
    int h1, h2, min1, min2, cntMin;
    int diffH = 0, diffMin = 0;
    cin>>h1>>min1>>h2>>min2;
    for( cntMin = 0; (h1 * 60 + min1) != (h2 * 60 + min2); min1++)
    {
        if(min1 > 59)
        {
            min1 = 0;
            h1++;
            if(h1 > 23)
            {
                h1 = 0;
            }
        }
        cntMin++;
    }

    cout<<cntMin;


    return 0;
}
