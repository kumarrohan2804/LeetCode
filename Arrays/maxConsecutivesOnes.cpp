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

int findMaxConsecutiveOnes(vector<int>& nums) {
	int count = 0;
	int maxCount = 0;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 1) {
			count = 0;
		}

		else {
			count++;
		}

		maxCount = max(maxCount, count);
	}

	return maxCount;

}