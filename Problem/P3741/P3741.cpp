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
char s[1000];
int ans=0;
int main()
{
	scanf("%d",&n);
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='V'&&s[i+1]=='K')
		{
			ans++;
			s[i]='A';
			s[i+1]='C';
			//cout<<"true";
		}
		
	}
	for(int i=0;i<n;i++)
		if(s[i+1]==s[i])
		{
			ans++;
			break;
		}
	cout<<ans;
	return 0;
}