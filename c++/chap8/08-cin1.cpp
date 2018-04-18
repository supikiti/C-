#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]) {
	cout << "文字列を文字列を入力して、Enterキーを押してください。\n";
	string str;
	cin >> str;
	cout << "入力された文字列は「" << str << "」です。\n";

	return 0;
}
