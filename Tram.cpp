#include<bits/stdc++.h>
using namespace std;

#define x 1000
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, exit, enter, minn=0, current=0;

	cin>>n;

	while(n--)
	{
		cin>>exit>>enter;
		current=enter+current-exit;
		
		if(current>minn)
			minn=current;
	}
	cout<<minn<<endl;
	return 0;
}