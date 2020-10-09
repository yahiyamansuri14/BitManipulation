#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=16,count=0;
    int bit=3;
    int M=~((1<<(bit+1))-1);
    cout<<(n & M);
   return 0;
}
