#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word1[256], word2[10];
    cin.getline(word1, 256);
    cin.getline(word2, 10);
    strcpy(word1, word2);
//    strcat(word1, word2);
    cout<<"Word1: "<<word1<<endl;
    cout<<"Word2: "<<word2<<endl;
    cout<<"Length of word1: "<<strlen(word1)<<endl;
//    cout<<"Length of word2: "<<strlen(word2)<<endl;
//    cout<<strcmp(word1, word2)<<endl;

//    cout<<strchr(word1, 'o')<<endl;
//    cout<<strstr(word1, " World")<<endl;


    return 0;
}
