#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int i, count=1;
	int arr[4];

	for(i=0; i<4; i++)
		cin>>arr[i];
	
	sort(arr, arr+4);
	
	for(i=0; i<3; i++)
	{
		if(arr[i]!=arr[i+1])
			count++;
	}

	cout<<4-count<<endl;

	return 0;
} 
