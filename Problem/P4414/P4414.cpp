#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int s[10];
char in;
int main ()
{
	for(int i=1;i<=3;i++)
		cin>>s[i];
	sort(s+1,s+3+1);
//	cout<<s[1]<<s[2]<<s[3]<<"\n";
	for(int i=1;i<=3;i++)
	{
		cin>>in;
		if(in=='A') cout<<s[1]<<" ";
		if(in=='B') cout<<s[2]<<" ";
		if(in=='C') cout<<s[3]<<" ";
	}
	return 0;
}
