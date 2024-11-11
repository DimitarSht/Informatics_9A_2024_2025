#include <iostream>
using namespace std;
int main ()
{
    int N, MIN = 10000, MAX = 0, cnt = 0;
    cin >> N;
    double arr[N];
    double average=0;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        if (arr[i] >= MAX)
        {
            MAX = arr[i];
        }
        if (arr[i] <= MIN)
        {
            MIN = arr[i];
        }
        average=average + arr[i];
    }
    cout << MAX << " " << MIN;
    average = average / N;
    cout << average << " ";
    for(int i = 1; i <= N; i++)
    {
        if(arr[i] >= average)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;





    return 0;
}
