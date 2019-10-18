#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string str;
	cin>>str;

	int i, length;

	length=str.length();
	
	for(i=0; i<length; i++)
	{
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}