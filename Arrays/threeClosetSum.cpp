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

int threeSumClosest(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int p1, p2, temp, sum = nums[0] + nums[1] + nums[2];
	for (int i = 0; i < nums.size(); i++) {
		p1 = i + 1;
		p2 = nums.size() - 1;
		while (p1 < p2) {
			temp = nums[i] + nums[p1] + nums[p2];
			if (abs(target - sum) > abs(target - temp)) {
				sum = temp;
				p1++;
			}
			if (temp > target) {
				p2--;
			}
			else if (temp < target) {
				p1++;
			} else {
				return target;
			}

		}
	}
	return sum;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	vi vec1 = { 1, 1, 1, 1 };

	int result = threeSumClosest(vec1, 0);
	cout << result << "\n";
	return 0;

}