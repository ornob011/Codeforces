#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	queue<int>x, y;

	int n, m, z, i, ans;
	cin>>n>>m;

	vector<int>v(n+10);

	for(i=1; i<=n; i++)
		cin>>v[i];

	for(i=1; i<=n; i++)
	{
		x.push(v[i]);
		y.push(i);
	}

	while(!x.empty())
	{
		if(x.front()<=m)
		{
			x.pop();
			y.pop();
		}
		else
		{
			x.push(x.front()-m);
			y.push(y.front());
			x.pop();
			y.pop();
		}
		ans=y.back();
	}

	cout<<ans<<endl;


	return 0;
}