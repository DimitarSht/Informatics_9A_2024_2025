#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            arr[i] = pow(arr[i], i);
        }
        else
        {
            arr[i] = sqrt(arr[i]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
