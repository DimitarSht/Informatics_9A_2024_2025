#include<iostream>
using namespace std;
int main()
{
    int num, cntDigits = 0, lastDigit;
    int sum = 0, prod = 1;
    double average;
    cin>>num;
    while(num != 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        prod *= lastDigit;
        num /= 10;
        cntDigits++;
    }
    average = sum / cntDigits * 1.0;
    cout<<cntDigits<<" "<<sum<<" "<<prod<<" "<<average;

    return 0;
}
