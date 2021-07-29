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


vector<vector<int>> fourSum(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int n = nums.size();
	int p1, p2;
	vector<vector<int>> result;
	for (int i = 0; i < n - 3; i++) {
		for (int j = i + 1; j < n - 2; j++) {
			p1 = j + 1;
			p2 = n - 1;
			while (p1 < p2) {
				int temp = nums[i] + nums[j] + nums[p1] + nums[p2];
				if (temp == target) {
					result.push_back({nums[i], nums[j], nums[p1], nums[p2]});
					p1++;
				} else if (temp > target) {
					p2--;
				} else {
					p1++;
				}
			}
		}
	}
	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end());
	return result;
}



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	vi vec1 = { 2, 2, 2, 2, 2 };

	vector<vector<int>> result = fourSum(vec1, 8);
	for (auto &vec : result) {
		for (auto i : vec) {
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;

}