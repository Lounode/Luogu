#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int in;
int main ()
{
	set<int>s;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&in);
		s.insert(in%42);
	}
	cout<<s.size();
}