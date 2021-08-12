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

int lengthOfLongestSubstring(string s) {
	set<char> unique;
	int n = s.size(), windowStart = 0, maxLength = 0;
	for (int windowEnd = 0; windowEnd < n; windowEnd++) {
		while (unique.find(s[windowEnd]) != unique.end()) {
			unique.erase(s[windowStart]);
			windowStart++;
		}
		unique.insert(s[windowEnd]);
		int size = unique.size();
		maxLength = max(maxLength, size);
	}
	return maxLength;
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
		string s;
		cin >> s;
		int result = lengthOfLongestSubstring(s);
		cout << result << "\n";
	}
	return 0;
}