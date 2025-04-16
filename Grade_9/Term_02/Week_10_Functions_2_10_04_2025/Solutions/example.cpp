#include<iostream>
using namespace std;

bool areEqual(int a, int b)
{
    if(a==b)
        return 1;
}



//    for(int i = 0; i < 10; i++)
//    {
//        if(i<5)
//        cout<<i<<" ";
//        else
//            return;
//    }
//}

void areEqual2(int a, int b)
{
    if(a == b)
        cout<<"equal";
    else
        cout<<"not equal";
}

int main()
{
    int a, b;
    cin>>a>>b;
    areEqual2(a, b);
//    bool result = areEqual(x, y);
//    cout<<result;
//    cout<<areEqual(x, y);

    return 0;
}
