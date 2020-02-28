#include<bits/stdc++.h>
using namespace std;

typedef long long LL ;

const int N = 2e5 + 100;

LL arr[N], pre[N];
LL nowi, nowans;
LL n;

void binary_search(LL given, LL amount)
{
    LL mid;
    LL low = given + 1, high = n;

    while(low <= high)
    {
        mid = (low + high)/2;
        LL sum = pre[mid] - pre[given];
        if(sum <= amount)
        {
            nowi = mid;
            nowans = sum;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
int main()
{
	// freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    LL q, i,j = 0, temp, t, k, ans = 0, x, y;

    cin>>n>>q;

    for(int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        pre[i] += pre[i - 1] + arr[i];
    }
    LL due = 0;
    LL ii = 0;

    while(q--)
    {
        cin>>x;
        y = x;
        x += due;
        nowi = ii;
        nowans = 0;
        binary_search(ii, x);

        if(nowi == n)
        {
            due = 0;
            ii = 0;
        }
        else{
            ii = nowi;
            due = x - nowans;
        }
        ans = n - ii;
       	cout<<ans<<endl;
    }
}