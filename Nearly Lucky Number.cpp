#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string str;

	cin>>str;

	int result=count(str.begin(), str.end(), '4')+count(str.begin(), str.end(), '7');

	if(result==4 || result==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
	return 0;
}