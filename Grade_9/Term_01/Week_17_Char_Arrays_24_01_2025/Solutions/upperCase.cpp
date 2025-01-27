#include<iostream>
using namespace std;
const int MAX_SIZE = 256;
int main()
{
    char str[MAX_SIZE];
    cin.getline(str, MAX_SIZE);

    /// hello jimmy
    /// HELLO JIMMY

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }


    cout<<str;
//    for(int i = 0; str[i] != '\0'; i++)
//        cout<<str[i];



    return 0;
}
