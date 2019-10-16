#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string str;
	int i, count=0, x;
	cin>>x;
	cin>>str;

	for(i=0; i<str.length()-1; i++)
	{
		if(str[i]==str[i+1])
			count++;
	}
	cout<<count<<endl;
	
	return 0;
}
