#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    /// Търсим key в arr
    int key, index = -1; /// target
    cin>>key;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            index = i;
        }
    }
    cout<<index;
    return 0;
}
