#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char s[101];
int j;
int main ()
{
	int n,cd;
	scanf("%d",&n);
	scanf("%s",&s);
	for(j = 0; s[j] != '\0'; j++)
        putchar((s[j]-'a'+n)%26+'a'); 
	return 0;
}