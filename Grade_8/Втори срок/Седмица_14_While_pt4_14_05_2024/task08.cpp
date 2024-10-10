#include<iostream>
using namespace std;
int main()
{
    /*
    Да се състави програма, която изчислява обща сума от естествени числа, всяко от
    които се дели без остатък на дадено 1-цифрено число. Тази сума не бива да надвишава
    въведено естествено число (горна граница). Изведете всички такива числа и
    изчислената им обща сума.
    Входни данни br - 2 числа: 1) делител, 2) горна граница.
    Пример: 4, 100 Изход: 4,8,12,16,20,24 -> сумата е 100
    Използвайте цикъл while.
    */
    int delitel, gornaGranica;
    cin>>delitel>>gornaGranica;

    int chislo = 1, sum = 0;
    while(sum <= gornaGranica)
    {

        if(chislo % delitel == 0)
        {
            sum += chislo;
            if(sum > gornaGranica)
            {
                sum -= chislo;
                break;
            }
            else
            {
                cout<<chislo<<" ";
            }
        }
        chislo++;
    }
    cout<<sum<<endl;


    return 0;
}
