#include<iostream>
#include<bitset>
using namespace std;

const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000

int main() {
	unsigned int bit = BIT_FLAG_0 | BIT_FLAG_2 | BIT_FLAG_5;
	int bit_1 = (1<<5);
	cout << bitset<8>(bit_1) << endl;

	int n = 5;
	for (int bit = 0; bit < (1<<n); bit++) cout << bitset<8>(bit) << endl;


	return 0;
}
