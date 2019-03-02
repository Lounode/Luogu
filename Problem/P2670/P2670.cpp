#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
char in;
int s[1000][1000];
int main ()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int o=1;o<=m;o++)
		{
			cin>>in;
			if(in=='*')
			s[i][o]=1;
		}
	for(int i=1;i<=n;i++)
	{
		for(int o=1;o<=m;o++)
		{
			if(s[i][o]==1) 
				cout<<"*";
			else
			{
				cout<<s[i+1][o+1]+s[i+1][o-1]+s[i+1][o]+s[i][o+1]+s[i][o-1]+s[i-1][o+1]+s[i-1][o]+s[i-1][o-1];
			}
		}
		cout<<"\n";
	}
		
	return 0;
}