#include<iostream>
using namespace std;

int main() {
	int n,m,x,a[100],i;
	cin >> n >> m >> x;
	int count;
	for(int i=0; i < m; ++i){
		cin >> a[i];
		if (a[i] < x) count++;
	}
	if (count > m-count) cout << (m-count) << endl;
	else cout << count << endl;
	return 0;
}
