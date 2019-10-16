#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, l,r, i;
	cin>>size;

	int left[size];
	int right[size];

	memset(left, 0, sizeof(left));
	memset(right, 0, sizeof(right));

	for(i=0; i<size; i++)
	{
		cin>>l>>r;

		left[l]++;
		right[r]++;
	}

	cout<<min(left[0], left[1])+min(right[0], right[1]);
	return 0;
}