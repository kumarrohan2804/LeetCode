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

int longestValidParentheses(string s) {
	string str = s;
	int n = str.length();
	stack<int> stk;
	stk.push(-1);
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '(')
			stk.push(i);
		else
		{
			if (!stk.empty())
			{
				stk.pop();
			}

			if (!stk.empty())
				result = max(result, i - stk.top());
			else
				stk.push(i);
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
	string s = "()(()";

	int result = longestValidParentheses(s);
	cout << result;
	return 0;

}

