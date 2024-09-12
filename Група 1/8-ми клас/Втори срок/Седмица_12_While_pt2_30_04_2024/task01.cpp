#include<iostream>
using namespace std;
int main()
{
/*
Задача 1:
Да се състави програма, която въвежда
от клавиатурата числа до въвеждане на 0
и извежда броя на въведените числа.
*/
    int n, cnt = 0;
    /// do-while
    do
    {
        cin>>n;
        cnt++;
    }
    while(n!=0);
    cout<<cnt;

    /// While
    cin>>n;
    while(n!=0)
    {
        cnt++;
        cin>>n;
    }

    return 0;
}
