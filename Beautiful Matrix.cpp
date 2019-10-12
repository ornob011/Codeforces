#include<bits/stdc++.h>
using namespace std;

int coun=0;
int arr[6][6];
void solve(int i, int j)
{
	coun++;

	if(i<3 && j<3)
		solve(i, j+1);

	if(i<3 && j==3)
		solve(i+1, j);

	if(i<3 && j>3)
		solve(i, j-1);

	if(i>3 && j<3)
		solve(i-1, j);

	if(i>3 && j==3)
		solve(i-1, j);

	if(i>3 && j>3)
		solve(i-1, j);

	if(i==3 && j<3)
		solve(i, j+1);

	if(i==3 && j>3)
		solve(i, j-1);

	if(i==3 && j==3)
		return;

}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int i, j, row, column;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			cin>>arr[i][j];
		}
	}

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(arr[i][j]==1)
			{
				row=i;
				column=j;
				break;
			}
		}
	}
	solve(row, column);
	cout<<coun-1<<endl;

	
	return 0;
}
