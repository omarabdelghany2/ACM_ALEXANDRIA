#include <iostream>

using namespace std;

int main()
{
int word=0;
cin>>word;
string input="";
    for(int i=0;i<word;i++)
    {
            cin>>input;
            if(input.size()<=10)
            {
                cout<<input<<endl;
            }
            else
            {
                cout<<input[0]<<input.size()-2<<input[input.size()-1]<<endl;
            }

    }

    return 0;
}
