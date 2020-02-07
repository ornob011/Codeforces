#include<bits/stdc++.h>
using namespace std;

int main()
{   
    //freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	//freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int i, n, m, q;
	cin>>n>>m;

	vector<int>vec(n), result(n);
	set<int>s;

	for(i=0; i<n; i++)
		cin>>vec[i];

	for(i=n-1; i>=0; i--)
	{
		s.insert(vec[i]);
		result[i]=s.size();
	}

	while(m--)
	{
		cin>>q;
		cout<<result[q-1]<<endl;
	}


	return 0;
}