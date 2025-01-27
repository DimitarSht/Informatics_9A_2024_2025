#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c = 'A';

    char word[256]; /// 1024

//    cin>>word; /// въвежда само 1 дума

    cin.getline(word, 256); /// въвежда до натискане на Enter

    for(int i = 0; word[i] != '\0'; i++)
        cout<<word[i];

//    cout<<word;


    return 0;
}



