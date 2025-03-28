#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cin>>rows>>cols;

    /// Въвеждане на двумерния масив
    int matrix[rows][cols];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>matrix[i][j];
        }
    }

    /// Извеждане на двумерния масив в табличен видs
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
