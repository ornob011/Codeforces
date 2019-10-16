#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string str;
	cin>>str;

	int i, lowcount=0, upcount=0;

	for(i=0; i<str.length(); i++)
	{
		if(isupper(str[i]))
			upcount++;
		else
			lowcount++;
	}
	if(upcount>lowcount)
	{
		for(i=0; i<str.length(); i++)
			str[i]=toupper(str[i]);
	}
	else if(lowcount>upcount)
	{
		for(i=0; i<str.length(); i++)
			str[i]=tolower(str[i]);
	}

	else
	{
		for(i=0; i<str.length(); i++)
			str[i]=tolower(str[i]);
	}


	cout<<str<<endl;

	
	return 0;
}
