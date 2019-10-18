#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	string a, b;
	cin>>a>>b;

	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);

	if(a<b)
		cout<<-1<<endl;

	else if(a>b)
		cout<<1<<endl;

	else
		cout<<0<<endl;
	return 0;
}