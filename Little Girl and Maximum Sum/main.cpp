#include <iostream>
#include"algorithm"
using namespace std;

int main()
{
    int arr_size=0;
    int quiery_no=0;
    cin>>arr_size>>quiery_no;
    int arr[arr_size]={0};
    for(int i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    int counter[arr_size]={0};
    int start=0;
    int End=0;
    for(int i=0;i<quiery_no;i++)
    {
        cin>>start>>End;
        for(int j=start-1;j<End;j++)
        {
            counter[j]++;
        }

    }
    sort(arr,arr+arr_size);
    sort(counter,counter+arr_size);


    int sum=0;
    for(int i=0;i<arr_size;i++)
    {
        sum+=arr[i]*counter[i];
    }
    cout<<sum;
    return 0;
}
