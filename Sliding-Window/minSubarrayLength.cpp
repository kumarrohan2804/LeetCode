#include<bits/stdc++.h>
using namespace std;
#define REP_F(i,a,b)   for (int i = a; i < b; ++i)
#define REP_B(i,b,a)   for (int i = b; i > a; --i)
#define b  begin
#define e  end
#define ITER(it,v)     for(auto it=v.b(); it!=v.e(); it++)
#define PB    push_back
#define el   endl
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define mod 1000000007
#define f first
#define s second
#define MP make_pair


int minSubArrayLen(int target, vector<int>& nums) {
	int start = 0, n = nums.size(), minSub = INT_MAX;
	int current = 0;
	for (int end = 0; end < n; end++) {
		current += nums[end];
		while (current >= target) {
			minSub = min(minSub, end - start + 1);
			current -= nums[start];
			start++;
		}
	}
	return minSub != INT_MAX ? minSub : 0;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		int k;
		cin >> k;
		int result = minSubArrayLen(k, vec);
		cout << result << "\n";
		return 0;
	}

}