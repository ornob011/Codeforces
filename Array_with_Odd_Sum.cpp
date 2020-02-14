#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int x;

		bool ok=false;
		int odd=0;

		for(int i=0; i<n; i++)
		{
			cin>>x;
			if(x&1)
				odd++;
			else
				ok=true;
		}
		if((odd & 1) || (ok==true && odd>0))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}