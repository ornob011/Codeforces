#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int k, l, m, n, d, i, count=0;

	cin>>k>>l>>m>>n>>d;

	int arr[d+1];

	for(i=1; i<=d; i++)
		arr[i]=i;

	for(i=k; i<=d; i=i+k)
		arr[i]=-1;

	for(i=l; i<=d; i=i+l)
		arr[i]=-1;

	for(i=m; i<=d; i=i+m)
		arr[i]=-1;

	for(i=n; i<=d; i=i+n)
		arr[i]=-1;

	for(i=1; i<=d; i++)
	{
		if(arr[i]==-1)
			count++;
	}

	cout<<count<<endl;


	return 0;
}