#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int diff[n - 1];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    for(int i = 0; i < n - 1; i++)
    {
        diff[i] = abs(arr[i] - arr[i+1]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        cout<<diff[i]<<" ";
    }

    return 0;
}
