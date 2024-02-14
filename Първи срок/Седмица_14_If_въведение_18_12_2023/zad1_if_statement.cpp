#include<iostream>
using namespace std;
int main()
{
    int A, B, sum;
    cin>>A>>B;
    sum = A + B;
    if(A == B)
    {
        A = 0;
        B = 0;
    }
    else
    {
        A = sum;
        B = sum;
    }
    cout<<A<<" "<<B;

    return 0;
}
