#include<iostream>
#include<cmath>
using namespace std;

/// 2*i^3+3*i
void sequence(int n)
{
    for(int i = 0; i < n; i++)
        cout<<2*pow(i, 3)+3*i<<endl;
}

void func(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    func(n);
//    int n;
//    cin>>n;
//    sequence(n);
    return 0;
}
