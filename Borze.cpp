#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int i;
	string s;
	cin>>s;

	for(i=0; i<s.length(); i++)
	{
		if(s[i]=='-' && s[i+1]=='.')
		{
			printf("1");
			i++;
		}
		else if(s[i]=='-' && s[i+1]=='-')
		{
			printf("2");
			i++;
		}
		else if(s[i]=='.')
			printf("0");
	}
	cout<<endl;
	
	return 0;
}
