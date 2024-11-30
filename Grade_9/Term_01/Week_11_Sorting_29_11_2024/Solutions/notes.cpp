#include<iostream>
using namespace std;
int main()
{
    int n;
    double average;
    cin>>n;
    int notes[n];
    for(int i = 0;i < n; i++)
    {
        cin>>notes[i];
    }

    int min_idx, sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(notes[j] < notes[min_idx])
            {
                min_idx = j;
            }
        }
        if(min_idx != i)
        {
            swap(notes[min_idx], notes[i]);
        }
    }

    for(int i = 1; i < n - 1; i++)
    {
        sum += notes[i];
    }

    average = sum / (double)(n - 2);
    cout<<average<<endl;


    for(int i = 0; i < n; i++)
    {
        cout<<notes[i]<<" ";
    }

    return 0;
}
