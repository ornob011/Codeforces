#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int len, i, value, size;
	string str;

	while(cin>>str)
	{
		len=str.length();

		vector<int> v;

		for(i=0; i<len; i++)
		{
			if(str[i]=='+')
				continue;

			value=str[i]-'0';
			v.push_back(value);
		}

		sort(v.begin(), v.end());

		size=v.size();

		for(i=0; i<size; i++)
		{
			if(i==size-1)
				cout<<v[i]<<endl;
			else
				cout<<v[i]<<"+";
		}
	}
	return 0;
}