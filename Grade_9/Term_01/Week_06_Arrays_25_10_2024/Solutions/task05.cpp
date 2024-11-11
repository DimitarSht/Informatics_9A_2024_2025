#include<iostream>
using namespace std;
int main()

{
    int N=15, sum=0;
    int arr[N];
    for( int i=0; i<N; i++)
    {
        cin>>arr[i];

        if(i%2==0)
        {
            sum=sum+arr[i];

        }
    }
        cout<<sum<<endl;


    return 0;
}
