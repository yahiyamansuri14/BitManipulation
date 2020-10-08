#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a=10;
   int bit=2;
   int power=pow(2,bit);
   //int result=a&power;
   result=1&(1<<bit);
   //one optimize approach is we can use left shift operator to find power as it gives N*2^i;
   //do left shift 1 to bit it will give you (1*2^i)
   if(result==0)
    cout<<"False";
   else
    cout<<"True";
   return 0;
}
