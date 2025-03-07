#include<iostream>
using namespace std;
int main()
{
//    int table1[3][3];
//
//    int table2[3][3] = {
//            1,2,3,
//            4,5,6,
//            7,8,9
//    };
//
//    table1[0][0] = 10;
//    table1[1][1] = 11;
//    table1[3][3] = 9;

    int rows = 3;
    int cols = 3;
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
        for(int j = 0; j < cols; j++)
        {
            if(i == j) -> главен
            if(i < j) -> над главен
            if(i > j) -> под главен

            if(i + j == n - 1) -> втори главен
            if(i + j < n - 1) -> над втори главен
            if(i + j > n - 1) -> под втори главен


            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}
