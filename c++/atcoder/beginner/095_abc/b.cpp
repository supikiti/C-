#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, x;
	int m[n];
	int min = 0;

	int count = 0;
	cin >> n >> x;
	for (int i = 0; i < n; ++i){
		cin >> m[i];
		x -= m[i];
	}
	min = m[0];
	for (int i = 0; i < n; ++i){
		if (min > m[i]) min = m[i];
	}
	count = x / min;
	cout << count + n << endl;




	return 0;
}
