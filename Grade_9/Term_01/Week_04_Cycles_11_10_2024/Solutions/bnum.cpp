#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isTwo; /// 0 или 1
    cin>>n;

    while(n > 1)
    {
        if(n % 2 == 1)
        {
            isTwo = false; /// 0
            break;
        }
        else
        {
            isTwo = true; /// 1
        }
        n /= 2;
    }
    if(isTwo) cout<<"True";
    else cout<<"False";
    return 0;
}
