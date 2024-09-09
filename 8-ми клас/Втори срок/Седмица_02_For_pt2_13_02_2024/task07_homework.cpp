#include<iostream>
using namespace std;
int main()
{
    int N,counter=0;        /// counter = 0 -> брой делители в интервала [2, N)
    cin>>N;                 /// въвеждаме число N
    for(int i=2;i<N;i++)    // цикъл, който обхожда всички числа от 2 до (N - 1) включително
    {
        if(N%i==0)          /// ако i дели N без остатък, то имаме делител
        {
            counter++;      /// учеличаваме броя на делителите
        }
    }
    if(counter==0)      /// ако нямаме делители в интервала от ред 5, то числото N е просто
    {
        cout<<"prosto"<<endl;
    }
    else                /// иначе N е съставно
        cout<<"sustavno"<<endl;

    return 0;
}
