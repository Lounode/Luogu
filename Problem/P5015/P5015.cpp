#include<bits/stdc++.h>
using namespace std;
char s[10];
int n,ans=0;
int main ()
{
	scanf("%[^\n]%*c",s);
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]!=' ')
		ans++;
	}
	cout<<ans;
	return 0;
}
//第一次参加noip时的第一题