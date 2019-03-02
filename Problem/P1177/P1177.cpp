#include <iostream>
#include <algorithm>
using namespace std;
int s[100000];
int main ()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	    cin>>s[i];
	sort(s+1,s+n+1);
	for(int i=1;i<=n;i++)
	    cout<<s[i]<<" ";
	return 0;
}