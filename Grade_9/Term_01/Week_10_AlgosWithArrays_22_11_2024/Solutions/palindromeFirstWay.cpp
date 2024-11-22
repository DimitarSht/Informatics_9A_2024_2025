#include<iostream>
using namespace std;
int main ()
{
    int n;
    bool y;
    cin>>n;
    int arr[n],rev[n];
    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
        rev[i]= arr[i];
    }
    for(int i = 0; i < n/2;i++)
    {
        swap(rev[i],rev[n-i-1]);
    }
    for(int i = 0;i < n;i++)
    {
        if(rev[i] == arr[i])
        {
            y = 1;
        }
        else
        {
            y = 0;
            break;

        }
    }
    cout<<y<<endl;


    return 0;
}
