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


vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int p1, p2;
	vector<vector<int>> result;
	if (nums.size() != 0 && nums[0] != nums[nums.size() - 1]) {
		for (int i = 0; i < nums.size() ; i++) {
			int req = nums[i];
			p1 = i + 1;
			p2 = nums.size() - 1;

			while (p1 < p2) {
				if (req + nums[p1] + nums[p2] == 0) {
					result.push_back({req , nums[p1] , nums[p2]});
					p1++;

				} else if (req + nums[p1] + nums[p2] < 0) {
					p1++;
				} else {
					p2--;
				}
			}

		}
		sort(result.begin(), result.end());
		result.erase(unique(result.begin(), result.end()), result.end());
		return result;
	}
	else if (nums.size() != 0 && nums[0] == 0 && nums[nums.size() - 1] == 0) {
		result.push_back({0, 0, 0});
	}
	return result;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	vi vec1 = { };

	vector<vector<int>> result = threeSum(vec1);
	for (const auto& v : result)
	{
		for (auto i : v)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;

}

