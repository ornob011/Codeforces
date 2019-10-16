#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	string a, b;
	cin>>a>>b;

	int len=a.length();

	for(int i=0; i<len; i++)
	{
		if(a[i]=='0'&&b[i]=='0')
			a[i]='0';
		
		else if(a[i]=='0'&&b[i]=='1')
			a[i]='1';
	
		else if(a[i]=='1'&&b[i]=='0')
			a[i]='1';
		
		else if(a[i]=='1'&&b[i]=='1')
			a[i]='0';
	}
	cout<<a<<endl;
	return 0;
}