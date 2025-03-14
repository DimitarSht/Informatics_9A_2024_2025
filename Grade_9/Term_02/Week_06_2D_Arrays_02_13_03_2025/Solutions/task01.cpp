#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    bool isTriangle = true;
    /// Псевдокод
//    for rows = 0 to n:
//            for cols = 0 to n:
//                if rows > cols:
//                    if matrix[rows][cols] != 0:
//                        isTriangle = false
//                        break
    for(int rows = 0; rows < n; rows++)
    {
        for(int cols = 0; cols < n; cols++)
        {
            if(rows > cols)
            {
                if( matrix[rows][cols] != 0)
                {
                    isTriangle = false;
                }
            }
        }
    }

    /// Чрез boolalpha директно принтираме true или false в зависимост от това каква е стойността на булевата променлива isTriangle
    cout<<boolalpha<<isTriangle<<endl;

//    if(isTriangle) cout<<"True";
//    else cout<<"False";

    return 0;
}
