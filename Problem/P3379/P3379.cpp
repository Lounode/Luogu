#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 500005 * 2;
struct edge {
	int v, next;
}edg[maxn];

int ehead[maxn], ecnt;
void add(int u, int v)
{
	edg[++ecnt] = (edge){v, ehead[u]};
	ehead[u] = ecnt;
	edg[++ecnt] = (edge){u, ehead[v]};
	ehead[v] = ecnt;
}

int dep[maxn];
int l[maxn], r[maxn];
int euler[maxn], tot;
void dfs(int u, int fa)
{
	euler[++tot] = u; l[u] = tot;
	for (int j = ehead[u]; j; j = edg[j].next)
	if (edg[j].v != fa)
	{
		dep[edg[j].v] = dep[u] + 1;
		dfs(edg[j].v, u);
		euler[++tot] = u;
	}
	r[u] = tot;
}

int st[maxn][20], n, m, s, bin[maxn];
int Min(int x, int y) 
{
	if (dep[x] < dep[y])
		return x;
	else
		return y;
}
int query(int l, int r)
{
	int j = bin[r - l + 1];
	return Min(st[r][j], st[l + (1 << j) - 1][j]);
}
int lca(int x, int y)
{
	return query(min(l[x], l[y]), max(r[x], r[y]));
}
int main()
{
	scanf("%d %d %d", &n, &m, &s);
	for (int x, y, i = 1; i < n; i++)
		scanf("%d %d", &x, &y), add(x, y);
	
	dfs(s, 0);
	
	for (int j = 1; (1 << j) <= tot; j++)
	for (int i = 1 << j; i < (1 << j + 1) && i <= tot; i++)
		bin[i] = j;
	
	for (int i = 1; i <= tot; i++)
		st[i][0] = euler[i];
	
	for (int j = 1; (1 << j) <= tot; j++)
	for (int i = 1 << j; i <= tot; i++)
		st[i][j] = Min(st[i][j - 1], st[i - (1 << j - 1)][j - 1]);
		
	for (int x, y, i = 1; i <= m; i++)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", lca(x, y));
	}
	return 0;
}