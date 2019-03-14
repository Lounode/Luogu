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
int a=0,b=0,c=0;
char s[1000];
int l;
int main()
{
	scanf("%[^\n]%*c",&s);
	l=strlen(s);
	for(int i=0;i<=l;i++)
	{
		if(s[i]=='=')
		{
			if(s[i-2]=='a')
			{
				if(s[i+1]<='9')
					a=s[i+1]-'0';
				if(s[i+1]=='a')
					a=a;
				if(s[i+1]=='b')
					a=b;
				if(s[i+1]=='c')
					a=c;

			}
			if(s[i-2]=='b')
			{
				if(s[i+1]<='9')
					b=s[i+1]-'0';
				if(s[i+1]=='a')
					b=a;
				if(s[i+1]=='b')
					b=b;
				if(s[i+1]=='c')
					b=c;
			}
			if(s[i-2]=='c')
			{
				if(s[i+1]<='9')
					c=s[i+1]-'0';
				if(s[i+1]=='a')
					c=a;
				if(s[i+1]=='b')
					c=b;
				if(s[i+1]=='c')
					c=c;
			}
		}
	}
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}