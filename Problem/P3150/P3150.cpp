#include <iostream>
#include <cstdio>
using namespace std;
int n;
int in;
int main ()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&in);
        if(in%2!=0)
            cout<<"zs wins\n";
        else
            cout<<"pb wins\n";
    }
    return 0;
}