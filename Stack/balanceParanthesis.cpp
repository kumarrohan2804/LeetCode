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


bool isValid(string s) {
	stack<char> stack;
	int n = s.size();
	char temp;
	for (int i = 0; i < n; i++) {
		if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
			stack.push(s[i]);

		} else {
			if (stack.size() == 0) {
				return false;
			}
			temp = stack.top();
			if (s[i] == '}' && temp != '{') {
				return false;
			} else if (s[i] == ']' && temp != '[') {
				return false;
			} else if (s[i] == ')' && temp != '(') {
				return false;
			} else {
				stack.pop();
			}
		}

	}
	if (stack.size() == 0) {
		return true;
	} else {
		return false;
	}
}



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	string s = "{{({";

	bool result = isValid(s);
	cout << result;
	return 0;

}