#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		int sum=a+b+c;
		count=sum;

		while((b>=1 && c>=2))
		{
			b--;
			c=c-2;
			count=count-1-2;
		}

		while((a>=1 && b>=2))

		{
			a--;
			b=b-2;
			count=count-1-2;
		}

		cout<<sum-count<<endl;
	}
	return 0;
}