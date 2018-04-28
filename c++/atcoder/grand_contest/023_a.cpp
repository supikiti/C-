#include <bits/stdc++.h>
#include <assert.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define PB push_back
#define MP make_pair
#define MOD 1000000007LL
#define endl "\n"
#define fst first
#define snd second
const ll UNDEF = -1;
const ll INF=1e18;
template<typename T> inline bool chkmax(T &aa, T bb) { return aa < bb ? aa = bb, true : false; }
template<typename T> inline bool chkmin(T &aa, T bb) { return aa > bb ? aa = bb, true : false; }
typedef pair<ll,ll> pll;
typedef vector<ll> vll;

const int mn=2000000+2000+1;
bitset<mn> b;
void solve(int n, vector<int> a){
	b[0]=1;
	int sum=0;
	for (auto &w:a) {
		sum+=w;
		b|=(b<<w);
	}
	cout << b << endl;
	cout << sum << endl;
	int mid=(sum+1)/2;
	int count = 0;

	int ans=(mid==0)?b._Find_first():b._Find_next(mid-1);
	printf("%d\n",ans);
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N;
	scanf("%d",&N);
	vector<int> A(N-1+1);
	for(int i = 0 ; i <= N-1 ; i++){
		scanf("%d",&A[i]);
	}
	solve(N, A);
	return 0;
}
