#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	long long n;
	cin>>n;

	vector<vector<long long> >dis(n+1, vector<long long>(n+1, 0));
	vector<bool>put(n+1);
	vector<long long>ans(n+1);
	vector<long long>a(n+1);

	long i, j, k, test;

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
			cin>>dis[i][j];
	}

	for(i=1; i<=n; i++)
		cin>>a[i];

	for(i=n; i>=1; i--)
	{
		put[a[i]]=1;
		for(j=1; j<=n; j++)
		{
			for(k=1; k<=n; k++)
			{
				dis[j][k]=min(dis[j][a[i]]+dis[a[i]][k], dis[j][k]);

				if(put[j] && put[k])
					ans[i]+=dis[j][k];
			}
		}
	}

	for(i=1; i<=n; i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}