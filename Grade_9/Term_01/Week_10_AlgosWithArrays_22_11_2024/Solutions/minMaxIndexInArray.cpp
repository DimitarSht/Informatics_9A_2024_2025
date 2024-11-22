#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int MIN = 999999, MAX = 0, minIndex, maxIndex;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= MIN)
        {
            MIN = arr[i];
            minIndex = i;
        }
        if(arr[i] >= MAX)
        {
            MAX = arr[i];
            maxIndex = i;
        }
    }

    cout<<"Min index: "<<minIndex<<endl;
    cout<<"Max index: "<<maxIndex<<endl;

    return 0;
}
