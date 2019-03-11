#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
int n;
double s[100];
int main()
{
	scanf("%d",&n);
	s[1]=1;
	s[2]=1;
	for(int i=3;i<=n;i++)
		s[i]=s[i-1]+s[i-2];
	printf("%0.2f",s[n]);
	return 0;
}
/*
纳尼竟然是斐波那契数列?我说怎么之前写的程序答案这么眼熟
*/