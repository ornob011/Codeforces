#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	long x;
	cin>>x;

	int ans=0;

	while(x>0)
	{
		ans=ans+x%2;
		x=x/2;
	}

	cout<<ans<<endl;
	return 0;
}