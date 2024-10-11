#include<iostream>
using namespace std;
int main()
{
    char a, b; ///  символи
    string s; /// поредица от символи (текст)
    cin>>a>>b;
    if((a >= '0' && a <= '9') || (b >= '0' && b <= '9'))
        cout<<"Ne obicham matematika ;("<<endl;
    else if ((a >= 'A' && a <= 'Z') && (b >= 'A' && b <= 'Z'))
        cout<<"Q ne mi vikai!"<<endl;
    else if((a >= 'A' && a <= 'Z') && (b >= 'a' && b <= 'z'))
        cout<<"Dobre de!"<<endl;
    else cout<<"Nauchi se da pisheh!"<<endl;



    return 0;
}
