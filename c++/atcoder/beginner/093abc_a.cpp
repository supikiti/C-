#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char S[3];
	cin >> S[0] >> S[1] >> S[2];
	int count = 0;
	for (int i = 0; i < 3; ++i){
		if (S[i]=='a')count++;
		else if (S[i]=='b')count += 2;
		else count += 3;
	}
	if (count == 6) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
