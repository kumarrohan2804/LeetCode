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


bool sideLane(vector<int> &v) {
	stack<int> stack;
	vector<int> temp;
	bool sorted = true;
	int n = v.size();
	stack.push(v[0]);
	for (int i = 1; i < n; i++) {
		while (!stack.empty() && v[i] > stack.top()) {
			temp.push_back(stack.top());
			stack.pop();
		}
		stack.push(v[i]);
	}
	while (!stack.empty()) {
		temp.push_back(stack.top());
		stack.pop();
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (v[i] != temp[i]) {
			sorted = false;
			break;
		}
	}
	return sorted;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	while (true) {

		int n, temp;
		cin >> n;
		if (n != 0) {
			vector<int> vec;
			for (int i = 0; i < n; i++) {
				cin >> temp;
				vec.push_back(temp);
			}

			bool result = sideLane(vec);
			if (result) {
				cout << "yes\n";
			} else {
				cout << "no\n";
			}
			continue;
		} else {
			break;

		}
		return 0;
	}

}