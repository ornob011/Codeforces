#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int length, t, i;
	string str;
	cin>>length>>t>>str;

	while(t--)
	{
		for(i=0; i<length; i++)
		{
			if(str[i]=='B' && str[i+1]=='G')
			{
				swap(str[i], str[i+1]);
				i++;
			}
		}
	}
	cout<<str<<endl;

	return 0;
}
