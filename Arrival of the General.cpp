#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, i, maxn, minn, max_i, min_i;

	cin>>size;

	int arr[size];

	for(i=0; i<size; i++)
		cin>>arr[i];

	int count=0;

	maxn=arr[0];
	minn=arr[0];
	min_i=0;
	max_i=0;

	for(i=0; i<size; i++)
	{
		if(arr[i]>maxn)
		{
			maxn=arr[i];
			max_i=i;
		}

		if(arr[i]<=minn)
		{
			minn=arr[i];
			min_i=i;
		}
	}
	
	
	if(max_i>min_i)
	min_i++;

	cout<<max_i+size-min_i-1;

	return 0;
}