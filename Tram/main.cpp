#include <iostream>

using namespace std;

int main()
{
   int loop=0;
   int input=0;
   int total=0;
   int MAX=0;
   cin>>loop;
   for(int i=0;i<loop;i++)
   {
    cin>>input;
    total-=input;
    cin>>input;
    total+=input;
    if(total>MAX)
        MAX=total;
   }
   cout<<MAX;
    return 0;
}
