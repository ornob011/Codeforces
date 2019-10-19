#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, i, j, count=0;
	cin>>n;

	vector<int>x(n), y(n);

	for(i=0; i<n; i++)
		cin>>x[i]>>y[i];
	
	for(i=0; i<n; i++)
	{
		bool r=false, l=false, u=false, lo=false;
		for(j=0; j<n; j++)
		{
			if(x[j] > x[i] and y[j]==y[i])
				r=true;

			if(x[j] < x[i] and y[j]==y[i])
				l=true;

			if(x[j] == x[i] and y[j]<y[i])
				lo=true;

			if(x[j] == x[i] and y[j]>y[i])
				u=true;
		}
		if(r and l and u and lo)
			count++;
	}
	cout<<count<<endl;
	return 0;
}