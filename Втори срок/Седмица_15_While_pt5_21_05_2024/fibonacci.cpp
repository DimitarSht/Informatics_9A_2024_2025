#include<iostream>
using namespace std;
int main()
{
    int N, a = 0, b = 1, num = 2, sum=1;
    cin>>N;
    cout<<a<<" ";;
    while(num <= N)
    {
        cout<<sum<<" ";
        sum=a+b;
        a=b;
        b=sum;
        num++;
    }

    return 0;
}
