#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,k;
int s[30010];
int in;
int sum;
int main ()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
			cin>>s[i];
	sort(s,s+n);
	sum=unique(s,s+n)-s;
	if(k<sum)
		cout<<s[k-1];
	else 
		cout<<"NO RESULT"<<"\n";
	return 0;
}