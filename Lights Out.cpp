#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int light[3][3], sol[3][3], i, j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>light[i][j];
			sol[i][j]=1;
		}
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(light[i][j]==0)
				continue;

			if(light[i][j]%2==0)
				continue;

			else
			{
				sol[i][j]=1-sol[i][j];

				if(i+1<3)
					sol[i+1][j]=1-sol[i+1][j];

				if(j+1<3)
					sol[i][j+1]=1-sol[i][j+1];

				if(i-1>=0)
					sol[i-1][j]=1-sol[i-1][j];

				if(j-1>=0)
					sol[i][j-1]=1-sol[i][j-1];
			}
		}
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<sol[i][j];
		}
		cout<<endl;
	}
	cout<<endl;


	return 0;
}
