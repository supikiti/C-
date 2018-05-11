#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, k;
	int sum;
	int l[55];
	cin >> n >> k;
	for (int i=0; i<n; ++i) cin >> l[i];
	sort(l, l+n, greater<int>());
	for (int i=0; i<k; ++i) sum+=l[i];
	cout << sum << endl;
	return 0;
}
