#include<iostream>
using namespace std;

void suma(double x, double y)
{
    double z;
    cin>>z;
    cout<<x + y + z<<endl;
}

double suma2(double x, double y, double t)
{
    double z;
    cin>>z;
    return x + y + z;
}


int NOD(int a, int b)
{
    if(a < b)
    {
        swap(a, b);
    }
    while(a != 0 && b != 0)
    {
        int oldA = a;
        a = b;
        b = oldA % b;
    }

    return max(a, b);
}

void input(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
}

void output(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sumArr(int arr[], int sz)
{
    int sum = 0;
    for(int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
}

int subSum(int arr[], int sz, int i, int k)
{
    int sum = 0;
    if(i + k > sz)
    {
        return -1;
    }
    for(int j = i; j < i + k; j++)
    {
        sum += arr[j];
    }
    return sum;
}
int main()
{

//    int a, b;
//    cin>>a>>b;
//    cout<<NOD(a, b);
//    suma(a, b);
//    double result = suma2(a, b, 5);
//    cout<<suma2(a, b);

    int n;
    cin>>n;
    int arr[n];
    input(arr, n);
//    sumArr(arr, n);
    cout<<subSum(arr, n, 2, 4)<<endl;
    output(arr, n);



    return 0;
}
