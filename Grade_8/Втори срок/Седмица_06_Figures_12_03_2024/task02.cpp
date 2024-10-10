#include<iostream>
using namespace std;
int main()
{
//    int n = rows = cols;
//    for(int x = 0; x < rows; x++)
//    {
//        for(int y = 0; y < cols; y++)
//        {
//
//        }
//    }
    int n = 5;
//    for(int rows = 0; rows < n; rows++)
//    {
//        for(int cols = 0; cols < n; cols++)
//        {
//            cout<<"*"<<" ";
//        }
//        cout<<endl;
//    }
//    for(int rows = 0; rows < n; rows++)       
//    {
//        for(int cols = 0; cols < n; cols++)   
//        {
//            if(rows >= cols)          /// принтираме задача 1 б)
//            {
//                cout<<rows+1<<" ";
//            }
//        }
//        cout<<endl;
//    }
    int number = 1;             
    for(int rows = 0; rows < n; rows++)
    {
        for(int cols = 0; cols < n; cols++)
        {
            if(rows >= cols)        /// принтираме задача 1 в)
            {
                cout<<number<<" ";
                number++;
            }
        }
        cout<<endl;
    }
    return 0;
}

