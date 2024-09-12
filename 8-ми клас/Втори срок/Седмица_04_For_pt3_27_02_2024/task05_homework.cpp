#include<iostream>
using namespace std;
int main()
{
    int N, a,b,c,sum = 0;
    cin>>N;
    for(int i = 100; i<=N; i++)
    {
        a = i / 100;
        b = i / 10%10;
        c = i % 10;
        sum = sum + a+b+c;
    }
    cout<<sum<<endl;
    cout<<sum / (N - 99) * 3.0;
    return 0;
}
