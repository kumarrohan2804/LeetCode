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


int maxSumSubarray(vector<int> &A) {
	int cs = 0, ms = A[0];
	for (int i = 0; i < A.size(); i++) {
		cs = cs + A[i];
		ms = max(cs, ms);
		if (cs < 0) {
			cs = 0;
		}

	}
	return ms;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	int n;
	cout << "Enter the size of vec \n";
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	cout << maxSumSubarray(vec);

	return 0;


}
