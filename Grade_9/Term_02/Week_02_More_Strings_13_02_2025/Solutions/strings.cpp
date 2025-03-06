#include<iostream>
#include<string>
using namespace std;
int main()
{
    char arr[100];
    cin>>arr;
    cin.getline(arr, 100);

    string str;
    cin>>str;
    getline(cin, str);


    return 0;
}
