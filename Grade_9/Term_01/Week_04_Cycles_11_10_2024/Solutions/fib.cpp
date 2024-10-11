#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n;
    cin>>n;
    if(n % 2 == 0)
    {
        for(int i = 0; i < n / 2; i++)
        {
            cout<<a<<" "<<b<<" ";
            a = a + b;
            b = a + b;
        }
    }
    else
    {
        for(int i = 0; i < n / 2; i++)
        {
            cout<<a<<" "<<b<<" ";
            a = a + b;
            b = a + b;
        }
        cout<<a;
    }
    return 0;
}
