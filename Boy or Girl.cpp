#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	string str;
	int i, len;

	set<char>s;
	cin>>str;

	len=str.length();

	for(i=0; i<len; i++)
		s.insert(str[i]);

	if(s.size() & 1)
		cout<<"IGNORE HIM!"<<endl;

	else
		cout<<"CHAT WITH HER!"<<endl;

	return 0;
}