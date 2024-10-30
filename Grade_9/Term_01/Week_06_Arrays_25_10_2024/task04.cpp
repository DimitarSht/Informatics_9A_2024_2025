#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    /// Степени на двойката
    int N;
    cin>>N;
    int arr[N];

    for(int i = 1; i <= N; i++)
    {
        arr[i] = pow(2, i);
    }
    for(int i = 1; i <= N; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
