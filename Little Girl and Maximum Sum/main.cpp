#include <iostream>
#include"algorithm"
using namespace std;

int main()
{
    int arr_size;
    int quiery_no;
    cin>>arr_size>>quiery_no;
    int arr[arr_size];


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
        counter[start-1]++;
        counter[End]--;
    }

    for(int i=0;i<arr_size;i++)
    {
        if(i!=0)
            counter[i]+=counter[i-1];

    }

    sort(counter,counter+arr_size);
    sort(arr,arr+arr_size);

for(int i=0;i<arr_size;i++)
    {
        cout<<arr[i]<<" ";

    }
 cout<<endl;





    long sum=0;
    for(int i=0;i<arr_size;i++)
    {
        sum+=arr[i]*counter[i];
    }
    cout<<sum;
    return 0;
}
