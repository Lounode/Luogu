#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > qu;
int n;
int cz,in;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&cz);
		if(cz==1)
		{
			scanf("%d",&in);
			qu.push(in);
		}
		if(cz==2)
			cout<<qu.top()<<"\n";
		if(cz==3)
			qu.pop();
		
	}
	return 0;
}