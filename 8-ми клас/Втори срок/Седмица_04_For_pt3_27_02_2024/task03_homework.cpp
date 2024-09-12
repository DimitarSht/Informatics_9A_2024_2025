#include<iostream>
using namespace std;
/*
Задача 3:
Да се напише програма, която позволява
въвеждане на числа до въвеждане на 0 и
след това да отпечата най-малкото и
най-голямото от тях. Използвайте for цикъл.
*/
int main()
{
    int MIN = 999, MAX = 0;
    int number;
    cin>>number;
    for(int i = 0;number != 0;i++)
    {
        if(number < MIN)
        {
            MIN = number;
        }
        if(number > MAX)
        {
            MAX = number;
        }
        cin>>number;
    }
    cout<<"MAX: "<<MAX<<endl;
    cout<<"MIN: "<<MIN<<endl;
    return 0;
}
