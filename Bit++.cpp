#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int count=0;

	string str;

	int t;

	cin>>t;
	while(t--)
	{
		cin>>str;

		if((str=="X++") || (str=="++X"))
			count++;
		else
			count--;
	}
	cout<<count<<endl;

	return 0;
}