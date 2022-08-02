#include <iostream>

using namespace std;

int main()
{
    int s=0;
    int n=0;
    cin>>n>>s;
    int arr [n][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    int seconds=0;

    for(int i=n-1;i>=0;i--)
    {
        seconds+=s-arr[i][0];
        s=arr[i][0];
        if(seconds<arr[i][1])
            seconds=arr[i][1];

    }
    if(s!=0)
        seconds+=s;
    cout<<seconds;
    return 0;
}
