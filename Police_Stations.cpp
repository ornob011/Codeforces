
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > pii;
const int N = 1e6 + 77;
const int MOD = 1e9 + 7;
int n,k,d,t,dis[N],x,y,par[N];
deque < int > dq;
vector < int > res;
vector < pair < int , int > > a[N];
bool mark[N];

int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k >> d;
	d = 0 ;
	for(int i = 1;i <= n;i++)
		dis[i] = MOD;
	for(int i = 1;i <= k;i++)
	{
		cin >> t;
		dq.push_back(t);
		dis[t] = 0;
	}
	for(int i = 1;i < n;i++)
	{
		int x,y;
		cin >> x >> y;
		a[x].push_back(make_pair(y,i));
		a[y].push_back(make_pair(x,i));
		mark[i] = true;
	}
	while(dq.size())
	{
		int v = dq.front();
		dq.pop_front();
		for(auto z : a[v])
		{
			int u = z.first;
			if(dis[u] > dis[v] + 1)
			{
				dis[u] = dis[v] + 1;
				dq.push_back(u);
				mark[z.second] = false;
			}
		}
	}
	for(int i = 0;i < N;i++)
		if(mark[i])
			res.push_back(i);
		cout << res.size() << '\n';
		for(auto i : res)
			cout << i << ' ';

		return 0; 
	}