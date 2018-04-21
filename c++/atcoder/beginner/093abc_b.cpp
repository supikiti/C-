#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a, b, k;
	cin >> a >> b >> k;

	if (b + 1 - a >= 2 * k){
		for (int i=0; i < k; ++i){
			cout << a + i << endl;
		}
		for (int i=0; i < k; ++i){
			cout << b - i << endl;
		}
	}else{
		for (int i=0; i < k; ++i){
			cout << a + i << endl;
		}
	}

	return 0;
}
