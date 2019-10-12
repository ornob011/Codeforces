#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, x, sum[3], i, y,z;
	cin>>n;

	memset(sum, 0, sizeof(sum));
	for(i=0; i<n; i++)
	{
		cin>>x>>y>>z;
		sum[0]=sum[0]+x;
		sum[1]=sum[1]+y;
		sum[2]=sum[2]+z;
	}
	if(sum[0]==0 && sum[1]==0 && sum[2]==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
