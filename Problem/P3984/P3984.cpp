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
int n,t;
int s[200010];
int sum=0,cx=0;
int main()
{
		scanf("%d%d",&n,&t);
		scanf("%d",&s[1]);
		//cout<<s[1]<<"\n";
		for(int i=2;i<=n;i++)
		{
			scanf("%d",&s[i]);
			if(s[i]-s[i-1]<t)
				sum+=s[i]-s[i-1];
			else
				sum+=t;
		}
		sum+=t;
		cout<<sum<<"\n";
	return 0;
}