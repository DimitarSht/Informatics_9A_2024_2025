#include<iostream>
using namespace std;
int main()
{
    /// Търсим броя на цифрите на num
    int num, tmp, revNumber = 0, cntDigits = 0;
    cin>>num;
    tmp = num;
    /// tmp -> temporary
    /// rev -> reverse
    /// cnt -> count
    while(num != 0)
    {
        num /= 10;
        cntDigits++;
    }
    for(int i = cntDigits - 1; i >= 0; i--)
    {
        revNumber = revNumber + tmp%10*pow(10, i);
        tmp /= 10;
    }
    while(tmp != 0)
    {
        revNumber = revNumber + tmp%10*pow(10, cntDigits--);
        tmp /= 10;
    }




    return 0;
}
