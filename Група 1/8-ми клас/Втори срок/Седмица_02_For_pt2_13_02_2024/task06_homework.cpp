#include<iostream>
using namespace std;
int main()
{
    int sum = 0, N, current, counter = 0;   
    int MAX = 0, MIN = 999;         /// начални стойности на променливи за минимум и максимум
    cin>>N;             
    for(int i = 1; i <= N; i++)
    {
        cin>>current;           /// въвеждаме current N на брой пъти
        sum = sum + current;    /// увеличаваме сумата N пъти с текущото въведено число
        if(current % 2 == 0)    /// проверяваме четност на текущото число
        {
            counter++;          /// увеличаваме брояча на четните числа с 1
        }
        if(current > MAX)       /// редове 16 - 19 -> проверка за максимум
        {
            MAX = current;
        }
        if(current < MIN)       /// редове 20 - 23 -> проверка за минимум
        {
            MIN = current;
        }
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Broi 4etni 4isla: "<<counter<<endl;
    cout<<"MAX number: "<<MAX<<endl;
    cout<<"MIN number: "<<MIN<<endl;

    return 0;
}
