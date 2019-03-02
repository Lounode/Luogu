#include <iostream>
#include <cstdio>
using namespace std;
bool a[200];
int main()
{
    int n,m,s=0;
	cin>>n>>m;
    for(int i=0;i<n;i++)
	{
        for(int o=0;o<m;o++)
		{
			if(++s>n)
			s=1;
			if(a[s])
			o--;
		}
        cout<<s<<" ";
		a[s]=true;
    }
    return 0;
}