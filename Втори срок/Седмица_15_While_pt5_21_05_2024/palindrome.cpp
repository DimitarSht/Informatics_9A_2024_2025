#include<iostream>
using namespace std;
int main()
{
    int number, revNumber = 0, keeper, digit = 0;
    cin>>number;
    keeper = number;
    while(number != 0)
    {
        digit = number % 10;
        revNumber = revNumber * 10 + digit;
        number /= 10;
    }

    /*
    1 -> 12 -> 122 -> 1221
    */
    if(keeper == revNumber)
    {
        cout<<"Da, palindrom e!"<<endl;
    }
    else
    {
        cout<<"Ne, opitai pak s drugo 4islo!"<<endl;
    }
    return 0;
}
