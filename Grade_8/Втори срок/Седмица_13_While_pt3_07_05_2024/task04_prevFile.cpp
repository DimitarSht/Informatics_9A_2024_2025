#include<iostream>
using namespace std;
/*
Да се състави програма, която извежда
квадратите на всички естествени числа
по-малки и равни на въведеното.
В програмата да се използва само сумиране, т.е. Да не се използва умножение или
степенуване.
Входни данни: естествено число от
интервала [5..100].
Пример: 6 Изход: 1, 4, 9, 16, 25, 36
Използвайте цикъл while.
*/
int main()
{
    int num, currNumber = 1, result = 0;
    cin>>num;
    while(currNumber <= num)
    {
        for(int i = 1; i <= currNumber; i++)
        {
            result += currNumber;
        }
        cout<<result<<" ";
        result = 0;
        currNumber++;
    }
    return 0;
}
