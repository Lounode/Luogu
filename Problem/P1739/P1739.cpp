#include <iostream>
using namespace std;
int main ()
{
	char a;
	int sum=0,ans=0;
	while (a!='@')
	{
		cin>>a;
		if(a=='(')
		sum++;
		if(a==')')
		sum--;
		if(sum<0)
		{
			sum=0;
			ans++;
		}
		
	}
	if(!sum&&!ans)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}