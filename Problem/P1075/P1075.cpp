#include <iostream>
using namespace std;
int main ()
{
	long long n;
	cin>>n;
	
	for(long long i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<n/i;	
			return 0;
		}
	}
	return 0;
}