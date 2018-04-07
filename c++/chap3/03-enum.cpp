#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	enum class choice1 {rock, scissors, paper};

	choice1 x = choice1::rock;
	cout << (x == choice1::rock ? "グー" : "グー以外") << endl;
	return 0;
}
