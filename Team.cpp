#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, a, b, c, count=0;

	cin>>t;

	while(t--)
	{
		cin>>a>>b>>c;

		if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1))
			count++;
	}
	cout<<count<<endl;
	return 0;
}