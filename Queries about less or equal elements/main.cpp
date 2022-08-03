#include <iostream>
#include"algorithm"
using namespace std;
int upper_bound(int arr[],int Size,int num);
int main()
{
    int Arr1_Size = 0;
    int Arr2_Size = 0;
    cin>>Arr1_Size;
    cin>>Arr2_Size;

    int Arr1[Arr1_Size]={0};
    int Arr2[Arr2_Size]={0};

      for(int i=0;i<Arr1_Size;i++)
    {
        cin>>Arr1[i];
    }
      for(int i=0;i<Arr2_Size;i++)
    {
        cin>>Arr2[i];
    }
     sort(Arr1,Arr1+Arr1_Size);

     int index=0;
        for(int i=0;i<Arr2_Size;i++)
    {
        index=upper_bound(Arr1,Arr1_Size,Arr2[i]);
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

