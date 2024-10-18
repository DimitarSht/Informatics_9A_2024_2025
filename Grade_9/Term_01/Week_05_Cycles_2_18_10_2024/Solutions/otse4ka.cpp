#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2;
    x3 = max(x1, x2);
    y3 = min(y1, y2);

    double c = sqrt((x3 - x1)*(x3-x1) + (y2 - y3)*(y2 - y3));
    cout<<c;
    /*
    abs() - > модул
    sqrt() -> корен квадратен
    pow() -> степен
    */
    return 0;
}
