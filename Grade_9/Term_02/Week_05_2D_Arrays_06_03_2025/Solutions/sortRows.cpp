#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cin>>rows>>cols;
    int table[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols - 1; j++)
        {
            for(int k = 0; k < cols - j - 1; k++)
            {
                if(table[i][k] > table[i][k+1])
                {
                    swap(table[i][k], table[i][k+1]);
                }
            }
        }
    }

    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows - 1; j++)
        {
            for(int k = 0; k < rows - j - 1; k++)
            {
                if(table[k][i] > table[k+1][i])
                {
                    swap(table[k][i], table[k+1][i]);
                }
            }
        }
    }





    return 0;
}
