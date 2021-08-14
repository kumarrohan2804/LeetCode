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

// longest ones by flipping k no of zeroes
int longestOnes(vector<int>& A, int K) {
	int countZeroes = 0, start = 0;
	int maxLen = 0;
	for ( int end = 0 ; end < A.size() ; ++end ) {
		if ( A[ r ] == 0 ) ++countZeroes;
		while ( countZeroes > K ) {
			if ( A[ start ] == 0 ) {
				--countZeroes;
			}
			++l;
		}
		maxLen = max( maxLen, end - start + 1 );
	}
	return maxLen;
}


int main()
{
	// code here
	vector<int> vec = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
	int k = 2;
	int result = longestOnes(vec, k);
	cout << result << "\n";

	return 0;

}