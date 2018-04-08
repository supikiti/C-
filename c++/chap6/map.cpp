#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[]) {
	unordered_map<string, int> dictionary{ {"one", 0},{"two", 2},{"three", 3} };
	cout << dictionary["two"] << endl;

	return 0;
}
