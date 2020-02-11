#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	ll n, l, r, i;
	cin>>n;

	ll arr[n];

	for(i=0; i<n; i++)
		cin>>arr[i];

	i=1;

	while(i<n && arr[i-1]<arr[i])
		i++;

	l=i;

	while(i<n && arr[i-1]>arr[i])
		i++;

	r=i;

	reverse(arr+l-1, arr+r);

	if(is_sorted(arr, arr+n))
		cout<<"yes"<<endl<<l<<' '<<r<<endl;

	else
		cout<<"no"<<endl;

	return 0;
}