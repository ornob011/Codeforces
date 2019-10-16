#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string str;
	cin>>str;

	int i;

	if(str[0]>='a' && str[0]<='z')
		str[0]=str[0]-32;
	
	cout<<str<<endl;

	
	return 0;
}
