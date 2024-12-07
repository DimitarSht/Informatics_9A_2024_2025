#include<iostream>
using namespace std;
int main()
{
    int N, M;
    cin>>N>>M;
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i < N-1;i++)
    {
        for(int j = 0;j < N - i - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int a = N - M,sumMax = 0,sumMin = 0;
    for(int i = 0; i < a;i++)
    {
        sumMin = sumMin + arr[i];
    }
    for(int i = N - 1; i >= N - a;i--)
    {
        sumMax = sumMax + arr[i];
    }
    cout<<"sumMin"<<" "<<sumMin<<endl;
    cout<<"sumMax"<<" "<<sumMax<<endl;


    return 0;
}
