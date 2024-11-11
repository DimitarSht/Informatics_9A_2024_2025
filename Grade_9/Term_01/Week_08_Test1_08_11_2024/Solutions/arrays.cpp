#include<iostream>
using namespace std;
int main()
{
    int sz;
    /// sz -> size
    cin>>sz;
    int arr[sz], sum =0, MAX = -100, MIN = 9999;
    for(int i = 0; i < sz;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < sz; i++)
    {
        sum = sum + arr[i];
        if(arr[i] > MAX) MAX = arr[i];
        if(arr[i] < MIN) MIN = arr[i];
    }
    double average = sum / (double)sz;

    return 0;
}
