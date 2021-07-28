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
#define ui_map unordered_map<int, int>


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

	vector<int>	sorted_arr ;
	long unsigned int p1 = 0, p2 = 0;
	long unsigned int mid;
	double median;
	while (p1 < nums1.size() || p2 < nums2.size()) {
		if (p2 == nums2.size() || (p1 != nums1.size() && nums1[p1] < nums2[p2])) {
			sorted_arr.push_back(nums1[p1]);
			p1++;
		} else {
			sorted_arr.push_back(nums2[p2]);
			p2++;
		}
	}
	mid = (sorted_arr.size()) / 2;
	if ((sorted_arr.size()) % 2 != 0) {
		median = sorted_arr[mid];
	} else {
		median = double(sorted_arr[mid] + sorted_arr[mid - 1]) / (double)2;
	}

	return median;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// code here
	vi vec1 = {1, 2, 6}, vec2 = {3, 4, 5};

	double result = findMedianSortedArrays(vec1, vec2);
	cout << result;
	return 0;

}



int main()
{
	// code here


	return 0;

}