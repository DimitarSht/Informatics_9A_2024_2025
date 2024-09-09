#include<iostream>
using namespace std;
int main()
{
    /// Изведем всички цифри от 0 до 9
    for(int i = 0; i < 10 ; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl; /// принтира нов ред
    /// Извеждаме четните числа до 20
    for(int i = 0; i <= 20; i = i + 2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //int i = 0;
    for( ; i < 10; i++) /// ще ни даде грешка, защото не сме декларирали i
    {

    }
    return 0;
}
