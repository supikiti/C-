#include<iostream>
using namespace std;

void f(int* x, size_t size){
	for (size_t i=0; i<size; ++i){
		cout << x[i] << ", ";
	}
	cout << endl;
}
int main(int argc, char const *argv[]) {
	int a[] = {2, 3, 5, 7, 11};
	size_t size = end(a) - begin(a);
	f(a, size);

	return 0;
}
