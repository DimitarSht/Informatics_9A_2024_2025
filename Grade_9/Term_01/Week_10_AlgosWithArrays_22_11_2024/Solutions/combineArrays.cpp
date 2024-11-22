#include<iostream>
using namespace std;
int main()
{
    int sz1, sz2;
    cin>>sz1>>sz2;
    int sz3 = sz1+sz2;

    int arr1[sz1], arr2[sz2];

    int arr3[sz3];
    for(int i = 0; i < sz1; i++)
        cin>>arr1[i];
    for(int i = 0; i < sz2; i++)
        cin>>arr2[i];

    for(int i = 0; i < sz1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        arr3[i + sz1] = arr2[i];
    }

    for(int i = 0; i < sz3; i++)
    {
        cout<<arr3[i]<<" ";
    }


    return 0;
}
