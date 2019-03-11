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
char m[1000];
int l;
int sum=0;
int main()
{
	scanf("%d",&n);
	if(n!=16)
	{
		scanf("%s",m+1);
		l=strlen(m);
		while(sum<=30)
		{
			bool hw=true;
			for(int i=1;i<=l;i++)
				if(m[i]!=m[l-i])
					hw=false;
			for(int i=l;i>=0;i--)
			{
				m[i]-'0'+=(m[i-l+1]-'0')*;
				if(m[i]>=n)
				{
					m[i-1]++;
					m[i]-=n;
				}

			}
			if(!hw)
				sum++;
		}
	}
	/*
	else
	{

	}
	//*/
	cout<<"STEP="<<sum<<"\n";
	return 0;
}