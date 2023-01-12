#include <bits/stdc++.h>
using namespace std;

// using ll = long long;

#define     int              long long

#define     fr(i,a,b)      for(int i=a;i<b;i++)

#define     rep(i,a,b)      for(int i=a;i>=b;i--)

#define     t()             int test;cin>>test;while(test--)

#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #define     mod             1000000007

#define     f               first

#define     sec             second

#define    mapii            std::map<int,int> map;

#define    mp               make_pair

#define  pb            push_back


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 	

	IOS;
	t()
	{
		int row,col;
		cin>>row>>col;
		int diff = 0;
		if(row > col)
			diff = row-col;

		int maxm = max(row,col);
		int ans = 0;
		if(maxm%2 != 0)
		{
			ans = maxm*maxm;
			ans -= (row+diff);
			ans++;
		}
		else
		{
			ans = (maxm-1)*(maxm-1)+1;
			ans += (row+diff);
			ans -= 1;
		}

		cout<<ans<<endl;

	}


}  








