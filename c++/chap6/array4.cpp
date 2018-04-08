#include<iostream>
using namespace std;

void f(int* first, int* last){
	for (int* p = first; p != last; ++p){
		cout << *p << ", ";
	}
	cout << *last << endl;
	cout << endl;
}

int main(int argc, char const *argv[]) {
	int a[] = {2, 3, 5, 7, 11};
	f(begin(a), end(a));
	return 0;
}
