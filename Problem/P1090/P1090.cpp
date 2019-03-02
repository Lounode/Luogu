#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int n;
int in;
int a,b;
int sum;
priority_queue<int,vector<int>,greater<int> > qu;
int main ()
{
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++)
	 {
	 	scanf("%d",&in);
	 	qu.push(in);
	 }
	while (qu.size()!=1)
	{
		a=qu.top();
		qu.pop();
		b=qu.top();
		qu.pop();
		sum=sum+(a+b);
		qu.push(a+b);
	}
	cout<<sum;
	return 0;
}