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
#define INF 1e9+10
typedef long long ll;
using namespace std;

int main()
{
	freopen("prime.txt","w",stdout);
	cout<<"1,2,3,5,7,"
	for(int i=10;i<=100;i++)
	{
		if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
			cout<<i<<",";
	}
	return 0;
}