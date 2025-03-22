#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
//    /// cstring
//    char str[10]; -> 9 символа и 1 терм. нула
//    strlen(str); -> размера на низа БЕЗ терм. нула
//    strcpy(str1, str2); -> копира str2 в str1
//    str1 = "abcde";
//    str2 = "efgi";
//    strcpy(str1, str2);
//    str1 = "efgi";
//    str2 = "efgi";
//    strcmp(str1, str2); -> сравнява str1 със str2
//    0 - еднакви
//    1 - ако str1 е по-голямо лексикографски
//    -1 - ако str2 е по-голямо лексикографски
//    strcat(str1, str2); -> долепя str2 към str1
//
//    /// string
//    string str1;
//    str1.size(); -> размера без терм. нула
//    str1.length(); -> размера без терм. нула
//    str1.find(str2); -> индекс на първо срещане
//                        на str2 в str1
//    str1.clear(); -> изтрива цялото съдържание на str1
//    str1.erase(i, n); -> трие от индекс i до индекс n - 1

//
//    string word1 = "abcdef";
//    string toErase = "bcde";
//    int idxErase = word1.find(toErase);
//    int lengthToErase = toErase.size();
//    word1.erase(idxErase, lengthToErase);
//    cout<<word1;

//    char c = 'o';
//    if(c >= 'a' && c <= 'z')
//    if(c >= 'A' && c <= 'Z')
    /*if((c == 'a' || c == 'o' ||
       c == 'i' || c == 'e' ||
       c == 'u'))
       {
           cout<<"Glasna e";
       }
       else
       {
           cout<<"Saglasna e";
       }*/
//    if(!(c == 'a' || c == 'o' ||
//       c == 'i' || c == 'e' ||
//       c == 'u'))
//    if(c != 'a' && c != 'o' &&
//       c != 'i' && c !='e' &&
//       c != 'u')
//       {
//           cout<<"Saglasna e";
//       }
//       else
//       {
//           cout<<"Glasna e";
//       }
//
//
//        if(c >= '0' && c <= '9')
//        {
//            cout<<"Cifra e";
//        }

    int matrix[3][3];

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin>>matrix[row][col];
        }
    }

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            /// главен диагонал
            if(row == col)
                cout<<matrix[row][col]<<" ";
            /// втори главен диагонал
            if(row + col == 2)

            /// над втори главен диагонал
            if(row + col < 2)

            /// над главен
            if(row < col)

        }
        cout<<endl;
    }

//    string str = "abcde";
//    string toReplace = "fg";
//    str.replace(toReplace, 1);
//
//    for(int i = 1; i < 3; i ++)
//    {
//        str[i] = toReplace[i - 1];
//    }
//    char word[6] = {'a', 'b', 'c', 'd', 'e'};
//    char word[6];
//    word[0] = 'a';
//    word[1] = 'b';
//    word[2] = 'c';
//    word[3] = 'd';
//    word[4] = 'e';
//
//    int arr[5] = {1,2,3,4,5};

    return 0;
}


