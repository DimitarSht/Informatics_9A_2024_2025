/// Имаме двумерен масив от цели числа
/// Взимаме най-малкия елемент
/// от всеки ред и го записваме
/// в един ЕДНОмерен масив
/// Принтираме едномерния масив
#include<iostream>
using namespace std;
int main()
{
    int n,j,br = 0;
    long long Min = 10000000000000;
    cin>>n>>j;
    int table[n][j];
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        for(int y = 0; y < j; y++)
        {
            cin>>table[i][y];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int y = 0; y < j; y++)
        {
            if(Min > table[i][y])
            {
                Min = table[i][y];
            }
        }
        br++;
        for(int z = br - 1; z < br; z++)
        {
            arr[z] = Min;
        }
        Min = 10000000000;
    }
    for(int z = 0; z < n; z++)
    {
            cout<<arr[z]<<" ";
    }

    return 0;
}
