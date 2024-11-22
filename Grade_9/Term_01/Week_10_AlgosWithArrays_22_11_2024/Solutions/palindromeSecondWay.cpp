#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isPalindrome = 1;
    cin>>n;
    char arr[n];
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    for(int i = 0; i < n/2; i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            isPalindrome = 0;
            break;
        }
//        }
//        if(arr[i] == arr[n - i - 1])
//        {
//            isPalindrome = 1;
//        }
//        else
//        {
//            isPalindrome = 0;
//            break;
//        }
    }
    cout<<isPalindrome<<endl;

    return 0;
}
