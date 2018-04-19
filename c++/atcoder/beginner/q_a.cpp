#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a,b,x;
	cin >> a >> b >> x;
	if (((a + b) < x)| (a > x)){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	return 0;
}
