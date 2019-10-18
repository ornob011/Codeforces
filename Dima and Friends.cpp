#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int  n, t, fingers, sum=0, i, count=0;

	cin>>t;
	n=t;

	while(t--)
	{
		cin>>fingers;
		sum=sum+fingers;
	}

	for(i=1; i<=5; i++)
	{
		if((sum+i)%(n+1)!=1)
			count++;
	}

	cout<<count<<endl;
	return 0;
}