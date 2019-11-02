#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t;
	map<string, int>m;
	string str;

	cin>>t;

	while(t--)
	{
		cin>>str;

		if(m[str]==0)
			cout<<"OK"<<endl;
		else
			cout<<str<<m[str]<<endl;

		m[str]++;

	}
	return 0;
}