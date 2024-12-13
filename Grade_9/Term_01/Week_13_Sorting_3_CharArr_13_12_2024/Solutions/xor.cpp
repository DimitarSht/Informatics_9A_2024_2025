#include<iostream>
using namespace std;
int main ()
{
    int N,br = 0;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < N - 1;i++)
    {
        for(int y = 0; y < N - y - 1;y++)
        {
            if(arr[y] > arr[y+1])
            {
                swap(arr[y],arr[y+1]);
            }
        }
    }
    for(int i = 0; i < N - 1; i++)
    {
        for(int y = i + 1; y < N;y++)
        {
            if(arr[i] == arr[y])
            {
                br++;
            }
        }
    }
    cout<<br<<endl;


    return 0;
}
