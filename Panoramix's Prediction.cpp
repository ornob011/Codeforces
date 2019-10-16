#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	if(n==0 || n==1)
		return false;

	if(!(n&1))
	{
		if(n==2)
			return true;
		else
			return false;
	}

	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}


int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, m, i, result;

	while(cin>>n>>m)
	{
		for(i=n+1; ;i++)
		{
			if(prime(i))
			{
				result=i;
				break;
			}
		}
		if(result==m)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}