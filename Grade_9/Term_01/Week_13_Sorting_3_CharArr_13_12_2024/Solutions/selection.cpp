#include<iostream>
using namespace std;
int main ()
{
    int N, min_idx;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < N - 1; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < N; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if(i != min_idx)
        {
            swap(arr[i], arr[min_idx]);
        }
    }

    int perim = 0;
    bool isThere = true;
    for(int i = N - 1; i >= 0; i--)
    {
        for(int j = i - 1; j > 0; j--)
        {
            if(arr[i] < arr[j] + arr[j-1])
            {
                perim = arr[i] + arr[j] + arr[j-1];
                cout<<perim<<endl;
                break;
            }
            else
            {
                isThere = false;
            }
        }
    }
//    if(isThere)
//    else cout<<"Triangle formation is not possible."<<endl;


    return 0;
}

