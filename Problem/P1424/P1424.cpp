#include <iostream>
using namespace std;
int main()
{
    int x,n,i,baka=0;
    cin>>x>>n;
    for (i=x;i<=x+n-1;++i)
	{
        if (i%7==6 || i%7==0)
		{
            continue;
        }
        baka=baka+250;
    }
    cout<<baka<<endl;
    return 0;
}