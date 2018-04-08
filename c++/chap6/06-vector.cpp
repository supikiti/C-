#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
	vector<int> v1;
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);

	vector<int> v2(4);
	v2[0] = 2;
	v2[1] = 3;
	v2[2] = 5;
	v2[3] = 7;

	cout << (v1 == v2 ? "等しい" : "等しくない") << endl;

	for (int i=0; i<4; ++i) cout << v1[i] << endl;
	cout << endl;

	size_t s = v2.size();
	cout << s << endl;
	for (size_t i = 0; i < s; ++i) cout << v2[i] << ", ";
	cout << endl;

	for (auto x : v2) cout << x << ", ";
	cout << endl;

	for (auto& x : v2) ++x;

	for (auto x: v2) cout << x << ", ";
	cout << endl;

	return 0;
}
