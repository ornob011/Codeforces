#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
		
	string a, b, c, s;

	cin>>a>>b>>c;

	s=a+b;

	sort(s.begin(), s.end());
	sort(c.begin(), c.end());

	if(s==c)
		cout<<"YES"<<endl;

	else
		cout<<"NO"<<endl;
	return 0;
}