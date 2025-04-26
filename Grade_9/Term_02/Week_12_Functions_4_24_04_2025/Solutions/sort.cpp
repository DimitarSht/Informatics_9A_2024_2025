#include<iostream>
using namespace std;


void input(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
}

void f(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
        cout<<s[i];
    }
}

void sorting(int arr[], int sz)
{
    for(int i = 0; i < sz - 1; i++)
    {
        for(int j = 0; j < sz - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void output(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
//    string str;
//    cin>>str;
//    f(str);

    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
    sorting(arr, n);
    output(arr, n);

    return 0;
}
