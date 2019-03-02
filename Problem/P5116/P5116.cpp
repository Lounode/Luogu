#include <iostream>
#include <cstdio>
using namespace std;
int i,j,k,s[4],q[4];
int main ()
{
	for(i=1;i<4;i++)
		scanf("%d%d",&s[i],&q[i]);
	i=0,k=1;
	for(j=1;j<5;j++)
	{
		i++,k++;
		if (i==4)
            i=1;
        if (k==4)
            k=1;
        if (q[i]+q[k]<=s[k])
            q[k]+=q[i],q[i]=0;
        else
            q[i]+=q[k]-s[k],q[k]=s[k];
	}
	for(i=1;i<4;i++)
		cout<<q[i]<<"\n";
	return 0;
}