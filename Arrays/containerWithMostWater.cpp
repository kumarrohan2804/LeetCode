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


int maxArea(vector<int>& height) {
	long unsigned int p1 = 0, p2 = height.size() - 1;
	int area = 0;
	while (p1 < p2) {
		int min_height = min(height[p1], height[p2]);
		area = min_height * (p2 - p1) > area ? min_height * (p2 - p1) : area;
		if (height[p1] > height[p2]) {
			p2--;
		} else {
			p1++;
		}
	}
	return area;
}

int main()
{
	vi vec1 = {1, 2, 1};

	int result = maxArea(vec1);
	cout << result;
	return 0;

}