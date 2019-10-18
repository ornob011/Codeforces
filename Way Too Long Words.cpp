#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, i, len;
	string str;

	cin>>t;

	while(t--)
	{
		cin>>str;

		len=str.length();

		if(len>10)
			printf("%c%d%c\n", str[0], len-2, str[len-1]);

		else
			cout<<str<<endl;

	}
	return 0;
}