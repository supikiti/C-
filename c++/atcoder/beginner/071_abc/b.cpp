#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int main() {
	string s;
	cin >> s;
	set<string> st;
	for (int i = 0; i < s.size(); i++){
		st.insert(s[i]);
	}
	auto itr = st.begin();
	cout << *itr << endl;
	return 0;
}
