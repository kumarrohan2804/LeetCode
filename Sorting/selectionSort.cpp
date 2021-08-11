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


void selectionSort(vector<int> &a) {
	int n = a.size();
	for (int pos = 0; pos < n - 1; pos++) {
		int current = a[pos];
		int min_index = pos;
		for (int j = pos; j < n; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		swap(a[pos], a[min_index]);

	}
	return ;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	selectionSort(vec);
	cout << "The sorted array is \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}
	return 0;
}