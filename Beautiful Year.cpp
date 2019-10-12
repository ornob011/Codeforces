#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int y, flag, temp;
	cin>>y;

	temp=y;
	while(1)
	{
		++temp;

		string str=to_string(temp);

		flag=1;

		sort(str.begin(), str.end());
		
		for(int i=0; i<str.length()-1; i++)
		{
			if(str[i]==str[i+1])
			{
				flag=0;
				break;

			}
		}
		if(flag==1)
		{
			cout<<temp<<endl;
			break;
		}
	}	
	return 0;
}
