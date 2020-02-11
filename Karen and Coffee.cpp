#include <bits/stdc++.h>
using namespace std;

long long a[200002],b[200002], c,d,i,n,m,j,q;

int main()
{

 //    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	 
	cin>>n>>m>>q;

	for(i=1;i<=n;i++)
	{
		cin>>c>>d;
		a[c]++;
		a[d+1]--;
	}
	for(i=1; i<=200002; i++)
		a[i]+=a[i-1];

	for(i=1; i<=200002; i++)
	{
		if(a[i]>=m)
			j++;
		b[i]=j;
	}
	for(i=1; i<=q; i++)
	{
		cin>>c>>d;
		cout<<b[d]-b[c-1]<<endl;
	}
	return 0;
}
