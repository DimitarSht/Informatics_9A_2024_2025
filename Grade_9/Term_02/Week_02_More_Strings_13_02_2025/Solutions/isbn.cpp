#include<iostream>
#include<string>
using namespace std;
int main()
{
    string isbn;
    getline(cin, isbn);
    int sum = 0, cnt = 10;
    for(int i = 0; i < isbn.size(); i++)
    {
        if(isbn[i] >= '0' && isbn[i] <= '9')
        {
            sum += cnt * (isbn[i] - '0');
            cnt--;
        }
        else if(isbn[i] == 'X')
        {
            sum += cnt * 10;
            cnt--;
        }
    }
    if(sum % 11 == 0) cout<<"Valid!"<<endl;
    else cout<<"Invalid!"<<endl;


    return 0;
}
