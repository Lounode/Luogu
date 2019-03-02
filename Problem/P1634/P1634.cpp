#include <iostream>
using namespace std;
int main ()
{
	long long x,n,sum=1;
	cin>>x>>n;//y=x(x+1) 2 1+(1*x*x/*x*x*x)
	for(int i=1;i<=n;i++)
	{
		sum=sum+sum*x;
	}
	cout<<sum;
	return 0;
}