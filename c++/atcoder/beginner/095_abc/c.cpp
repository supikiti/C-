#include<iostream>
#include <cassert>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int a, b, c, x, y;
	int t = 0;
	int count = 0;


	cin >> a >> b >> c >> x >> y;
	t = std::min(x, y);
	if ((a + b) <= 2 * c){
		count += a * x + b * y;
	}
	else{
		if ((x - y) > 0){
			if ((x - y) * a < (x - y) * c * 2){
				count += 2 * c * t;
				count += a * (x - y);
			}
			else {
				count += 2 * c * t;
				count += 2 * c * (x - y);
			}
		}
		else if ((x - y) < 0){
			count += 2 * c * t;
			if ((y - x) * b < (y - x) * c * 2) count += b * (y - x);
			else count += 2 * c * (y - x);
		}
		else count += 2 * c * t;
	}
	cout << count << endl;
	return 0;
}
