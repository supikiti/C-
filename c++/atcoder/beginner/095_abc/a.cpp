#include<iostream>
using namespace std;

int main() {
	char S[3];
	cin >> S[0] >> S[1] >> S[2];

	int count = 700;
	for (int i = 0; i < 3; ++i){
		if (S[i] == 'o') count += 100;
	}
	cout << count << endl;
	return 0;
}
