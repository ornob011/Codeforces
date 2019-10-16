#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, points;

	cin>>n>>points;

	int maxn=points, minn=points, amazing=0;

	while(n--)
	{
		cin>>points;
		if(points>maxn)
		{
			maxn=points;
			amazing++;
		}
		if(points<minn)
		{
			minn=points;
			amazing++;
		}
	}
	cout<<amazing<<endl;
	return 0;
}