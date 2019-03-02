#include<cstring> 
#include <iostream>
#include <cmath>
using namespace std;

struct gaojing
{
	int l;
	int z[10000];
	
	gaojing()
	{
		l = 1;
		memset(z,0,sizeof(z));
	} 
};

gaojing a,b,c;

gaojing f(int x)
{
	gaojing z;
	z.l = 0;
	while (x!=0)
	{
		z.l ++ ;
		z.z[z.l] = x%10;
		x = x/10; 
	} 
	
	return z;
}


gaojing operator+(gaojing a,gaojing b)
{
	gaojing c;
	c.l = max(a.l,b.l);
	for (int i=1;i<=c.l;i++)
		c.z[i] = a.z[i] + b.z[i];
	for (int i=1;i<=c.l;i++)
		if (c.z[i] >= 10)
		{
			c.z[i+1] += 1;
			c.z[i] -= 10;
		} 
	if (c.z[c.l+1] != 0) c.l ++ ; 
	
	return c;
}

char s[1000];
gaojing createGaojing()
{
	cin >> s+1;
	gaojing a;
	a.l = strlen(s+1);
	for (int i=1;i<=a.l;i++)
		a.z[i] = s[a.l-i+1] - '0';
		
	return a;
} 

void print(gaojing a)
{
	for (int i=a.l;i>=1;i--)
		cout << a.z[i];
}

int main()
{
	a = createGaojing();
	b = createGaojing();
	c = a+b;
	print(c);
	
	
	return 0;
}


