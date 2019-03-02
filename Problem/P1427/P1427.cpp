#include <iostream>
#include <stack>
using namespace std;
stack <int>sta;
int main ()
{
	int a,b;
	while (true)
	{
		cin>>a;
		if(a==0)
		break;
		else
		sta.push(a);
	}
	while (true)
	{
		b=sta.size();
		if(b==0)
		return 0;
		else
		cout<<sta.top()<<" ";
		sta.pop();
	}
}