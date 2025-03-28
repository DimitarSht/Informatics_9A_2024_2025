#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
//    cin>>str; /// дума
    getline(cin, str); /// изречение
    /// въвежда до натискане на enter

    int length = str.size(); /// брой символи
//    cout<<str.size()<<endl;
//    cout<<length;


//    for(int i = 0; str[i] != '\0'; i++)
//    {
//
//    }
    string word, destination;
    for(int i = length - 1; i >= 0; i--)
    {
        if(str[i] != ' ')
        {
            word += str[i];
        }
        else
        {
            int wordLength = word.size();
            for(int j = wordLength - 1; j >= 0; j--)
            {
                destination += word[j];
            }
            destination += ' ';
            word.clear();
//            word.erase(0, wordLength);
        }
    }
    int wordLength = word.size();
    for(int j = wordLength - 1; j >= 0; j--)
    {
        destination += word[j];
    }

    cout<<destination;

    return 0;
}
