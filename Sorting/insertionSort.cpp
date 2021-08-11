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

void insertionSort(vector<int> &a) {
	int n = a.size();
	for (int i = 1; i < n; i++) {
		int current = a[i];
		int prev = i - 1;
		while (prev >= 0 && a[prev] > current) {
			a[prev + 1] = a[prev];
			prev = prev - 1;
		}
		a[prev + 1] = current;
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
	insertionSort(vec);
	cout << "The sorted array is \n";
	for (int i = 0; i < n; i++) {
		cout << vec[i] << " ";
	}
	return 0;
}
