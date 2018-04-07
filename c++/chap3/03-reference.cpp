#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a=10;
	int* pa = &a;
	int** ppa = &pa;
	cout << **ppa << endl;
	cout << ppa << endl;
	cout << pa << endl;
	cout << *ppa << endl;
	cout << *pa << endl;
}
