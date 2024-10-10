#include<iostream>
using namespace std;
int main()
{
    int n, number = 1;
    cin>>n;
    for(int x = 1; x <= n; x++)
    {
        for(int y = x; y <= n; y++)
        {
            cout<<y;
        }
        cout<<endl;
    }

    return 0;
}
