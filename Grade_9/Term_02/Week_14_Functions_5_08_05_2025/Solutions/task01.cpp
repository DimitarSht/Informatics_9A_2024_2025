#include<iostream>
using namespace std;
int cubes (int s )
{
    return s * s * s;
}

string greeting(string name)
{
    if(name == "Ivancho")
    {
        return "Hello, my Love !";
    }
    return "Hello, " + name + "!";
}
double abs(double A)
{
    if(A < 0)
    {
        A = -A;
        return A;
    }
    else
    {
        return A;
    }
}

int myStrLen(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
//        cout<<str[i]<<endl;
        i++;
    }
    return i;
}
int main()
{
    char arr[5] = {'a', 'b', 'c', 'd'};
    cout<<myStrLen(arr);

//    cout<<greeting("Ivancho");
    return 0;
}

