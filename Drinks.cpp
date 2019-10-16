#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n,i;

	double result=0, x;
	cin>>n;

	for(i=0; i<n; i++)
	{
		cin>>x;
		result=result+x/100;
	}
	
	result/=n;
	
	printf("%0.12lf", result*100);
	return 0;
}