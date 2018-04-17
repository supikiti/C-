#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[]) {

	string str1 = "hello";
	char str2[] = "hello";
	size_t size = end(str2) - begin(str2);


	cout << str1 << endl;
	cout << str2 << endl;

	cout << str1.length() << endl;
	cout << size << endl;


	return 0;
}
