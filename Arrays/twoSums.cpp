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
#define ui_map unordered_map<int, int>


vi twoSum(vi &num, int k) {
	ui_map map;
	vi result;
	for (long unsigned int i = 0; i < num.size(); i++) {
		if (map.find(num[i]) != map.end()) {
			result.PB(map[num[i]]);
			result.PB(i);
		} else {
			map[k - num[i]] = i;
		}
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
	vi vec;
	int k;
	for (auto i = 0; i < 4; i++) {
		int temp;
		cin >> temp;
		vec.PB(temp);
	}
	cin >> k;
	vi result = twoSum(vec, k);
	cout << result[0] << " " << result[1];
	return 0;

}