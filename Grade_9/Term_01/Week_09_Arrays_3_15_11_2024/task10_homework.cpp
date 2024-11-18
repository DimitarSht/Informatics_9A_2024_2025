#include<iostream>
using namespace std;
int main()
{
    int sum = 1120, delitel = 2, br = 0;
    while(sum >= 1)
    {
        if(sum % delitel == 0)
        {
            sum /= delitel;
            br++;
        }
        else
        {
            if(br == 1)
            {
                cout<<delitel<<" ";
            }
            delitel++;
            br = 0;
        }

    }




    return 0;
}
