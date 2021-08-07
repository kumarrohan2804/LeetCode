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


void signalCapacity(vector<int> &v) {
	vector<int> temp;
	stack<int> stack;
	int n = v.size();
	stack.push(0);
	temp.push_back(1);
	for (int i = 1; i < n; i++) {
		int count = 1;
		while (!stack.empty() && v[stack.top()] <= v[i]) {

			count = count + temp[stack.top()];
			stack.pop();
		}
		stack.push(i);
		temp.push_back(count);

	}
	for (int i = 0; i < n; i++) {
		cout << temp[i] << " ";
	}
	cout << "\n";
	return;

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
		int size;
		cin >> size;
		vector<int> input;
		int temp;
		for (int i = 0; i < size; i++) {
			cin >> temp;
			input.push_back(temp);
		}
		signalCapacity(input);
	}
	return 0;

}

