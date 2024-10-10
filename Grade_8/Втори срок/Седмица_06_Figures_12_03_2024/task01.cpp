#include<iostream>
using namespace std;
int main()
{
//    int n = rows = cols; /// квадратна таблица
//    for(int x = 0; x < rows; x++)
//    {
//        for(int y = 0; y < cols; y++)
//        {
//
//        }
//    }
    int n = 5;
//    for(int rows = 0; rows < n; rows++)   /// така принтираме таблица 5х5
//    {
//        for(int cols = 0; cols < n; cols++)
//        {
//            cout<<"*"<<" ";
//        }
//        cout<<endl;
//    }
    for(int rows = 0; rows < n; rows++)
    {
        for(int cols = 0; cols < n; cols++)
        {
//            if(rows >= cols)          /// принтираме под главния диагонал
//            {
//                cout<<"* ";
//            }
//            if(rows == cols)          /// принтираме главен диагонал
//            {
//                cout<<"*";
//            }
//            else
//            {
//                cout<<" ";
//            }
            if(rows + cols <= n - 1)    /// принтираме под втори главен диагонал
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
