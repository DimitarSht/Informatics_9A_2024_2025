#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
//    cin>>n;
//    while(n!=0)
//    {
//        sum+=n;
//        cin>>n;
//    }
//    cout<<sum<<endl;

    do
    {
        cin>>n;
        sum+=n;
    }
    while(n!=0);

    cout<<sum<<endl;

    return 0;
}
