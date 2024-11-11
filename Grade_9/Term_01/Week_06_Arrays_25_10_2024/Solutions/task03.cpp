#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    /// Копиране на масив в друг масив
    int sz1, sz2, diff;
    cin>>sz1>>sz2;
    int arr1[sz1], arr2[sz2];
    for(int i = 0; i < sz1; i++) cin>>arr1[i];

    diff = sz1 - sz2;
    sz2 = sz2 + diff;

    for(int i = 0; i < sz2; i++)
    {
        arr2[i] = arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        cout<<arr2[i]<<" ";
    }



    return 0;
}
