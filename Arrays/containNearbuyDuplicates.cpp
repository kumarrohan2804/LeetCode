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

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	int n = nums.size(), diff;
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++) {
		if (map.find(nums[i]) == map.end()) {
			map[nums[i]] = i;
		} else {
			auto itr = map.find(nums[i]);
			diff = abs(i - itr->second);
			if (diff <= k) {
				return true;
			} else
			{
				itr->second = i;
			}
		}
	}
	return false;
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
		vector<int> vec;

		cin >> s;
		bool result = lengthOfLongestSubstring(s);
		result ? cout << "true\n" : cout << "false\n";
	}
	return 0;
}

