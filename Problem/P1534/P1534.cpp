#include <iostream>
#include <cstdio>
using namespace std;
int baka;
int bakaa,bakaka;
int bakaaa=0;
int bakabaka;
int main ()
{
	scanf("%d",&baka);
	for(int i=1;i<=baka;i++)
	{
		scanf("%d%d",&bakaa,&bakaka);
		bakaaa+=bakaa+bakaka-8;
		bakabaka+=bakaaa;
	}
	cout<<bakabaka;
}