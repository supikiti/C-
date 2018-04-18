#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]) {
	vector<int> vec(5);

	vec[2] = 102;
	vec.at(1) = 101;

	int *p = &vec[0];
	*p = 100;
	*(p + 3) = 103;

	auto it = vec.begin();
	*(it + 4) = 104;

	for (auto i = vec.begin(); i != vec.end(); ++i){
		cout << *i << ", ";
	}
	cout << endl;

	cout << vec[3] << endl;
	cout << *p << endl;
	*(p + 3) = 10000;
	cout << vec[3] << endl;

	return 0;
}
