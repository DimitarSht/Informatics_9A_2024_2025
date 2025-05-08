#include<iostream>
#include<string>
using namespace std;

/// Задача 6
int maxNumber(int n)
{
    string number = to_string(n);
    for(int i = 0; i < number.size() - 1; i++)
    {
        for(int j = 0; j < number.size() - i - 1; j++)
        {
            if(number[j] < number[j+1])
            {
                swap(number[j], number[j+1]);
            }
        }
    }
    int p = 0;
    for(int i = 0; i < number.size(); i++)
    {
        p = 10 * p + number[i] - '0';
    }

    return p;
}

void maxArr(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        arr[i] = maxNumber(arr[i]);
    }

    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}

/// Задача 8
void func(int arr[])
{
    for (int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
}
void Max(int arr[], int max1)
{
    max1=INT_MIN;
    for (int i=0; i<10; i++)
    {
        if (arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    cout<<max1<<" ";
}
void MIN(int arr[], int min1)
{
    min1=INT_MAX;
    for (int i=0; i<10; i++)
    {
        if (arr[i]<min1)
        {
            min1=arr[i];
        }
    }
    cout<<min1<<" ";
}
void SUM(int arr[])
{
    double avrg=0;
    for (int i=0; i<10; i++)
    {
        avrg=avrg+arr[i];
    }
    cout<<avrg/10;
}

/// Задача 9
void cOunt(int num, int digit)
{
    int counter = 0;
    while(num>0)
    {
        if(num%10 == digit)
        {
            counter++;
        }
        num /= 10;
    }
    cout<<counter<<endl;
}

/// Задача 10
string toBase(int num, int base)
{
    string result;
    while(num != 0)
    {
        int digit = num % base;
        if(digit >= 10)
        {
            result += ('A' + digit % 10);
        }
        else
        {
            result += (digit + '0');
        }
        num /= base;
    }
    string tmp;
    for(int i = result.size() - 1; i >= 0; i--)
    {
        tmp += result[i];
    }
    return tmp;
}
int main()
{
    cout<<toBase(123, 2)<<endl;
    cout<<toBase(222, 16);

    return 0;
}

