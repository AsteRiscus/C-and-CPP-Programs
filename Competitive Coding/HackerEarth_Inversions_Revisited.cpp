/*~~~~~~~~~~~~~~~~~~*
*                  *
* $Dollar Akshay$  *
*                  *
*~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/problem/algorithm/inversions-revisited/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };

int a[200000], b[200000];

int num[1000001];

int main(){

	int n, ans = 0;
	scanf("%d", &n);
	REP(i, n) scanf("%d", &a[i]);

	scanf("%d", &b[0]);

	FOR(j, 1, n - 1){
		scanf("%d", &b[j]);
		FOR(i, 0, a[j - 1] - 1)
			num[i]++;
		ans += num[b[j]];
	}
	assert(ans <= 1000000000);
	printf("%d", ans);
	return 0;
}

//Partially Solved ~ TLE