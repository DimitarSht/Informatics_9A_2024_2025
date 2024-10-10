#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    char Operator;
    cin>>Operator;

    switch(Operator)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"Vavedi drug operator!"<<endl;
        break;
    }


    return 0;
}
