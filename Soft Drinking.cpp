#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, k, l, c, d, p, nl, np;

	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int x, y, z;

	vector<int>a;

	a.push_back((k*l)/nl);
	a.push_back(c*d);
	a.push_back(p/np);

	cout<<*min_element(a.begin(), a.end())/n<<endl;
	return 0;
}