#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int page, i, t;
    cin>>page;

    vector<int>days(10);

    for(i=1; i<=7; i++)
        cin>>days[i];

    t=8;

    while(page>0)
    {
        t=(t%8)+1;
        page=page-days[t];
    }

    cout<<t<<endl;
    return 0;
}