#include<iostream>
#include<vector>
#include<list>
#include<numeric>
using namespace std;

int main() {
	vector<int> v{ 1, 2, 3, 4, 5 };

	for (auto i = v.cbegin(); i != v.end(); ++i){
		cout << *i << ", ";
	}
	cout << endl;

	for (auto i = v.begin(); i != v.end(); ++i){
		*i *= 10;
		cout << *i << ", ";
	}
	cout << endl;

	for (auto i = v.crbegin(); i != v.crend(); ++i){
		cout << *i << ", ";
	}
	cout << endl;





	return 0;
}
