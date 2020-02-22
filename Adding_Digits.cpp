#include<bits/stdc++.h>
using namespace std;

int main()
{   
	// freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int a, b, n;
	cin>>a>>b>>n;

	int temp;

	bool flag=false;
	for(int i=0; i<10; i++)
	{
		temp=a*10+i;

		if(temp%b==0)
		{
			flag=true;
			break;
		}
	}
	
	if(!flag)
		cout<<-1<<endl;

	else
	{
		cout<<temp;
		for(int i=0; i<n-1; i++)
			cout<<0;
	}
	cout<<endl;

	return 0;
}