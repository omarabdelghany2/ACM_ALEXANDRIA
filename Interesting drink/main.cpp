#include <iostream>
#include"algorithm"


using namespace std;

int upper_bound(int arr[],int Size,int num);
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
        index=upper_bound(arr,NumberOfShops,Money);
        cout<<index<<endl;
    }


    return 0;
}

int upper_bound(int arr[],int Size,int num)
{
int low=0;
int high=Size;
int mid=0;
while(low<high)
    {
        mid=(low+high)/2;
        if(num<arr[mid])
            high=mid;
        else
            low=mid+1;


    }
    return(low);
}

