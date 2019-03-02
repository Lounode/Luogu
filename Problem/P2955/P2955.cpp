#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n;
char s[1000010];
int l;
int main ()
{
	//freopen("testdata.in","r",stdin);
	//freopen("testdata.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",&s);
		l=strlen(s);
		//cout<<s[l-1];
		if(s[l-1]%2==0)
			cout<<"even\n";
		else
			cout<<"odd\n";
	}
	return 0;
}