#include <iostream>
#include <cstdio>
using namespace std;
bool s[100000];
int main ()
{
	int l,m,head,tail,sum=0;
	scanf("%d%d",&l,&m);
	for(int o=1;o<=m;o++)
	{
		cin>>head>>tail;
		for(int p=head;p<=tail;p++)
		s[p]=true;
	}
	for(int i=0;i<=l;i++)
	{
		if(!s[i])
		sum++;
	}
	cout<<sum<<"\n";
	
	return 0;
}