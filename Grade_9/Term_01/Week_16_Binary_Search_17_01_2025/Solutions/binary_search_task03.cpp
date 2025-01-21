#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num/2 + 1];
    for(int i = 0; i < num/2 + 1; i++)
    {
        arr[i] = i;
    }
    int low = 0, high = num/2;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] * arr[mid] == num)
        {
            result = mid;
            break;
        }
        if (arr[mid]*arr[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
