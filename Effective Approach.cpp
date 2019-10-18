#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
		
	int size, i, m, x;
	cin>>size;

	int arr[100001];

	for(int i=1; i<=size; i++)
	{
		cin>>x;
		arr[x]=i;
	}

	cin>>m;

	long long countV=0, countP=0;
	while(m--)
	{
		cin>>x;

		countV=countV+arr[x];

		countP=countP+(size+1-arr[x]);
	}
	cout<<countV<<" "<<countP<<endl;

	return 0;
}