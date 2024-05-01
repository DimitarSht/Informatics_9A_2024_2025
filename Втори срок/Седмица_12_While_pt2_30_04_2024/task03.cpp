#include<iostream>
using namespace std;
int main()
{
    int n, powCnt;
    cin>>n>>powCnt;
    int i = 1;
    while(i != powCnt)
    {
        cout<<n*i<<" ";
        i++;
    }
    return 0;
}
