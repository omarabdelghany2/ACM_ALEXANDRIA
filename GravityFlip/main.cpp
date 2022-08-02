#include <iostream>
#include"algorithm"

using namespace std;

int main()
{
    int num=0;

    cin>>num;
    int input [num];

    for(int i=0;i<num;i++)
    {
        cin>>input[i];
    }

    sort(input,input+num);

    for(int i=0;i<num;i++)
    {
        cout<<input[i]<<' ';
    }

    return 0;

}
