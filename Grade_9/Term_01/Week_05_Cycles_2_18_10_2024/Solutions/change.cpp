#include<iostream>
using namespace std;
int main()
{
    int amount;
    cin>>amount;

    int count100 = 0, count50 = 0, count20 = 0, count10 = 0, count5 = 0, count2 = 0, count1 = 0;

    if (amount >= 100) {
        count100 = amount / 100;
        amount %= 100;
    }
    if (amount >= 50) {
        count50 = amount / 50;
        amount %= 50;
    }
    if (amount >= 20) {
        count20 = amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        count10 = amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        count5 = amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        count2 = amount / 2;
        amount %= 2;
    }
    if (amount >= 1) {
        count1 = amount;
        amount = 0;
    }
    if (count100 > 0) cout << count100 << " x 100 \n";
    if (count50 > 0) cout << count50 << " x 50 \n";
    if (count20 > 0) cout << count20 << " x 20 \n";
    if (count10 > 0) cout << count10 << " x 10 \n";
    if (count5 > 0) cout << count5 << " x 5 \n";
    if (count2 > 0) cout << count2 << " x 2 \n";
    if (count1 > 0) cout << count1 << " x 1 \n";
    return 0;

}

