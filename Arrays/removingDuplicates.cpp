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


int removeDuplicates(vector<int>& nums) {
	int n = nums.size();
	if (n < 2) return n;

	int id = 1;
	for (int i = 1; i < n; ++i)
		if (nums[i] != nums[i - 1]) nums[id++] = nums[i];
	return id;
}



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	vi vec1 = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

	int result = removeDuplicates(vec1);
	cout << result;
	return 0;

}
