#include <iostream>

using namespace std;

int main()
{
    int loop=0;
    int index=0;
    cin>>loop>>index;
    int input [loop]={0};
    for(int i=0;i<loop;i++)
    {
        cin>>input[i];
    }
    int result=0;
    for(int i=0;i<loop;i++)
    {
        if((input[i]>=input[index-1])&&(input[i]!=0))

            result++;
    }
    cout<<result;

    return 0;
}
