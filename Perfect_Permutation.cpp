#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, i;

	cin>>n;

	if(n&1)
	{
		cout<<-1;
		return 0;
	}
	else
	{
		for(i=1; i<=n; i++)
		{
			if(i&1)
				cout<<i+1<<" ";
			else
				cout<<i-1<<" ";
		}
		cout<<endl;
	}
	return 0;
}