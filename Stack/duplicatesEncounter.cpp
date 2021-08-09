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

void duplicate(string &s) {
	stack<char> stack;
	string temp;
	char ch;
	int n = s.size();
	stack.push(s[0]);
	for (int i = 1; i < n; i++) {
		ch = '0';
		while (!stack.empty() && s[i] == stack.top()) {
			ch = stack.top();
			stack.pop();
		}
		if (ch != s[i])stack.push(s[i]);
	}
	while (!stack.empty()) {
		temp = stack.top() + temp;
		stack.pop();
	}
	int n2 = temp.size();
	if (n2 > 0) {
		for (int i = 0; i < n2; i++) {
			cout << temp[i];
		}
	} else {
		cout << "Empty String"
	}

	return;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	// int T;
	// cin >> T;
	// while (T--) {

	string s;
	cin >> s;
	duplicate(s);

	return 0;
}