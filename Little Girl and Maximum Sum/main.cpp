#include <iostream>
#include"algorithm"
#include"vector"
using namespace std;

int main()
{
    long long arr_size;
    long long quiery_no;
    cin>>arr_size>>quiery_no;
    vector<long long> arr;


    for(int i=0;i<arr_size;i++)
    {
        long long n;
        cin>>n;
        arr.push_back(n);
    }

    long long counter[arr_size]={0};
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
    sort(arr.begin(), arr.end());



    long long sum=0;
    int i=0;
    for(long long num : arr){
        sum += num * counter[i++];
    }
    cout<<sum;
    return 0;
}
