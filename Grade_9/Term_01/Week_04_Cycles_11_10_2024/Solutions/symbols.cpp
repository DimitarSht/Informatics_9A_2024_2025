#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, cntA = 0, cntB = 0;
    cin>>a>>b;
    int newA = a, newB = b;

    for(; newA != 0; cntA++) newA /= 10;
    for(; newB != 0; cntB++) newB /= 10;

    int diff = abs(cntA - cntB);

    if(diff == 0)
        cout<<"="<<endl;
    else
    {
        if(a > b)
            for(int i = 0; i < diff; i++) cout<<">";
        else if(a < b)
            for(int i = 0; i < diff; i++) cout<<"<";

    }



    return 0;
}
