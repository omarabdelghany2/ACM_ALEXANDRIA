#include <iostream>
#include"algorithm"

using namespace std;

int main()
{
    string input1;
    string input2;
    cin>>input1>>input2;
    input1+=input2;
    sort(input1.begin(),input1.end());
    cin>>input2;
    sort(input2.begin(),input2.end());
    if(input1==input2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
