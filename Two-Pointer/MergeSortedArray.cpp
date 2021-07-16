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



int main()
{
	// code here

	int m, n;
	cin >> m >> n;
	vi a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	vi b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	vi res(m + n, 0);
	int i = 0, j = 0, k = 0;
	while (i < m || j < n) {
		if (j == n || ( i < m && a[i] < b[j])) {
			res[k++] = (a[i]);
			i++;
		} else {
			res[k++] = (b[j]);
			j++;
		}
	}
	for (i = 0; i < (m + n); i++) {
		cout << res[i] << " ";
	}
	cout << "\n";
	return 0;

}