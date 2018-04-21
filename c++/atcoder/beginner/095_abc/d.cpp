#include<iostream>
using namespace std;

int main() {
	int n, c;
	int x[n], v[n];
	int cal[n];

	cin >> n >> c;
	for (int i = 0; i < n; ++i){
		cin >> x[i] >> v[i];
	}
	for (int i = 0; i < n; ++i){
		if (x[i] <= v[i]){
			cal[n] = v[i] - x[i];
		}
		else cal[n] = cal[n-1]
	}
	return 0;
}
