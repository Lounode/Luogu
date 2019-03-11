#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
int n;
//char s[1000];
int l;
int gb=0;
int in;
bool zmode=true;
int zs=0;
int main()
{
	scanf("%d",&n);
	while(n*n>zs)
	{
		scanf("%d",&in);
		//cout<<in-'0'<<"\n";
		for(int i=1;i<=in;i++)
		{
			if(gb==n)
			{
				cout<<"\n";
				gb=0;
			}
			if(zmode)
				cout<<"0";
			else
				cout<<"1";
			gb++;
			zs++;
		}
		if(zmode)
			zmode=false;
		else
			zmode=true;
	}
/*
	scanf("%[^\n]",&s);
	l=strlen(s);
	for(int i=1;i<=14;i++)
		cout<<s[i]<<" ";
*/
/*
	for(int i=1;i<=l;i++)
	{
		for(int o=1;o<=s[i]-'0';o++)
		{
			if(gb>=n)
				cout<<"\n";
			if(i%2==0)
				cout<<"1";
			else
				cout<<"0";
			gb++;
		}
	}
	//*/
	return 0;
}