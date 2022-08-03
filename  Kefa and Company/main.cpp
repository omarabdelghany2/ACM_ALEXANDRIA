#include <iostream>
#include"algorithm"
using namespace std;

int upper_bound(pair <int,int> arr,int Size,int num);
int main()
{
    int num=0;
    int diff=0;
    cin>>num>>diff;
    pair <int,int> friends[num];
    for(int i=0;i<num;i++)
    {
        cin>> friends[i].first;
        cin>> friends[i].second;
    }
    sort(friends,friends+num);
    for(int i=0;i<num;i++)
    {
        int index=upper_bound(friends,num,friends[i].first+diff);
    }



    return 0;
}
int upper_bound(pair <int,int> arr,int Size,int num)
{
int low=0;
int high=Size;
int mid=0;
while(low<high)
    {
        mid=(low+high)/2;
        if(num<arr[mid].first)
            high=mid;
        else
            low=mid+1;


    }
    return(low);
}

