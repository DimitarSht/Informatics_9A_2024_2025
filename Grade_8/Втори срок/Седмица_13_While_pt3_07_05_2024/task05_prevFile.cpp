#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int i = 1;
    while(i <= 10)
    {
        if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        {
            cout<<num<<" ";
            i++;
        }
        num++;

    }

    return 0;
}
