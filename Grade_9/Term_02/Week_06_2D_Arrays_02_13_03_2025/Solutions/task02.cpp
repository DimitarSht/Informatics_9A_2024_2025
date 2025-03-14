#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    int matrix[m][n];
    int destination[n][m];
    for(int rows = 0; rows < m; rows++)
    {
        for(int cols = 0; cols < n; cols++)
        {
            cin>>matrix[rows][cols];
        }
    }

    for(int rows = 0; rows < m; rows++)
    {
        for(int cols = 0; cols < n; cols++)
        {
            /// Умножение на всеки елемент на матрицата с числото number 
            /// destination[i][j] = matrix[i][j] * number;

            /// Транспониране на matrix
            /// Ред отива на мястото на колона и колона отива на мястото на ред
            destination[cols][rows] = matrix[rows][cols];
        }
    }

    for(int rows = 0; rows < n; rows++)
    {
        for(int cols = 0; cols < m; cols++)
        {
            cout<<destination[rows][cols]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
