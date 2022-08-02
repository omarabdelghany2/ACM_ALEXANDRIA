#include <iostream>
#include"algorithm"

using namespace std;


int lower_bound(int arr[], int N, int X);
int main()
{



    int NumberOfShops=0;
    cin>>NumberOfShops;
    int arr[NumberOfShops]={0};
    //cin>>array of shops
    for(int i=0;i<NumberOfShops;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+NumberOfShops);
    int NumberOfDays=0;
    cin>>NumberOfDays;


    int Money=0;
    int index=0;
    for(int i=0;i<NumberOfDays;i++)
    {
        cin>>Money;
        if(Money<arr[0])
        {

            cout<<"0"<<endl;
        }
        else
        {
            index = lower_bound(arr,NumberOfShops,Money);
             cout<<index+1<<endl;
        }
    }
    return 0;
}


int lower_bound(int arr[], int N, int X)
{
    int mid;

    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;

    // Till low is less than high
    while (low < high) {
        mid = low + (high - low) / 2;

        // If X is less than or equal
        // to arr[mid], then find in
        // left subarray
        if (X <= arr[mid]) {
            high = mid;
        }

        // If X is greater arr[mid]
        // then find in right subarray
        else {
            low = mid + 1;
        }
    }

    // if X is greater than arr[n-1]

    if(low < N && arr[low] <= X) {
       low++;
    }

    // Return the lower_bound index
    return low-1;
}
